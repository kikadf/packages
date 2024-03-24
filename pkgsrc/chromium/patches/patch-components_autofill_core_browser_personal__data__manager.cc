$NetBSD$

* Part of patchset to build on NetBSD

--- components/autofill/core/browser/personal_data_manager.cc.orig	2024-03-19 22:14:38.142513800 +0000
+++ components/autofill/core/browser/personal_data_manager.cc
@@ -2329,7 +2329,8 @@ bool PersonalDataManager::ShouldShowCard
 // TODO(crbug.com/1052397): Revisit the macro expression once build flag switch
 // of lacros-chrome is complete.
 #if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS_LACROS) || \
-    BUILDFLAG(IS_WIN) || BUILDFLAG(IS_APPLE) || BUILDFLAG(IS_FUCHSIA)
+    BUILDFLAG(IS_WIN) || BUILDFLAG(IS_APPLE) || BUILDFLAG(IS_FUCHSIA) || \
+    BUILDFLAG(IS_BSD)
   // This option should only be shown for users that have not enabled the Sync
   // Feature and that have server credit cards available.
   // TODO(crbug.com/40066949): Simplify once ConsentLevel::kSync and
