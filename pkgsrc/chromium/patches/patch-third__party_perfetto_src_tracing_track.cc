$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- third_party/perfetto/src/tracing/track.cc.orig	2024-04-10 21:26:08.747341900 +0000
+++ third_party/perfetto/src/tracing/track.cc
@@ -143,7 +143,7 @@ namespace internal {
 namespace {
 
 uint64_t GetProcessStartTime() {
-#if !PERFETTO_BUILDFLAG(PERFETTO_OS_WIN)
+#if !PERFETTO_BUILDFLAG(PERFETTO_OS_WIN) && !PERFETTO_BUILDFLAG(PERFETTO_OS_BSD)
   std::string stat;
   if (!base::ReadFile("/proc/self/stat", &stat))
     return 0u;
