$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- content/browser/gpu/gpu_data_manager_impl.cc.orig	2024-05-21 22:43:00.893413300 +0000
+++ content/browser/gpu/gpu_data_manager_impl.cc
@@ -396,7 +396,7 @@ void GpuDataManagerImpl::OnDisplayMetric
   private_->OnDisplayMetricsChanged(display, changed_metrics);
 }
 
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 bool GpuDataManagerImpl::IsGpuMemoryBufferNV12Supported() {
   base::AutoLock auto_lock(lock_);
   return private_->IsGpuMemoryBufferNV12Supported();
