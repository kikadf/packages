$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- media/gpu/vaapi/vaapi_video_decoder.cc.orig	2024-05-21 22:43:05.017781000 +0000
+++ media/gpu/vaapi/vaapi_video_decoder.cc
@@ -774,7 +774,7 @@ void VaapiVideoDecoder::ApplyResolutionC
   const gfx::Size decoder_natural_size =
       aspect_ratio_.GetNaturalSize(decoder_visible_rect);
 
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   std::optional<DmabufVideoFramePool::CreateFrameCB> allocator =
       base::BindRepeating(&AllocateCustomFrameProxy, weak_this_);
   std::vector<ImageProcessor::PixelLayoutCandidate> candidates = {
