$NetBSD$

* Part of patchset to build on NetBSD

--- chrome/browser/ui/passwords/manage_passwords_ui_controller.cc.orig	2024-03-06 00:14:43.326184300 +0000
+++ chrome/browser/ui/passwords/manage_passwords_ui_controller.cc
@@ -87,7 +87,7 @@ int ManagePasswordsUIController::save_fa
 
 namespace {
 
-#if BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 // Should be kept in sync with constant declared in
 // bubble_controllers/relaunch_chrome_bubble_controller.cc.
 constexpr int kMaxNumberOfTimesKeychainErrorBubbleIsShown = 3;
@@ -452,7 +452,7 @@ void ManagePasswordsUIController::OnBiom
 }
 
 void ManagePasswordsUIController::OnKeychainError() {
-#if BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   CHECK(!dialog_controller_);
   PrefService* prefs =
       Profile::FromBrowserContext(web_contents()->GetBrowserContext())
