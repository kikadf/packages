$NetBSD$

* Part of patchset to build on NetBSD

--- base/profiler/stack_sampling_profiler_unittest.cc.orig	2024-03-19 22:14:27.161534000 +0000
+++ base/profiler/stack_sampling_profiler_unittest.cc
@@ -42,7 +42,7 @@
 #include <intrin.h>
 #include <malloc.h>
 #include <windows.h>
-#else
+#elif !BUILDFLAG(IS_BSD)
 #include <alloca.h>
 #endif
 
