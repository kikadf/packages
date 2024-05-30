$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- cc/base/features.cc.orig	2024-05-21 22:42:47.056179000 +0000
+++ cc/base/features.cc
@@ -88,7 +88,7 @@ BASE_FEATURE(kNormalPriorityImageDecodin
 // be using a separate flag to control the launch on GL.
 BASE_FEATURE(kUseDMSAAForTiles,
              "UseDMSAAForTiles",
-#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_ANDROID)
+#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_ANDROID) || BUILDFLAG(IS_BSD)
              base::FEATURE_ENABLED_BY_DEFAULT
 #else
              base::FEATURE_DISABLED_BY_DEFAULT
