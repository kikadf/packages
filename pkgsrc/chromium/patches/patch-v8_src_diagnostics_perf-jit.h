$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- v8/src/diagnostics/perf-jit.h.orig	2024-04-10 21:26:20.420272000 +0000
+++ v8/src/diagnostics/perf-jit.h
@@ -31,7 +31,7 @@
 #include "include/v8config.h"
 
 // {LinuxPerfJitLogger} is only implemented on Linux.
-#if V8_OS_LINUX
+#if defined(V8_OS_LINUX) || defined(V8_OS_BSD)
 
 #include "src/logging/log.h"
 
