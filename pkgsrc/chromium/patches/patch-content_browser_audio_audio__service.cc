$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- content/browser/audio/audio_service.cc.orig	2024-04-15 20:33:57.266088000 +0000
+++ content/browser/audio/audio_service.cc
@@ -34,7 +34,7 @@
 #if BUILDFLAG(ENABLE_PASSTHROUGH_AUDIO_CODECS)
 #include "ui/display/util/edid_parser.h"
 
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 #include "ui/display/display_util.h"
 #endif  // BUILDFLAG(IS_LINUX)
 
@@ -202,7 +202,7 @@ audio::mojom::AudioService& GetAudioServ
         ->PostTaskAndReplyWithResult(
             FROM_HERE, base::BindOnce(&ScanEdidBitstreams),
             base::BindOnce(&LaunchAudioService, std::move(receiver)));
-#elif BUILDFLAG(ENABLE_PASSTHROUGH_AUDIO_CODECS) && BUILDFLAG(IS_LINUX)
+#elif BUILDFLAG(ENABLE_PASSTHROUGH_AUDIO_CODECS) && (BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD))
     LaunchAudioService(
         std::move(receiver),
         ConvertEdidBitstreams(display::DisplayUtil::GetAudioFormats()));
