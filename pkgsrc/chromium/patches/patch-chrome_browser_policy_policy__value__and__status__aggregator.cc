$NetBSD$

* Part of patchset to build on NetBSD

--- chrome/browser/policy/policy_value_and_status_aggregator.cc.orig	2024-03-19 22:14:31.917958500 +0000
+++ chrome/browser/policy/policy_value_and_status_aggregator.cc
@@ -53,7 +53,7 @@
 #include "chrome/browser/policy/value_provider/extension_policies_value_provider.h"
 #endif  // BUILDFLAG(ENABLE_EXTENSIONS)
 
-#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 #include "components/policy/core/common/cloud/profile_cloud_policy_manager.h"
 #endif  // BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX)
 
@@ -99,7 +99,7 @@ std::unique_ptr<policy::PolicyStatusProv
 #else  // BUILDFLAG(IS_CHROMEOS_ASH)
   policy::CloudPolicyManager* cloud_policy_manager =
       profile->GetUserCloudPolicyManager();
-#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   if (!cloud_policy_manager) {
     cloud_policy_manager = profile->GetProfileCloudPolicyManager();
   }
