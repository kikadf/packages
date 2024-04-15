$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- base/profiler/stack_sampling_profiler_test_util.cc.orig	2024-04-10 21:24:37.232048700 +0000
+++ base/profiler/stack_sampling_profiler_test_util.cc
@@ -36,7 +36,7 @@
 // Fortunately, it provides _alloca, which functions identically.
 #include <malloc.h>
 #define alloca _alloca
-#else
+#elif !BUILDFLAG(IS_BSD)
 #include <alloca.h>
 #endif
 
