$NetBSD$

* Part of patchset to build on NetBSD

--- services/on_device_model/pre_sandbox_init.cc.orig	2024-03-06 00:14:57.767438000 +0000
+++ services/on_device_model/pre_sandbox_init.cc
@@ -14,7 +14,7 @@
 #include "services/on_device_model/ml/chrome_ml.h"  // nogncheck
 #endif
 
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
 #include "gpu/config/gpu_info_collector.h"                    // nogncheck
 #include "third_party/dawn/include/dawn/dawn_proc.h"          // nogncheck
 #include "third_party/dawn/include/dawn/native/DawnNative.h"  // nogncheck
@@ -25,7 +25,7 @@ namespace on_device_model {
 
 namespace {
 
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
 constexpr uint32_t kVendorIdAMD = 0x1002;
 constexpr uint32_t kVendorIdIntel = 0x8086;
 constexpr uint32_t kVendorIdNVIDIA = 0x10DE;
@@ -74,7 +74,7 @@ bool OnDeviceModelService::PreSandboxIni
   }
 #endif
 
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
   // Warm any relevant drivers before attempting to bring up the sandbox. For
   // good measure we initialize a device instance for any adapter with an
   // appropriate backend on top of any integrated or discrete GPU.
@@ -100,7 +100,7 @@ bool OnDeviceModelService::PreSandboxIni
   return true;
 }
 
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
 // static
 void OnDeviceModelService::AddSandboxLinuxOptions(
     sandbox::policy::SandboxLinux::Options& options) {