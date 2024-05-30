$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- components/password_manager/core/browser/stub_password_manager_client.cc.orig	2024-05-21 22:42:58.545204000 +0000
+++ components/password_manager/core/browser/stub_password_manager_client.cc
@@ -175,7 +175,7 @@ version_info::Channel StubPasswordManage
 }
 
 #if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_MAC) || \
-    BUILDFLAG(IS_CHROMEOS)
+    BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
 std::unique_ptr<
     password_manager::PasswordCrossDomainConfirmationPopupController>
 StubPasswordManagerClient::ShowCrossDomainConfirmationPopup(
