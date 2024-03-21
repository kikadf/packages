$NetBSD$

* Part of patchset to build on NetBSD

--- components/supervised_user/core/browser/supervised_user_service.cc.orig	2024-03-06 00:14:49.398711400 +0000
+++ components/supervised_user/core/browser/supervised_user_service.cc
@@ -164,7 +164,7 @@ FirstTimeInterstitialBannerState Supervi
     const FirstTimeInterstitialBannerState original_state) {
   FirstTimeInterstitialBannerState target_state = original_state;
 #if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || \
-    BUILDFLAG(IS_IOS)
+    BUILDFLAG(IS_IOS) || BUILDFLAG(IS_BSD)
   if (supervised_user::CanDisplayFirstTimeInterstitialBanner()) {
     if (original_state != FirstTimeInterstitialBannerState::kSetupComplete &&
         can_show_first_time_interstitial_banner_) {
