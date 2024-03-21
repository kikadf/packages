$NetBSD$

* Part of patchset to build on NetBSD

--- base/profiler/stack_sampling_profiler_unittest.cc.orig	2024-03-06 00:14:37.033638000 +0000
+++ base/profiler/stack_sampling_profiler_unittest.cc
@@ -41,7 +41,7 @@
 #include <intrin.h>
 #include <malloc.h>
 #include <windows.h>
-#else
+#elif !BUILDFLAG(IS_BSD)
 #include <alloca.h>
 #endif
 
