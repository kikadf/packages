$NetBSD$

* Part of patchset to build on NetBSD

--- content/browser/gpu/gpu_process_host.cc.orig	2024-03-06 00:14:50.522809000 +0000
+++ content/browser/gpu/gpu_process_host.cc
@@ -256,6 +256,7 @@ static const char* const kSwitchNames[] 
     switches::kEnableGpuRasterization,
     switches::kEnableSkiaGraphite,
     switches::kEnableLogging,
+    switches::kDisableUnveil,
     switches::kDoubleBufferCompositing,
     switches::kHeadless,
     switches::kLoggingLevel,
@@ -290,7 +291,7 @@ static const char* const kSwitchNames[] 
     switches::kDisableExplicitDmaFences,
     switches::kOzoneDumpFile,
 #endif
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
     switches::kX11Display,
     switches::kNoXshm,
 #endif