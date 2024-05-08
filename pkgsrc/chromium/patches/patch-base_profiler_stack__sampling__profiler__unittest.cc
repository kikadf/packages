$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- base/profiler/stack_sampling_profiler_unittest.cc.orig	2024-04-30 23:46:40.966080400 +0000
+++ base/profiler/stack_sampling_profiler_unittest.cc
@@ -42,7 +42,7 @@
 #include <intrin.h>
 #include <malloc.h>
 #include <windows.h>
-#else
+#elif !BUILDFLAG(IS_BSD)
 #include <alloca.h>
 #endif
 
