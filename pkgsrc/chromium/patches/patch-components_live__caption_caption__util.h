$NetBSD$

* Part of patchset to build on NetBSD

--- components/live_caption/caption_util.h.orig	2024-03-19 22:14:39.010591300 +0000
+++ components/live_caption/caption_util.h
@@ -15,7 +15,7 @@ class PrefService;
 namespace captions {
 
 #if BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_WIN) || \
-    BUILDFLAG(IS_MAC)
+    BUILDFLAG(IS_MAC) || BUILDFLAG(IS_BSD)
 extern const char kCaptionSettingsUrl[];
 #endif  // BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_WIN) ||
         // BUILDFLAG(IS_MAC)
