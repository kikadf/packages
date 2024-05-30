$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- components/password_manager/core/browser/password_manager.cc.orig	2024-05-21 22:42:58.521201600 +0000
+++ components/password_manager/core/browser/password_manager.cc
@@ -373,7 +373,7 @@ void PasswordManager::RegisterProfilePre
   registry->RegisterListPref(prefs::kPasswordManagerPromoCardsList);
 #endif  // BUILDFLAG(IS_ANDROID) && !BUILDFLAG(IS_IOS)
   registry->RegisterBooleanPref(prefs::kPasswordSharingEnabled, true);
-#if BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   registry->RegisterIntegerPref(prefs::kRelaunchChromeBubbleDismissedCounter,
                                 0);
 #endif
