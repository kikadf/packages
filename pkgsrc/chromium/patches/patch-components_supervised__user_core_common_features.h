$NetBSD$

* Part of patchset to build on NetBSD

--- components/supervised_user/core/common/features.h.orig	2024-03-19 22:14:41.118779200 +0000
+++ components/supervised_user/core/common/features.h
@@ -28,7 +28,7 @@ extern const base::FeatureParam<std::str
 BASE_DECLARE_FEATURE(
     kEnableSupervisedUserSkipParentApprovalToInstallExtensions);
 
-#if BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_WIN)
+#if BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_WIN) || BUILDFLAG(IS_BSD)
 BASE_DECLARE_FEATURE(kEnableExtensionsPermissionsForSupervisedUsersOnDesktop);
 #endif
 
