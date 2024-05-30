$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- chrome/browser/extensions/api/settings_private/prefs_util.cc.orig	2024-05-21 22:42:51.276555500 +0000
+++ chrome/browser/extensions/api/settings_private/prefs_util.cc
@@ -204,7 +204,7 @@ const PrefsUtil::TypedPrefMap& PrefsUtil
   (*s_allowlist)[::prefs::kSidePanelHorizontalAlignment] =
       settings_api::PrefType::kBoolean;
 
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   (*s_allowlist)[::prefs::kUseCustomChromeFrame] =
       settings_api::PrefType::kBoolean;
 #endif
@@ -215,7 +215,7 @@ const PrefsUtil::TypedPrefMap& PrefsUtil
   // Appearance settings.
   (*s_allowlist)[::prefs::kCurrentThemeID] = settings_api::PrefType::kString;
   (*s_allowlist)[::prefs::kPolicyThemeColor] = settings_api::PrefType::kNumber;
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   (*s_allowlist)[::prefs::kSystemTheme] = settings_api::PrefType::kNumber;
 #endif
   (*s_allowlist)[::prefs::kHomePage] = settings_api::PrefType::kUrl;
