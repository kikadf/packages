$NetBSD$

--- components/supervised_user/core/common/features.h.orig	2024-03-06 00:14:49.402711900 +0000
+++ components/supervised_user/core/common/features.h
@@ -24,7 +24,7 @@ BASE_DECLARE_FEATURE(kEnableManagedByPar
 extern const base::FeatureParam<std::string> kManagedByParentUiMoreInfoUrl;
 BASE_DECLARE_FEATURE(kClearingCookiesKeepsSupervisedUsersSignedIn);
 
-#if BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_WIN)
+#if BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_WIN) || BUILDFLAG(IS_BSD)
 BASE_DECLARE_FEATURE(kEnableExtensionsPermissionsForSupervisedUsersOnDesktop);
 #endif
 
