$NetBSD$

--- content/browser/gpu/gpu_data_manager_impl.h.orig	2024-03-06 00:14:50.518808600 +0000
+++ content/browser/gpu/gpu_data_manager_impl.h
@@ -221,7 +221,7 @@ class CONTENT_EXPORT GpuDataManagerImpl 
   void OnDisplayMetricsChanged(const display::Display& display,
                                uint32_t changed_metrics) override;
 
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   bool IsGpuMemoryBufferNV12Supported();
   void SetGpuMemoryBufferNV12Supported(bool supported);
 #endif  // BUILDFLAG(IS_LINUX)
