$NetBSD$

--- chrome/browser/ui/ui_features.h.orig	2024-03-06 00:14:43.398190500 +0000
+++ chrome/browser/ui/ui_features.h
@@ -221,7 +221,7 @@ BASE_DECLARE_FEATURE(kToolbarUseHardware
 
 BASE_DECLARE_FEATURE(kTopChromeWebUIUsesSpareRenderer);
 
-#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 BASE_DECLARE_FEATURE(kUpdateTextOptions);
 extern const base::FeatureParam<int> kUpdateTextOptionNumber;
 #endif
