$NetBSD$

* Part of patchset to build on NetBSD

--- sandbox/policy/switches.h.orig	2024-03-19 22:14:51.867738200 +0000
+++ sandbox/policy/switches.h
@@ -57,10 +57,10 @@ SANDBOX_POLICY_EXPORT extern const char 
 SANDBOX_POLICY_EXPORT extern const char kMirroringSandbox[];
 #endif  // BUILDFLAG(IS_MAC)
 
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS_ASH)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS_ASH) || BUILDFLAG(IS_BSD)
 SANDBOX_POLICY_EXPORT extern const char kHardwareVideoDecodingSandbox[];
 #endif  // BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS_ASH)
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
 SANDBOX_POLICY_EXPORT extern const char kHardwareVideoEncodingSandbox[];
 #endif  // BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
 
@@ -81,7 +81,8 @@ SANDBOX_POLICY_EXPORT extern const char 
 SANDBOX_POLICY_EXPORT extern const char kGpuSandboxAllowSysVShm[];
 SANDBOX_POLICY_EXPORT extern const char kGpuSandboxFailuresFatal[];
 SANDBOX_POLICY_EXPORT extern const char kNoSandbox[];
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+SANDBOX_POLICY_EXPORT extern const char kDisableUnveil[];
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
 SANDBOX_POLICY_EXPORT extern const char kNoZygoteSandbox[];
 #endif
 #if BUILDFLAG(IS_WIN)
