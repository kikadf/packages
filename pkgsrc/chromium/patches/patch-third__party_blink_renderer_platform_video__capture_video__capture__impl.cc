$NetBSD$

* Part of patchset to build chromium on NetBSD
* Based on OpenBSD's chromium patches, and
  pkgsrc's qt5-qtwebengine patches

--- third_party/blink/renderer/platform/video_capture/video_capture_impl.cc.orig	2024-06-13 23:29:08.364891500 +0000
+++ third_party/blink/renderer/platform/video_capture/video_capture_impl.cc
@@ -696,7 +696,7 @@ bool VideoCaptureImpl::BindVideoFrameOnM
   }
 
   const unsigned texture_target =
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
       // Explicitly set GL_TEXTURE_EXTERNAL_OES if necessary:
       // `media::VideoFrame::RequiresExternalSampler()` requires it for NV12
       // format, while `ClientSharedImage::GetTextureTarget(BufferUsage,
