$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- chrome/browser/password_manager/chrome_password_manager_client.cc.orig	2024-04-10 21:24:42.176442900 +0000
+++ chrome/browser/password_manager/chrome_password_manager_client.cc
@@ -671,7 +671,7 @@ void ChromePasswordManagerClient::Notify
 }
 
 void ChromePasswordManagerClient::NotifyKeychainError() {
-#if BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   PasswordsClientUIDelegate* manage_passwords_ui_controller =
       PasswordsClientUIDelegateFromWebContents(web_contents());
   manage_passwords_ui_controller->OnKeychainError();
