$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- chrome/browser/search_engine_choice/search_engine_choice_client_side_trial.cc.orig	2024-04-30 23:46:47.162749500 +0000
+++ chrome/browser/search_engine_choice/search_engine_choice_client_side_trial.cc
@@ -132,7 +132,7 @@ void RegisterLocalStatePrefs(PrefRegistr
 void SetUpIfNeeded(const base::FieldTrial::EntropyProvider& entropy_provider,
                    base::FeatureList* feature_list,
                    PrefService* local_state) {
-#if !BUILDFLAG(IS_LINUX) && !BUILDFLAG(IS_MAC)
+#if !BUILDFLAG(IS_LINUX) && !BUILDFLAG(IS_MAC) && !BUILDFLAG(IS_BSD)
   // Platform not in scope for this client-side trial.
   return;
 #else
