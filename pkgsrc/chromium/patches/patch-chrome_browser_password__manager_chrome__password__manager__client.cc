$NetBSD$

* Part of patchset to build on NetBSD

--- chrome/browser/password_manager/chrome_password_manager_client.cc.orig	2024-03-06 00:14:41.566031500 +0000
+++ chrome/browser/password_manager/chrome_password_manager_client.cc
@@ -675,7 +675,7 @@ void ChromePasswordManagerClient::Notify
 }
 
 void ChromePasswordManagerClient::NotifyKeychainError() {
-#if BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   PasswordsClientUIDelegate* manage_passwords_ui_controller =
       PasswordsClientUIDelegateFromWebContents(web_contents());
   manage_passwords_ui_controller->OnKeychainError();