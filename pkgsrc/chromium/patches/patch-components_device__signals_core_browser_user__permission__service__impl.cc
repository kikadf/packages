$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- components/device_signals/core/browser/user_permission_service_impl.cc.orig	2024-05-21 22:42:57.649124000 +0000
+++ components/device_signals/core/browser/user_permission_service_impl.cc
@@ -93,7 +93,7 @@ bool UserPermissionServiceImpl::ShouldCo
          consent_required_by_dependent_policy;
 }
 
-#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 UserPermission UserPermissionServiceImpl::CanUserCollectSignals(
     const UserContext& user_context) const {
   // Return "unknown user" if no user ID was given.
