$NetBSD$

* Part of patchset to build on NetBSD

--- sandbox/policy/features.h.orig	2024-03-19 22:14:51.859737400 +0000
+++ sandbox/policy/features.h
@@ -42,7 +42,7 @@ SANDBOX_POLICY_EXPORT BASE_DECLARE_FEATU
 SANDBOX_POLICY_EXPORT BASE_DECLARE_FEATURE(kForceSpectreVariant2Mitigation);
 #endif  // BUILDFLAG(IS_CHROMEOS_ASH)
 
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
 SANDBOX_POLICY_EXPORT BASE_DECLARE_FEATURE(
     kForceDisableSpectreVariant2MitigationInNetworkService);
 
