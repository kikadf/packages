$NetBSD$

* Part of patchset to build on NetBSD

--- extensions/browser/api/management/management_api.cc.orig	2024-03-06 00:14:52.386970800 +0000
+++ extensions/browser/api/management/management_api.cc
@@ -279,7 +279,7 @@ bool PlatformSupportsApprovalFlowForExte
 #if BUILDFLAG(IS_CHROMEOS)
   // ChromeOS devices have this feature already shipped.
   return true;
-#elif BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_WIN)
+#elif BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_WIN) || BUILDFLAG(IS_BSD)
   return base::FeatureList::IsEnabled(
       supervised_user::kEnableExtensionsPermissionsForSupervisedUsersOnDesktop);
 #else