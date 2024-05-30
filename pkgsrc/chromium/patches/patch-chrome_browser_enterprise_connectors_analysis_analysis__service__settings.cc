$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- chrome/browser/enterprise/connectors/analysis/analysis_service_settings.cc.orig	2024-05-21 22:42:51.104540000 +0000
+++ chrome/browser/enterprise/connectors/analysis/analysis_service_settings.cc
@@ -150,7 +150,7 @@ AnalysisServiceSettings::AnalysisService
   const char* verification_key = kKeyWindowsVerification;
 #elif BUILDFLAG(IS_MAC)
   const char* verification_key = kKeyMacVerification;
-#elif BUILDFLAG(IS_LINUX)
+#elif BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   const char* verification_key = kKeyLinuxVerification;
 #endif
 
