$NetBSD$

* Part of patchset to build on NetBSD

--- third_party/perfetto/include/perfetto/base/thread_utils.h.orig	2024-03-19 22:16:14.843140600 +0000
+++ third_party/perfetto/include/perfetto/base/thread_utils.h
@@ -34,6 +34,7 @@ __declspec(dllimport) unsigned long __st
 #include <sys/syscall.h>
 #include <sys/types.h>
 #include <unistd.h>
+#include <pthread.h>
 #else
 #include <pthread.h>
 #endif
@@ -46,6 +47,11 @@ using PlatformThreadId = pid_t;
 inline PlatformThreadId GetThreadId() {
   return gettid();
 }
+#elif PERFETTO_BUILDFLAG(PERFETTO_OS_BSD)
+using PlatformThreadId = uint64_t;
+inline PlatformThreadId GetThreadId() {
+  return reinterpret_cast<uint64_t>(pthread_self());
+}
 #elif PERFETTO_BUILDFLAG(PERFETTO_OS_LINUX)
 using PlatformThreadId = pid_t;
 inline PlatformThreadId GetThreadId() {
