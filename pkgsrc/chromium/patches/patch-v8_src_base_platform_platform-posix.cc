$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- v8/src/base/platform/platform-posix.cc.orig	2024-03-26 21:39:11.493939900 +0000
+++ v8/src/base/platform/platform-posix.cc
@@ -27,6 +27,9 @@
     defined(__NetBSD__) || defined(__OpenBSD__)
 #include <sys/sysctl.h>  // for sysctl
 #endif
+#if defined(__NetBSD__)
+#include <lwp.h>
+#endif
 
 #if defined(ANDROID) && !defined(V8_ANDROID_LOG_STDOUT)
 #define LOG_TAG "v8"
@@ -54,7 +57,7 @@
 #if V8_OS_DARWIN
 #include <mach/mach.h>
 #include <malloc/malloc.h>
-#else
+#elif !V8_OS_BSD
 #include <malloc.h>
 #endif
 
@@ -72,9 +75,11 @@
 #include <sys/syscall.h>
 #endif
 
-#if V8_OS_FREEBSD || V8_OS_DARWIN || V8_OS_OPENBSD || V8_OS_SOLARIS
+#if V8_OS_FREEBSD || V8_OS_DARWIN || V8_OS_BSD || V8_OS_SOLARIS
+#ifndef MAP_ANONYMOUS
 #define MAP_ANONYMOUS MAP_ANON
 #endif
+#endif
 
 #if defined(V8_OS_SOLARIS)
 #if (defined(_POSIX_C_SOURCE) && _POSIX_C_SOURCE > 2) || defined(__EXTENSIONS__)
@@ -303,6 +308,13 @@ void OS::SetRandomMmapSeed(int64_t seed)
   }
 }
 
+#if V8_OS_OPENBSD
+// Allow OpenBSD's mmap to select a random address on OpenBSD
+// static
+void* OS::GetRandomMmapAddr() {
+  return nullptr;
+}
+#else
 // static
 void* OS::GetRandomMmapAddr() {
   uintptr_t raw_addr;
@@ -399,6 +411,7 @@ void* OS::GetRandomMmapAddr() {
 #endif
   return reinterpret_cast<void*>(raw_addr);
 }
+#endif
 
 // TODO(bbudge) Move Cygwin and Fuchsia stuff into platform-specific files.
 #if !V8_OS_CYGWIN && !V8_OS_FUCHSIA
@@ -672,7 +685,7 @@ void OS::DestroySharedMemoryHandle(Platf
 
 // static
 bool OS::HasLazyCommits() {
-#if V8_OS_AIX || V8_OS_LINUX || V8_OS_DARWIN
+#if V8_OS_AIX || V8_OS_LINUX || V8_OS_DARWIN || V8_OS_BSD
   return true;
 #else
   // TODO(bbudge) Return true for all POSIX platforms.
@@ -822,6 +835,8 @@ int OS::GetCurrentThreadId() {
   return static_cast<int>(thread_self());
 #elif V8_OS_FUCHSIA
   return static_cast<int>(zx_thread_self());
+#elif V8_OS_NETBSD
+  return static_cast<int>(_lwp_self());
 #elif V8_OS_SOLARIS
   return static_cast<int>(pthread_self());
 #else
@@ -1114,7 +1129,11 @@ Thread::Thread(const Options& options)
       stack_size_(options.stack_size()),
       priority_(options.priority()),
       start_semaphore_(nullptr) {
+#if !defined(V8_OS_NETBSD)
   const int min_stack_size = static_cast<int>(PTHREAD_STACK_MIN);
+#else
+  const int min_stack_size = static_cast<int>(sysconf(_SC_THREAD_STACK_MIN));
+#endif
   if (stack_size_ > 0) stack_size_ = std::max(stack_size_, min_stack_size);
   set_name(options.name());
 }
@@ -1129,7 +1148,7 @@ static void SetThreadName(const char* na
   pthread_set_name_np(pthread_self(), name);
 #elif V8_OS_NETBSD
   static_assert(Thread::kMaxThreadNameLength <= PTHREAD_MAX_NAMELEN_NP);
-  pthread_setname_np(pthread_self(), "%s", name);
+  pthread_setname_np(pthread_self(), "%s", (void *)name);
 #elif V8_OS_DARWIN
   // pthread_setname_np is only available in 10.6 or later, so test
   // for it at runtime.
@@ -1304,7 +1323,7 @@ void Thread::SetThreadLocal(LocalStorage
 // keep this version in POSIX as most Linux-compatible derivatives will
 // support it. MacOS and FreeBSD are different here.
 #if !defined(V8_OS_FREEBSD) && !defined(V8_OS_DARWIN) && !defined(_AIX) && \
-    !defined(V8_OS_SOLARIS)
+    !defined(V8_OS_SOLARIS) && !defined(V8_OS_OPENBSD) && !defined(V8_OS_NETBSD)
 
 namespace {
 #if DEBUG
