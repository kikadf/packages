$NetBSD$

* Part of patchset to build on NetBSD

--- components/device_signals/core/common/signals_features.cc.orig	2024-03-06 00:14:47.102512100 +0000
+++ components/device_signals/core/common/signals_features.cc
@@ -46,7 +46,7 @@ bool IsNewFunctionEnabled(NewEvFunction 
 }
 
 #if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || \
-    BUILDFLAG(IS_CHROMEOS_ASH)
+    BUILDFLAG(IS_CHROMEOS_ASH) || BUILDFLAG(IS_BSD)
 // Enables the triggering of device signals consent dialog when conditions met
 // This feature also requires UnmanagedDeviceSignalsConsentFlowEnabled policy to
 // be enabled