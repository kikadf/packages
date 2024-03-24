$NetBSD$

* Part of patchset to build on NetBSD

--- base/process/process_metrics_unittest.cc.orig	2024-03-19 22:14:27.153533500 +0000
+++ base/process/process_metrics_unittest.cc
@@ -54,7 +54,8 @@
 
 #if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) ||      \
     BUILDFLAG(IS_CHROMEOS_LACROS) || BUILDFLAG(IS_WIN) || \
-    BUILDFLAG(IS_ANDROID) || BUILDFLAG(IS_FUCHSIA) || BUILDFLAG(IS_APPLE)
+    BUILDFLAG(IS_ANDROID) || BUILDFLAG(IS_FUCHSIA) || BUILDFLAG(IS_APPLE) || \
+    BUILDFLAG(IS_BSD)
 #define ENABLE_CPU_TESTS 1
 #else
 #define ENABLE_CPU_TESTS 0
