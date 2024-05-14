$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- remoting/codec/webrtc_video_encoder_vpx.cc.orig	2024-05-09 21:47:01.527562900 +0000
+++ remoting/codec/webrtc_video_encoder_vpx.cc
@@ -88,7 +88,7 @@ void SetVp8CodecParameters(vpx_codec_enc
                            const webrtc::DesktopSize& size) {
   SetCommonCodecParameters(config, size);
 
-#if BUILDFLAG(IS_LINUX) && !BUILDFLAG(IS_CHROMEOS_LACROS)
+#if (BUILDFLAG(IS_BSD) || BUILDFLAG(IS_LINUX)) && !BUILDFLAG(IS_CHROMEOS_LACROS)
   // On Linux, using too many threads for VP8 encoding has been linked to high
   // CPU usage on machines that are under stress. See http://crbug.com/1151148.
   // 5/3/2022 update: Perf testing has shown that doubling the number of threads
