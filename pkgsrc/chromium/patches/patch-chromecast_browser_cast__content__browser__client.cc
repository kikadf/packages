$NetBSD$

* Part of patchset to build on NetBSD

--- chromecast/browser/cast_content_browser_client.cc.orig	2024-03-19 22:14:36.910403700 +0000
+++ chromecast/browser/cast_content_browser_client.cc
@@ -434,7 +434,7 @@ void CastContentBrowserClient::AppendExt
                                           switches::kAudioOutputChannels));
     }
   } else if (process_type == switches::kGpuProcess) {
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
     // Necessary for accelerated 2d canvas.  By default on Linux, Chromium
     // assumes GLES2 contexts can be lost to a power-save mode, which breaks GPU
     // canvas apps.
