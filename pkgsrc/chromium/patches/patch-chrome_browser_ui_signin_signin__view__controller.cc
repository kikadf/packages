$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- chrome/browser/ui/signin/signin_view_controller.cc.orig	2024-05-21 22:42:53.808781400 +0000
+++ chrome/browser/ui/signin/signin_view_controller.cc
@@ -337,7 +337,7 @@ void SigninViewController::ShowModalMana
     bool show_link_data_option,
     signin::SigninChoiceCallback callback) {
 #if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || \
-    BUILDFLAG(IS_CHROMEOS_LACROS)
+    BUILDFLAG(IS_CHROMEOS_LACROS) || BUILDFLAG(IS_BSD)
   CloseModalSignin();
   dialog_ = std::make_unique<SigninModalDialogImpl>(
       SigninViewControllerDelegate::CreateManagedUserNoticeDelegate(
