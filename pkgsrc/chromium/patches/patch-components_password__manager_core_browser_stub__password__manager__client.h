$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- components/password_manager/core/browser/stub_password_manager_client.h.orig	2024-05-21 22:42:58.545204000 +0000
+++ components/password_manager/core/browser/stub_password_manager_client.h
@@ -74,7 +74,7 @@ class StubPasswordManagerClient : public
   MockPasswordFeatureManager* GetPasswordFeatureManager();
   version_info::Channel GetChannel() const override;
 #if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_MAC) || \
-    BUILDFLAG(IS_CHROMEOS)
+    BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
   std::unique_ptr<
       password_manager::PasswordCrossDomainConfirmationPopupController>
   ShowCrossDomainConfirmationPopup(
