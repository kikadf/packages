$NetBSD$

--- third_party/perfetto/include/perfetto/base/thread_utils.h.orig	2020-06-25 09:34:47.000000000 +0000
+++ third_party/perfetto/include/perfetto/base/thread_utils.h
@@ -71,6 +71,11 @@ using PlatformThreadId = pid_t;
 inline PlatformThreadId GetThreadId() {
   return reinterpret_cast<int32_t>(pthread_self());
 }
+#elif PERFETTO_BUILDFLAG(PERFETTO_OS_NETBSD)
+using PlatformThreadId = uint64_t;
+inline PlatformThreadId GetThreadId() {
+  return reinterpret_cast<int64_t>(pthread_self());
+}
 #else  // Default to pthreads in case no OS is set.
 using PlatformThreadId = pthread_t;
 inline PlatformThreadId GetThreadId() {
