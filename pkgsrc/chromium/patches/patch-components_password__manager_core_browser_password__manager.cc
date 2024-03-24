$NetBSD$

* Part of patchset to build on NetBSD

--- components/password_manager/core/browser/password_manager.cc.orig	2024-03-19 22:14:39.410627000 +0000
+++ components/password_manager/core/browser/password_manager.cc
@@ -361,7 +361,7 @@ void PasswordManager::RegisterProfilePre
   registry->RegisterListPref(prefs::kPasswordManagerPromoCardsList);
 #endif  // BUILDFLAG(IS_ANDROID) && !BUILDFLAG(IS_IOS)
   registry->RegisterBooleanPref(prefs::kPasswordSharingEnabled, true);
-#if BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   registry->RegisterIntegerPref(prefs::kRelaunchChromeBubbleDismissedCounter,
                                 0);
 #endif
