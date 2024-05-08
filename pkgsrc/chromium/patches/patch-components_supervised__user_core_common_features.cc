$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- components/supervised_user/core/common/features.cc.orig	2024-04-30 23:46:54.175506600 +0000
+++ components/supervised_user/core/common/features.cc
@@ -63,7 +63,7 @@ BASE_FEATURE(kEnableSupervisedUserSkipPa
              "EnableSupervisedUserSkipParentApprovalToInstallExtensions",
              base::FEATURE_DISABLED_BY_DEFAULT);
 
-#if BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_WIN)
+#if BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_WIN) || BUILDFLAG(IS_BSD)
 BASE_FEATURE(kEnableExtensionsPermissionsForSupervisedUsersOnDesktop,
              "EnableExtensionsPermissionsForSupervisedUsersOnDesktop",
              base::FEATURE_DISABLED_BY_DEFAULT);
@@ -74,7 +74,7 @@ bool IsSupervisedUserSkipParentApprovalT
 #if BUILDFLAG(IS_CHROMEOS)
   return base::FeatureList::IsEnabled(
       kEnableSupervisedUserSkipParentApprovalToInstallExtensions);
-#elif BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_WIN)
+#elif BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_WIN) || BUILDFLAG(IS_BSD)
   bool skipParentApprovalEnabled = base::FeatureList::IsEnabled(
       kEnableSupervisedUserSkipParentApprovalToInstallExtensions);
   bool permissionExtensionsForSupervisedUsersEnabled =
