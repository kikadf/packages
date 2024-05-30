$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- headless/lib/browser/headless_web_contents_impl.cc.orig	2024-05-21 22:43:03.085608700 +0000
+++ headless/lib/browser/headless_web_contents_impl.cc
@@ -60,7 +60,7 @@ namespace headless {
 namespace {
 
 void UpdatePrefsFromSystemSettings(blink::RendererPreferences* prefs) {
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS_LACROS) || BUILDFLAG(IS_WIN)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS_LACROS) || BUILDFLAG(IS_WIN) || BUILDFLAG(IS_BSD)
   content::UpdateFontRendererPreferencesFromSystemSettings(prefs);
 #endif
 
