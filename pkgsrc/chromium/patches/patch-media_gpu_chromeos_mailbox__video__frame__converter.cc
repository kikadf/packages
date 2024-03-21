$NetBSD$

* Part of patchset to build on NetBSD

--- media/gpu/chromeos/mailbox_video_frame_converter.cc.orig	2024-03-06 00:14:54.979195800 +0000
+++ media/gpu/chromeos/mailbox_video_frame_converter.cc
@@ -61,7 +61,7 @@ viz::SharedImageFormat GetSharedImageFor
                     << static_cast<int>(buffer_format);
       NOTREACHED_NORETURN();
   }
-#if BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   // If format is true multiplanar format, we prefer external sampler on
   // ChromeOS and Linux.
   if (format.is_multi_plane()) {
