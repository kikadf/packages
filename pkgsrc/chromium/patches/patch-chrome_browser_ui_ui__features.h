$NetBSD$

* Part of patchset to build on NetBSD

--- chrome/browser/ui/ui_features.h.orig	2024-03-19 22:14:34.058149300 +0000
+++ chrome/browser/ui/ui_features.h
@@ -223,7 +223,7 @@ BASE_DECLARE_FEATURE(kToolbarUseHardware
 
 BASE_DECLARE_FEATURE(kTopChromeWebUIUsesSpareRenderer);
 
-#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 BASE_DECLARE_FEATURE(kUpdateTextOptions);
 extern const base::FeatureParam<int> kUpdateTextOptionNumber;
 #endif
