$NetBSD$

* Part of patchset to build on NetBSD

--- components/device_signals/core/browser/user_permission_service_impl.h.orig	2024-03-19 22:14:38.598554400 +0000
+++ components/device_signals/core/browser/user_permission_service_impl.h
@@ -39,7 +39,7 @@ class UserPermissionServiceImpl : public
 
   // UserPermissionService:
   bool ShouldCollectConsent() const override;
-#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   UserPermission CanUserCollectSignals(
       const UserContext& user_context) const override;
 #endif  // BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX
