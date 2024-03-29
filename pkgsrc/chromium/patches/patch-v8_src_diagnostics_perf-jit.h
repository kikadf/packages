$NetBSD$

* Part of patchset to build on NetBSD

--- v8/src/diagnostics/perf-jit.h.orig	2024-03-19 22:16:37.605171400 +0000
+++ v8/src/diagnostics/perf-jit.h
@@ -31,7 +31,7 @@
 #include "include/v8config.h"
 
 // {LinuxPerfJitLogger} is only implemented on Linux.
-#if V8_OS_LINUX
+#if defined(V8_OS_LINUX) || defined(V8_OS_BSD)
 
 #include "src/logging/log.h"
 
