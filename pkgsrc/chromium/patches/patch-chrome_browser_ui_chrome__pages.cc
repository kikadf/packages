$NetBSD$

* Part of patchset to build chromium on NetBSD
* Based on OpenBSD's chromium patches, and
  pkgsrc's qt5-qtwebengine patches

--- chrome/browser/ui/chrome_pages.cc.orig	2024-06-13 23:28:50.111253000 +0000
+++ chrome/browser/ui/chrome_pages.cc
@@ -86,7 +86,7 @@
 #include "components/signin/public/identity_manager/identity_manager.h"
 #endif
 
-#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 #include "chrome/browser/web_applications/web_app_utils.h"
 #endif
 
@@ -719,7 +719,7 @@ void ShowShortcutCustomizationApp(Profil
 #endif  // BUILDFLAG(IS_CHROMEOS_ASH)
 }
 
-#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 void ShowWebAppSettingsImpl(Browser* browser,
                             Profile* profile,
                             const std::string& app_id,
