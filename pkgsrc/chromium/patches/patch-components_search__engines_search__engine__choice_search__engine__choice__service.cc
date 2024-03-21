$NetBSD$

* Part of patchset to build on NetBSD

--- components/search_engines/search_engine_choice/search_engine_choice_service.cc.orig	2024-03-06 00:14:48.910669000 +0000
+++ components/search_engines/search_engine_choice/search_engine_choice_service.cc
@@ -456,7 +456,7 @@ void SearchEngineChoiceService::Preproce
 
 int SearchEngineChoiceService::GetCountryIdInternal() {
   // `country_codes::kCountryIDAtInstall` may not be set yet.
-#if BUILDFLAG(IS_ANDROID) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_ANDROID) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   // On Android, ChromeOS and Linux, `country_codes::kCountryIDAtInstall` is
   // computed asynchronously using platform-specific signals, and may not be
   // available yet.
