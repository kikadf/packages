$NetBSD$

* Part of patchset to build on NetBSD

--- chrome/browser/ui/chrome_pages.cc.orig	2024-03-19 22:14:33.874132900 +0000
+++ chrome/browser/ui/chrome_pages.cc
@@ -81,7 +81,7 @@
 #endif
 
 #if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || \
-    BUILDFLAG(IS_FUCHSIA)
+    BUILDFLAG(IS_FUCHSIA) || BUILDFLAG(IS_BSD)
 #include "chrome/browser/web_applications/web_app_utils.h"
 #endif
 
@@ -702,7 +702,7 @@ void ShowShortcutCustomizationApp(Profil
 }
 
 #if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || \
-    BUILDFLAG(IS_FUCHSIA)
+    BUILDFLAG(IS_FUCHSIA) || BUILDFLAG(IS_BSD)
 void ShowWebAppSettingsImpl(Browser* browser,
                             Profile* profile,
                             const std::string& app_id,
