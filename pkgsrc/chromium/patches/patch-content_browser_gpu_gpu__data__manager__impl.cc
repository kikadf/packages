$NetBSD$

--- content/browser/gpu/gpu_data_manager_impl.cc.orig	2024-03-06 00:14:50.518808600 +0000
+++ content/browser/gpu/gpu_data_manager_impl.cc
@@ -405,7 +405,7 @@ void GpuDataManagerImpl::OnDisplayMetric
   private_->OnDisplayMetricsChanged(display, changed_metrics);
 }
 
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 bool GpuDataManagerImpl::IsGpuMemoryBufferNV12Supported() {
   base::AutoLock auto_lock(lock_);
   return private_->IsGpuMemoryBufferNV12Supported();
