$NetBSD$

--- components/media_router/common/media_source.cc.orig	2024-03-06 00:14:47.450542200 +0000
+++ components/media_router/common/media_source.cc
@@ -59,7 +59,7 @@ bool IsSystemAudioCaptureSupported() {
   }
 #if BUILDFLAG(IS_MAC)
   return base::FeatureList::IsEnabled(media::kMacLoopbackAudioForCast);
-#elif BUILDFLAG(IS_LINUX)
+#elif BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   return base::FeatureList::IsEnabled(media::kPulseaudioLoopbackForCast);
 #else
   return true;
