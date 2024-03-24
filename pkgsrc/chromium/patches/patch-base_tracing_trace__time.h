$NetBSD$

* Part of patchset to build on NetBSD

--- base/tracing/trace_time.h.orig	2024-03-19 22:14:27.317548000 +0000
+++ base/tracing/trace_time.h
@@ -12,7 +12,7 @@ namespace base {
 namespace tracing {
 
 #if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_ANDROID) || \
-    BUILDFLAG(IS_FUCHSIA)
+    BUILDFLAG(IS_FUCHSIA) || BUILDFLAG(IS_BSD)
 // Linux, Android, and Fuchsia all use CLOCK_MONOTONIC. See crbug.com/166153
 // about efforts to unify base::TimeTicks across all platforms.
 constexpr perfetto::protos::pbzero::BuiltinClock kTraceClockId =
