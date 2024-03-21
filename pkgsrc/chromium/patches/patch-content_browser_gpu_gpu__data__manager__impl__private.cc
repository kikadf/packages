$NetBSD$

* Part of patchset to build on NetBSD

--- content/browser/gpu/gpu_data_manager_impl_private.cc.orig	2024-03-06 00:14:50.518808600 +0000
+++ content/browser/gpu/gpu_data_manager_impl_private.cc
@@ -1783,7 +1783,7 @@ void GpuDataManagerImplPrivate::RecordCo
   UMA_HISTOGRAM_ENUMERATION("GPU.CompositingMode", compositing_mode);
 }
 
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 bool GpuDataManagerImplPrivate::IsGpuMemoryBufferNV12Supported() {
   return is_gpu_memory_buffer_NV12_supported_;
 }
