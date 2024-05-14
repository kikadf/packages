$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- base/profiler/stack_sampling_profiler_test_util.cc.orig	2024-05-09 21:46:25.801203500 +0000
+++ base/profiler/stack_sampling_profiler_test_util.cc
@@ -37,7 +37,7 @@
 // Fortunately, it provides _alloca, which functions identically.
 #include <malloc.h>
 #define alloca _alloca
-#else
+#elif !BUILDFLAG(IS_BSD)
 #include <alloca.h>
 #endif
 
