$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- services/on_device_model/ml/on_device_model_executor.cc.orig	2024-05-21 22:43:07.425995800 +0000
+++ services/on_device_model/ml/on_device_model_executor.cc
@@ -60,7 +60,7 @@ const base::FeatureParam<bool> kAllowFp1
     &optimization_guide::features::kOptimizationGuideOnDeviceModel,
     "on_device_model_allow_fp16",
 // TODO(b/333406033): Fix Linux fp16 issues.
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
     false
 #else
     true
