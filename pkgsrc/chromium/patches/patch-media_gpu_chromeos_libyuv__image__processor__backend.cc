$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- media/gpu/chromeos/libyuv_image_processor_backend.cc.orig	2024-05-21 22:43:04.965776400 +0000
+++ media/gpu/chromeos/libyuv_image_processor_backend.cc
@@ -48,7 +48,7 @@ static constexpr struct {
 #define CONV(in, out, trans, result) \
   {Fourcc::in, Fourcc::out, Transform::trans, SupportResult::result}
     // Conversion.
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
     CONV(NV12, AR24, kConversion, Supported),
 #endif
     CONV(NV12, NV12, kConversion, Supported),
@@ -410,7 +410,7 @@ int LibYUVImageProcessorBackend::DoConve
           fr->GetWritableVisibleData(VideoFrame::kUVPlane)), \
       fr->stride(VideoFrame::kUVPlane)
 
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 #define ARGB_DATA(fr)                                 \
   fr->GetWritableVisibleData(VideoFrame::kARGBPlane), \
       fr->stride(VideoFrame::kARGBPlane)
@@ -571,7 +571,7 @@ int LibYUVImageProcessorBackend::DoConve
     }
   }
 
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   if (output->format() == PIXEL_FORMAT_ARGB) {
     if (input_config_.fourcc == Fourcc(Fourcc::NV12)) {
       return LIBYUV_FUNC(NV12ToARGB, Y_UV_DATA(input),
