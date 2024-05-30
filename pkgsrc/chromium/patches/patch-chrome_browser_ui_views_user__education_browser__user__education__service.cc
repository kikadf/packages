$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- chrome/browser/ui/views/user_education/browser_user_education_service.cc.orig	2024-05-21 22:42:54.132810400 +0000
+++ chrome/browser/ui/views/user_education/browser_user_education_service.cc
@@ -794,7 +794,7 @@ void MaybeRegisterChromeFeaturePromos(
                     FeaturePromoSpecification::AcceleratorInfo())
                     .SetBubbleArrow(HelpBubbleArrow::kTopLeft)));
 
-#if BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_WIN)
+#if BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_WIN) || BUILDFLAG(IS_BSD)
   // kIPHDesktopPWAsLinkCapturingLaunch:
   registry.RegisterFeature(std::move(
       FeaturePromoSpecification::CreateForCustomAction(
