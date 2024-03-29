$NetBSD$

* Part of patchset to build on NetBSD

--- chrome/browser/password_manager/password_reuse_manager_factory.cc.orig	2024-03-19 22:14:31.837951200 +0000
+++ chrome/browser/password_manager/password_reuse_manager_factory.cc
@@ -137,7 +137,7 @@ PasswordReuseManagerFactory::BuildServic
 // TODO(crbug.com/1052397): Revisit the macro expression once build flag switch
 // of lacros-chrome is complete.
 #if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || \
-    BUILDFLAG(IS_CHROMEOS_LACROS)
+    BUILDFLAG(IS_CHROMEOS_LACROS) || BUILDFLAG(IS_BSD)
   std::unique_ptr<password_manager::PasswordStoreSigninNotifier> notifier =
       std::make_unique<password_manager::PasswordStoreSigninNotifierImpl>(
           IdentityManagerFactory::GetForProfile(profile));
