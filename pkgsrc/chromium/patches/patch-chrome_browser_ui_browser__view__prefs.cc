$NetBSD$

* Part of patchset to build on NetBSD

--- chrome/browser/ui/browser_view_prefs.cc.orig	2024-03-19 22:14:33.874132900 +0000
+++ chrome/browser/ui/browser_view_prefs.cc
@@ -15,7 +15,7 @@
 
 namespace {
 
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 bool GetCustomFramePrefDefault() {
 #if BUILDFLAG(IS_OZONE)
   return ui::OzonePlatform::GetInstance()
@@ -31,7 +31,7 @@ bool GetCustomFramePrefDefault() {
 
 void RegisterBrowserViewProfilePrefs(
     user_prefs::PrefRegistrySyncable* registry) {
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   registry->RegisterBooleanPref(prefs::kUseCustomChromeFrame,
                                 GetCustomFramePrefDefault());
 #endif
