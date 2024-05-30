$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- content/public/browser/service_process_host.cc.orig	2024-05-21 22:43:01.437461900 +0000
+++ content/public/browser/service_process_host.cc
@@ -70,7 +70,7 @@ ServiceProcessHost::Options::WithPreload
 
 ServiceProcessHost::Options& ServiceProcessHost::Options::WithGpuClient(
     base::PassKey<ServiceProcessHostGpuClient> passkey) {
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_WIN) || BUILDFLAG(IS_CHROMEOS_ASH)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_WIN) || BUILDFLAG(IS_CHROMEOS_ASH) || BUILDFLAG(IS_BSD)
   allow_gpu_client = true;
 #endif
   return *this;
