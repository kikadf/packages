$NetBSD$

* Part of patchset to build on NetBSD

--- chrome/browser/search_engine_choice/search_engine_choice_service_factory.cc.orig	2024-03-06 00:14:42.442107400 +0000
+++ chrome/browser/search_engine_choice/search_engine_choice_service_factory.cc
@@ -11,7 +11,7 @@
 #include "components/country_codes/country_codes.h"
 #include "components/search_engines/search_engine_choice/search_engine_choice_service.h"
 
-#if BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 #include "chrome/browser/browser_process.h"
 #include "components/variations/service/variations_service.h"
 #endif
@@ -21,7 +21,7 @@ namespace {
 std::unique_ptr<KeyedService> BuildSearchEngineChoiceService(
     content::BrowserContext* context) {
   int variations_country_id = country_codes::kCountryIDUnknown;
-#if BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   if (g_browser_process->variations_service()) {
     variations_country_id =
         country_codes::CountryStringToCountryID(base::ToUpperASCII(