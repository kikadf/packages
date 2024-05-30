$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- base/profiler/stack_sampling_profiler_unittest.cc.orig	2024-05-21 22:42:46.732150300 +0000
+++ base/profiler/stack_sampling_profiler_unittest.cc
@@ -43,7 +43,7 @@
 
 #include <intrin.h>
 #include <malloc.h>
-#else
+#elif !BUILDFLAG(IS_BSD)
 #include <alloca.h>
 #endif
 
