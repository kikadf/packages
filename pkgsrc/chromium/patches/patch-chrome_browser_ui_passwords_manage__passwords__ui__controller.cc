$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- chrome/browser/ui/passwords/manage_passwords_ui_controller.cc.orig	2024-05-21 22:42:53.768777800 +0000
+++ chrome/browser/ui/passwords/manage_passwords_ui_controller.cc
@@ -92,7 +92,7 @@ int ManagePasswordsUIController::save_fa
 
 namespace {
 
-#if BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 // Should be kept in sync with constant declared in
 // bubble_controllers/relaunch_chrome_bubble_controller.cc.
 constexpr int kMaxNumberOfTimesKeychainErrorBubbleIsShown = 3;
@@ -481,7 +481,7 @@ void ManagePasswordsUIController::OnBiom
 }
 
 void ManagePasswordsUIController::OnKeychainError() {
-#if BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   CHECK(!dialog_controller_);
   PrefService* prefs =
       Profile::FromBrowserContext(web_contents()->GetBrowserContext())
