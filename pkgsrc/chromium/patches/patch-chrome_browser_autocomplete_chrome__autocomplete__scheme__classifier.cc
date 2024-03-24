$NetBSD$

* Part of patchset to build on NetBSD

--- chrome/browser/autocomplete/chrome_autocomplete_scheme_classifier.cc.orig	2024-03-19 22:14:30.753854500 +0000
+++ chrome/browser/autocomplete/chrome_autocomplete_scheme_classifier.cc
@@ -90,7 +90,7 @@ ChromeAutocompleteSchemeClassifier::GetI
       return metrics::OmniboxInputType::QUERY;
 
     case ExternalProtocolHandler::UNKNOWN: {
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
       // Linux impl of GetApplicationNameForScheme doesn't distinguish
       // between URL schemes with handers and those without. This will
       // make the default behaviour be search on Linux.
