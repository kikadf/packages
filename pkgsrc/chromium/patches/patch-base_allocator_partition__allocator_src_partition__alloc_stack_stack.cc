$NetBSD$

* Part of patchset to build chromium on NetBSD
* Based on OpenBSD's chromium patches, and
  pkgsrc's qt5-qtwebengine patches

--- base/allocator/partition_allocator/src/partition_alloc/stack/stack.cc.orig	2024-06-13 23:28:43.318643000 +0000
+++ base/allocator/partition_allocator/src/partition_alloc/stack/stack.cc
@@ -18,6 +18,10 @@
 #include <pthread.h>
 #endif
 
+#if BUILDFLAG(IS_BSD) && !BUILDFLAG(IS_NETBSD)
+#include <pthread_np.h>
+#endif
+
 #if defined(LIBC_GLIBC)
 extern "C" void* __libc_stack_end;
 #endif
@@ -50,6 +54,36 @@ void* GetStackTop() {
   return pthread_get_stackaddr_np(pthread_self());
 }
 
+#elif defined(OS_OPENBSD)
+
+void* GetStackTop() {
+  stack_t ss;
+  if (pthread_stackseg_np(pthread_self(), &ss) != 0)
+    return nullptr;
+  return reinterpret_cast<uint8_t*>(ss.ss_sp);
+}
+
+#elif defined(OS_FREEBSD) || defined(OS_NETBSD)
+
+void* GetStackTop() {
+   pthread_attr_t attr;
+   int error = pthread_attr_init(&attr);
+   if (error) {
+     return nullptr;
+   }
+   error = pthread_attr_get_np(pthread_self(), &attr);
+   if (!error) {
+     void* base;
+     size_t size;
+     error = pthread_attr_getstack(&attr, &base, &size);
+     PA_CHECK(!error);
+     pthread_attr_destroy(&attr);
+     return reinterpret_cast<uint8_t*>(base) + size;
+   }
+  pthread_attr_destroy(&attr);
+  return nullptr;
+}
+
 #elif BUILDFLAG(IS_POSIX) || BUILDFLAG(IS_FUCHSIA)
 
 void* GetStackTop() {
