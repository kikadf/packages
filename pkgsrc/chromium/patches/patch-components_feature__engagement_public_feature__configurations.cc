$NetBSD$

* Part of patchset to build chromium on NetBSD
* Based on OpenBSD's chromium patches, and
  pkgsrc's qt5-qtwebengine patches

--- components/feature_engagement/public/feature_configurations.cc.orig	2024-07-24 02:44:34.036529500 +0000
+++ components/feature_engagement/public/feature_configurations.cc
@@ -99,7 +99,7 @@ std::optional<FeatureConfig> CreateNewUs
 
 std::optional<FeatureConfig> GetClientSideFeatureConfig(
     const base::Feature* feature) {
-#if BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_WIN)
+#if BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_WIN) || BUILDFLAG(IS_BSD)
 
   // The IPH bubble for link capturing has a trigger set to ANY so that it
   // always shows up. The per app specific guardrails are independently stored
@@ -118,7 +118,7 @@ std::optional<FeatureConfig> GetClientSi
 
 #endif  // BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_WIN)
 #if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_APPLE) || BUILDFLAG(IS_LINUX) || \
-    BUILDFLAG(IS_CHROMEOS)
+    BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
   if (kIPHPasswordsAccountStorageFeature.name == feature->name) {
     std::optional<FeatureConfig> config = FeatureConfig();
     config->valid = true;
@@ -1607,7 +1607,7 @@ std::optional<FeatureConfig> GetClientSi
 
 #endif  // BUILDFLAG(IS_ANDROID)
 
-#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_APPLE) || BUILDFLAG(IS_LINUX) || \
+#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_APPLE) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD) || \
     BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_ANDROID) || BUILDFLAG(IS_FUCHSIA)
 
   if (kIPHAutofillCreditCardBenefitFeature.name == feature->name) {
