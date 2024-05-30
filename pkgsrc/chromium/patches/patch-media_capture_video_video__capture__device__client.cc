$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- media/capture/video/video_capture_device_client.cc.orig	2024-05-21 22:43:04.865767500 +0000
+++ media/capture/video/video_capture_device_client.cc
@@ -154,7 +154,7 @@ FourccAndFlip GetFourccAndFlipFromPixelF
       CHECK(!is_width_odd && !is_height_odd);
       return {libyuv::FOURCC_UYVY};
     case media::PIXEL_FORMAT_RGB24:
-      if constexpr (BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)) {
+      if constexpr (BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)) {
         // Linux RGB24 defines red at lowest byte address,
         // see http://linuxtv.org/downloads/v4l-dvb-apis/packed-rgb.html.
         return {libyuv::FOURCC_RAW};
