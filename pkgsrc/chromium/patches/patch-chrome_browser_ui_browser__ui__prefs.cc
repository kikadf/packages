$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- chrome/browser/ui/browser_ui_prefs.cc.orig	2024-05-21 22:42:53.676769500 +0000
+++ chrome/browser/ui/browser_ui_prefs.cc
@@ -175,7 +175,7 @@ void RegisterBrowserUserPrefs(user_prefs
   registry->RegisterDictionaryPref(prefs::kHttpsUpgradeFallbacks);
   registry->RegisterDictionaryPref(prefs::kHttpsUpgradeNavigations);
   registry->RegisterBooleanPref(prefs::kHttpsOnlyModeAutoEnabled, false);
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_WIN)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_WIN) || BUILDFLAG(IS_BSD)
   registry->RegisterStringPref(prefs::kEnterpriseLogoUrl, std::string());
 #endif  // BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_WIN)
 }
