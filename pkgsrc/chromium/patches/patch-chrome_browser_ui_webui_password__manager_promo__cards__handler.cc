$NetBSD$

* Part of patchset to build on NetBSD

--- chrome/browser/ui/webui/password_manager/promo_cards_handler.cc.orig	2024-03-19 22:14:34.546193000 +0000
+++ chrome/browser/ui/webui/password_manager/promo_cards_handler.cc
@@ -28,7 +28,7 @@
 #include "chrome/browser/ui/webui/password_manager/promo_cards/web_password_manager_promo.h"
 #endif
 
-#if BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 #include "chrome/browser/ui/webui/password_manager/promo_cards/relaunch_chrome_promo.h"
 #endif
 
@@ -71,7 +71,7 @@ std::vector<std::unique_ptr<PasswordProm
           .get()));
 #endif
 
-#if BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   promo_cards.push_back(
       std::make_unique<RelaunchChromePromo>(profile->GetPrefs()));
 #endif
