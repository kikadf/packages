$NetBSD$

* Part of patchset to build on NetBSD

--- components/policy/core/common/policy_loader_common.cc.orig	2024-03-06 00:14:48.074596400 +0000
+++ components/policy/core/common/policy_loader_common.cc
@@ -46,7 +46,7 @@ const char* kSensitivePolicies[] = {
     key::kDefaultSearchProviderEnabled,
     key::kSafeBrowsingEnabled,
 #if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || \
-    BUILDFLAG(IS_CHROMEOS)
+    BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
     key::kAutoOpenFileTypes,
     key::kHomepageIsNewTabPage,
     key::kPasswordProtectionChangePasswordURL,
@@ -56,7 +56,7 @@ const char* kSensitivePolicies[] = {
     key::kSafeBrowsingAllowlistDomains,
     key::kSiteSearchSettings,
 #endif
-#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
     key::kCommandLineFlagSecurityWarningsEnabled,
 #endif
 #if !BUILDFLAG(IS_IOS)
