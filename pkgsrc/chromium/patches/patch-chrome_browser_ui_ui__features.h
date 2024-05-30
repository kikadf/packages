$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- chrome/browser/ui/ui_features.h.orig	2024-05-21 22:42:53.856785800 +0000
+++ chrome/browser/ui/ui_features.h
@@ -279,7 +279,7 @@ bool IsToolbarPinningEnabled();
 
 BASE_DECLARE_FEATURE(kTopChromeWebUIUsesSpareRenderer);
 
-#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 BASE_DECLARE_FEATURE(kUpdateTextOptions);
 extern const base::FeatureParam<int> kUpdateTextOptionNumber;
 #endif
