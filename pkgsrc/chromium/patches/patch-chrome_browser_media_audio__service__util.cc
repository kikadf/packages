$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- chrome/browser/media/audio_service_util.cc.orig	2024-04-10 21:24:41.856417400 +0000
+++ chrome/browser/media/audio_service_util.cc
@@ -21,7 +21,7 @@
 
 namespace {
 
-#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || \
+#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_BSD) || \
     (BUILDFLAG(IS_LINUX) && !BUILDFLAG(IS_CHROMEOS_LACROS))
 const base::Value* GetPolicy(const char* policy_name) {
   const policy::PolicyMap& policies =
@@ -43,7 +43,7 @@ bool GetPolicyOrFeature(const char* poli
 bool IsAudioServiceSandboxEnabled() {
 // TODO(crbug.com/1052397): Remove !IS_CHROMEOS_LACROS once lacros starts being
 // built with OS_CHROMEOS instead of OS_LINUX.
-#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || \
+#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_BSD) || \
     (BUILDFLAG(IS_LINUX) && !BUILDFLAG(IS_CHROMEOS_LACROS))
   return GetPolicyOrFeature(policy::key::kAudioSandboxEnabled,
                             features::kAudioServiceSandbox);
