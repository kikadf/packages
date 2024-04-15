$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- media/gpu/chromeos/mailbox_video_frame_converter.cc.orig	2024-04-10 21:24:56.125554600 +0000
+++ media/gpu/chromeos/mailbox_video_frame_converter.cc
@@ -62,7 +62,7 @@ viz::SharedImageFormat GetSharedImageFor
                     << static_cast<int>(buffer_format);
       NOTREACHED_NORETURN();
   }
-#if BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   // If format is true multiplanar format, we prefer external sampler on
   // ChromeOS and Linux.
   if (format.is_multi_plane()) {
