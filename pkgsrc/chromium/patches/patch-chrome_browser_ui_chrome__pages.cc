$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- chrome/browser/ui/chrome_pages.cc.orig	2024-05-21 22:42:53.680770000 +0000
+++ chrome/browser/ui/chrome_pages.cc
@@ -85,7 +85,7 @@
 #endif
 
 #if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || \
-    BUILDFLAG(IS_FUCHSIA)
+    BUILDFLAG(IS_FUCHSIA) || BUILDFLAG(IS_BSD)
 #include "chrome/browser/web_applications/web_app_utils.h"
 #endif
 
@@ -720,7 +720,7 @@ void ShowShortcutCustomizationApp(Profil
 }
 
 #if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || \
-    BUILDFLAG(IS_FUCHSIA)
+    BUILDFLAG(IS_FUCHSIA) || BUILDFLAG(IS_BSD)
 void ShowWebAppSettingsImpl(Browser* browser,
                             Profile* profile,
                             const std::string& app_id,
