$NetBSD$

* Part of patchset to build on NetBSD

--- components/autofill/core/browser/personal_data_manager.cc.orig	2024-03-06 00:14:46.726479500 +0000
+++ components/autofill/core/browser/personal_data_manager.cc
@@ -2409,7 +2409,8 @@ bool PersonalDataManager::ShouldShowCard
 // TODO(crbug.com/1052397): Revisit the macro expression once build flag switch
 // of lacros-chrome is complete.
 #if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS_LACROS) || \
-    BUILDFLAG(IS_WIN) || BUILDFLAG(IS_APPLE) || BUILDFLAG(IS_FUCHSIA)
+    BUILDFLAG(IS_WIN) || BUILDFLAG(IS_APPLE) || BUILDFLAG(IS_FUCHSIA) || \
+    BUILDFLAG(IS_BSD)
   // This option should only be shown for users that have not enabled the Sync
   // Feature and that have server credit cards available.
   // TODO(crbug.com/1462552): Simplify once ConsentLevel::kSync and