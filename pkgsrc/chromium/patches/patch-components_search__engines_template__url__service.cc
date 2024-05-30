$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- components/search_engines/template_url_service.cc.orig	2024-05-21 22:42:59.233265200 +0000
+++ components/search_engines/template_url_service.cc
@@ -2961,7 +2961,7 @@ bool TemplateURLService::MatchesDefaultS
 std::unique_ptr<EnterpriseSiteSearchManager>
 TemplateURLService::GetEnterpriseSiteSearchManager(PrefService* prefs) {
 #if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || \
-    BUILDFLAG(IS_CHROMEOS)
+    BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
   return base::FeatureList::IsEnabled(omnibox::kSiteSearchSettingsPolicy)
              ? std::make_unique<EnterpriseSiteSearchManager>(
                    prefs, base::BindRepeating(
