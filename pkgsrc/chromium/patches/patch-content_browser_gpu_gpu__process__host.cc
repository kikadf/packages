$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- content/browser/gpu/gpu_process_host.cc.orig	2024-04-10 21:24:51.973223700 +0000
+++ content/browser/gpu/gpu_process_host.cc
@@ -261,6 +261,7 @@ static const char* const kSwitchNames[] 
     switches::kEnableGpuRasterization,
     switches::kEnableSkiaGraphite,
     switches::kEnableLogging,
+    switches::kDisableUnveil,
     switches::kDoubleBufferCompositing,
     switches::kHeadless,
     switches::kLoggingLevel,
@@ -295,7 +296,7 @@ static const char* const kSwitchNames[] 
     switches::kDisableExplicitDmaFences,
     switches::kOzoneDumpFile,
 #endif
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
     switches::kX11Display,
     switches::kNoXshm,
 #endif
