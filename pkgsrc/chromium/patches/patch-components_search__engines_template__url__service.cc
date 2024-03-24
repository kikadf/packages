$NetBSD$

* Part of patchset to build on NetBSD

--- components/search_engines/template_url_service.cc.orig	2024-03-19 22:14:40.446719400 +0000
+++ components/search_engines/template_url_service.cc
@@ -2925,7 +2925,7 @@ bool TemplateURLService::MatchesDefaultS
 std::unique_ptr<EnterpriseSiteSearchManager>
 TemplateURLService::GetEnterpriseSiteSearchManager(PrefService* prefs) {
 #if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || \
-    BUILDFLAG(IS_CHROMEOS)
+    BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
   return base::FeatureList::IsEnabled(omnibox::kSiteSearchSettingsPolicy)
              ? std::make_unique<EnterpriseSiteSearchManager>(
                    prefs, base::BindRepeating(
