$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- components/supervised_user/core/browser/supervised_user_service.cc.orig	2024-05-09 21:46:48.718717000 +0000
+++ components/supervised_user/core/browser/supervised_user_service.cc
@@ -170,7 +170,7 @@ FirstTimeInterstitialBannerState Supervi
     const FirstTimeInterstitialBannerState original_state) {
   FirstTimeInterstitialBannerState target_state = original_state;
 #if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || \
-    BUILDFLAG(IS_IOS)
+    BUILDFLAG(IS_IOS) || BUILDFLAG(IS_BSD)
   if (original_state != FirstTimeInterstitialBannerState::kSetupComplete &&
       can_show_first_time_interstitial_banner_) {
     target_state = FirstTimeInterstitialBannerState::kNeedToShow;
