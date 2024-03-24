$NetBSD$

* Part of patchset to build on NetBSD

--- chrome/browser/media/webrtc/desktop_media_picker_controller.cc.orig	2024-03-19 22:14:31.553926000 +0000
+++ chrome/browser/media/webrtc/desktop_media_picker_controller.cc
@@ -92,7 +92,7 @@ bool DesktopMediaPickerController::IsSys
   } else {
     return base::FeatureList::IsEnabled(media::kMacLoopbackAudioForScreenShare);
   }
-#elif BUILDFLAG(IS_LINUX)
+#elif BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   if (request_source == Params::RequestSource::kCast) {
     return base::FeatureList::IsEnabled(media::kPulseaudioLoopbackForCast);
   } else {
