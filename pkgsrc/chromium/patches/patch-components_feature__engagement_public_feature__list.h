$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- components/feature_engagement/public/feature_list.h.orig	2024-05-21 22:42:57.985154000 +0000
+++ components/feature_engagement/public/feature_list.h
@@ -265,7 +265,7 @@ DEFINE_VARIATION_PARAM(kIPHiOSInlineEnha
 #endif  // BUILDFLAG(IS_IOS)
 
 #if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_APPLE) || BUILDFLAG(IS_LINUX) || \
-    BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_FUCHSIA)
+    BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_FUCHSIA) || BUILDFLAG(IS_BSD)
 DEFINE_VARIATION_PARAM(kIPHBatterySaverModeFeature, "IPH_BatterySaverMode");
 DEFINE_VARIATION_PARAM(kIPHCompanionSidePanelFeature, "IPH_CompanionSidePanel");
 DEFINE_VARIATION_PARAM(kIPHCompanionSidePanelRegionSearchFeature,
@@ -358,7 +358,7 @@ DEFINE_VARIATION_PARAM(kIPHBackNavigatio
 #endif  // BUILDFLAG(IS_WIN) || BUILDFLAG(IS_APPLE) || BUILDFLAG(IS_LINUX) ||
         // BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_FUCHSIA)
 
-#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_APPLE) || BUILDFLAG(IS_LINUX) || \
+#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_APPLE) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD) || \
     BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_ANDROID) || BUILDFLAG(IS_FUCHSIA)
 DEFINE_VARIATION_PARAM(kIPHAutofillCreditCardBenefitFeature,
                        "IPH_AutofillCreditCardBenefit");
@@ -447,7 +447,7 @@ DEFINE_VARIATION_PARAM(kIPHScalableIphHe
 DEFINE_VARIATION_PARAM(kIPHScalableIphGamingFeature, "IPH_ScalableIphGaming");
 #endif  // BUILDFLAG(IS_CHROMEOS_ASH)
 
-#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 DEFINE_VARIATION_PARAM(kIPHDesktopPWAsLinkCapturingLaunch,
                        "IPH_DesktopPWAsLinkCapturingLaunch");
 #endif  // BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX)
@@ -595,7 +595,7 @@ constexpr flags_ui::FeatureEntry::Featur
         VARIATION_ENTRY(kIPHiOSPromoGenericDefaultBrowserFeature),
         VARIATION_ENTRY(kIPHiOSOverflowMenuCustomizationFeature),
 #elif BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || \
-    BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_FUCHSIA)
+    BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_FUCHSIA) || BUILDFLAG(IS_BSD)
         VARIATION_ENTRY(kIPHBatterySaverModeFeature),
         VARIATION_ENTRY(kIPHCompanionSidePanelFeature),
         VARIATION_ENTRY(kIPHCompanionSidePanelRegionSearchFeature),
@@ -649,7 +649,7 @@ constexpr flags_ui::FeatureEntry::Featur
 #endif  // BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) ||
         // BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_FUCHSIA)
 
-#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_APPLE) || BUILDFLAG(IS_LINUX) || \
+#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_APPLE) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD) || \
     BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_ANDROID) || BUILDFLAG(IS_FUCHSIA)
         VARIATION_ENTRY(kIPHAutofillCreditCardBenefitFeature),
         VARIATION_ENTRY(kIPHAutofillExternalAccountProfileSuggestionFeature),
@@ -700,7 +700,7 @@ constexpr flags_ui::FeatureEntry::Featur
         VARIATION_ENTRY(kIPHScalableIphGamingFeature),
 #endif  // BUILDFLAG(IS_CHROMEOS_ASH)
 
-#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
         VARIATION_ENTRY(kIPHDesktopPWAsLinkCapturingLaunch),
 #endif  // BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX)
 
