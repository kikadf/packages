$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- chrome/browser/ui/ui_features.cc.orig	2024-05-09 21:46:39.198088200 +0000
+++ chrome/browser/ui/ui_features.cc
@@ -410,7 +410,7 @@ BASE_FEATURE(kTopChromeWebUIUsesSpareRen
              "TopChromeWebUIUsesSpareRenderer",
              base::FEATURE_ENABLED_BY_DEFAULT);
 
-#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 // Enables alternate update-related text to be displayed in browser app menu
 // button, menu item and confirmation dialog.
 BASE_FEATURE(kUpdateTextOptions,
