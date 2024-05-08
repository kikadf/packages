$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- chrome/browser/supervised_user/supervised_user_extensions_manager.h.orig	2024-04-30 23:46:47.298764200 +0000
+++ chrome/browser/supervised_user/supervised_user_extensions_manager.h
@@ -143,7 +143,7 @@ class SupervisedUserExtensionsManager : 
   // launched.
   bool ShouldBlockExtension(const std::string& extension_id) const;
 
-#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   // Triggers an one-time migration of the present extensions as parent-approved
   // when the feature
   // `kEnableSupervisedUserSkipParentApprovalToInstallExtensions` becomes
