$NetBSD$

* Part of patchset to build chromium on NetBSD
* Based on OpenBSD's chromium patches, and
  pkgsrc's qt5-qtwebengine patches

--- components/viz/common/features.cc.orig	2024-07-24 02:44:36.760793400 +0000
+++ components/viz/common/features.cc
@@ -263,7 +263,7 @@ BASE_FEATURE(kBufferQueueImageSetPurgeab
              "BufferQueueImageSetPurgeable",
              base::FEATURE_ENABLED_BY_DEFAULT);
 
-#if BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 // On platforms using SkiaOutputDeviceBufferQueue and not yet universally using
 // SkiaRenderer-allocated images, when this is true SkiaRenderer will allocate
 // and maintain a buffer queue of images for the root render pass, instead of
@@ -559,7 +559,7 @@ bool ShouldOnBeginFrameThrottleVideo() {
   return base::FeatureList::IsEnabled(features::kOnBeginFrameThrottleVideo);
 }
 
-#if BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 bool ShouldRendererAllocateImages() {
   return base::FeatureList::IsEnabled(kRendererAllocatesImages);
 }
