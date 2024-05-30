$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- content/renderer/media/gpu/gpu_video_accelerator_factories_impl.cc.orig	2024-05-21 22:43:01.497467000 +0000
+++ content/renderer/media/gpu/gpu_video_accelerator_factories_impl.cc
@@ -57,7 +57,7 @@ bool UseSingleNV12() {
 #else
   static BASE_FEATURE(kUseSingleNV12ForSoftwareGMB,
                       "UseSingleNV12ForSoftwareGMB",
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
                       base::FEATURE_ENABLED_BY_DEFAULT);
 #else
                       base::FEATURE_DISABLED_BY_DEFAULT);
