$NetBSD$

* Part of patchset to build on NetBSD

--- services/on_device_model/on_device_model_service.h.orig	2024-03-06 00:14:57.767438000 +0000
+++ services/on_device_model/on_device_model_service.h
@@ -18,6 +18,10 @@
 #include "sandbox/policy/linux/sandbox_linux.h"
 #endif
 
+#if BUILDFLAG(IS_BSD)
+#include "sandbox/policy/sandbox.h"
+#endif
+
 namespace on_device_model {
 
 class COMPONENT_EXPORT(ON_DEVICE_MODEL) OnDeviceModelService
@@ -27,7 +31,7 @@ class COMPONENT_EXPORT(ON_DEVICE_MODEL) 
   // These are defined separately in pre_sandbox_init.cc for explicit security
   // review coverage.
   [[nodiscard]] static bool PreSandboxInit();
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
   static void AddSandboxLinuxOptions(
       sandbox::policy::SandboxLinux::Options& options);
 #endif