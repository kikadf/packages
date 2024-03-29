$NetBSD$

* Part of patchset to build on NetBSD

--- components/supervised_user/core/browser/supervised_user_service.cc.orig	2024-03-19 22:14:41.114779000 +0000
+++ components/supervised_user/core/browser/supervised_user_service.cc
@@ -170,7 +170,7 @@ FirstTimeInterstitialBannerState Supervi
     const FirstTimeInterstitialBannerState original_state) {
   FirstTimeInterstitialBannerState target_state = original_state;
 #if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || \
-    BUILDFLAG(IS_IOS)
+    BUILDFLAG(IS_IOS) || BUILDFLAG(IS_BSD)
   if (supervised_user::CanDisplayFirstTimeInterstitialBanner()) {
     if (original_state != FirstTimeInterstitialBannerState::kSetupComplete &&
         can_show_first_time_interstitial_banner_) {
