$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- chrome/browser/ui/chrome_pages.h.orig	2024-04-10 21:24:43.924582200 +0000
+++ chrome/browser/ui/chrome_pages.h
@@ -38,7 +38,7 @@ enum class ConsentLevel;
 }  // namespace signin
 
 #if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || \
-    BUILDFLAG(IS_FUCHSIA)
+    BUILDFLAG(IS_FUCHSIA) || BUILDFLAG(IS_BSD)
 namespace web_app {
 enum class AppSettingsPageEntryPoint;
 }  // namespace web_app
@@ -258,7 +258,7 @@ void ShowShortcutCustomizationApp(Profil
 #endif
 
 #if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || \
-    BUILDFLAG(IS_FUCHSIA)
+    BUILDFLAG(IS_FUCHSIA) || BUILDFLAG(IS_BSD)
 // Show chrome://app-settings/<app-id> page.
 void ShowWebAppSettings(Browser* browser,
                         const std::string& app_id,
