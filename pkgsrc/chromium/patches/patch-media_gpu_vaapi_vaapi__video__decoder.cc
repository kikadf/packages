$NetBSD$

* Part of patchset to build on NetBSD

--- media/gpu/vaapi/vaapi_video_decoder.cc.orig	2024-03-19 22:14:49.251505000 +0000
+++ media/gpu/vaapi/vaapi_video_decoder.cc
@@ -779,7 +779,7 @@ void VaapiVideoDecoder::ApplyResolutionC
   const gfx::Size decoder_natural_size =
       aspect_ratio_.GetNaturalSize(decoder_visible_rect);
 
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   std::optional<DmabufVideoFramePool::CreateFrameCB> allocator =
       base::BindRepeating(&AllocateCustomFrameProxy, weak_this_);
   std::vector<ImageProcessor::PixelLayoutCandidate> candidates = {
