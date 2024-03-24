$NetBSD$

* Part of patchset to build on NetBSD

--- chrome/browser/ui/views/user_education/browser_user_education_service.cc.orig	2024-03-19 22:14:34.362176400 +0000
+++ chrome/browser/ui/views/user_education/browser_user_education_service.cc
@@ -771,7 +771,7 @@ void MaybeRegisterChromeFeaturePromos(
                     FeaturePromoSpecification::AcceleratorInfo())
                     .SetBubbleArrow(HelpBubbleArrow::kTopLeft)));
 
-#if BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_WIN)
+#if BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_WIN) || BUILDFLAG(IS_BSD)
   // kIPHDesktopPWAsLinkCapturingLaunch:
   registry.RegisterFeature(std::move(
       FeaturePromoSpecification::CreateForCustomAction(
