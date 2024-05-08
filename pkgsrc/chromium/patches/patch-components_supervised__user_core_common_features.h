$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- components/supervised_user/core/common/features.h.orig	2024-04-30 23:46:54.175506600 +0000
+++ components/supervised_user/core/common/features.h
@@ -23,7 +23,7 @@ BASE_DECLARE_FEATURE(kLocalWebApprovals)
 BASE_DECLARE_FEATURE(
     kEnableSupervisedUserSkipParentApprovalToInstallExtensions);
 
-#if BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_WIN)
+#if BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_WIN) || BUILDFLAG(IS_BSD)
 BASE_DECLARE_FEATURE(kEnableExtensionsPermissionsForSupervisedUsersOnDesktop);
 #endif
 
