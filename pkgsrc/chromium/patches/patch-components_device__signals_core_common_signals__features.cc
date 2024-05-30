$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- components/device_signals/core/common/signals_features.cc.orig	2024-05-21 22:42:57.649124000 +0000
+++ components/device_signals/core/common/signals_features.cc
@@ -46,7 +46,7 @@ bool IsNewFunctionEnabled(NewEvFunction 
 }
 
 #if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || \
-    BUILDFLAG(IS_CHROMEOS_ASH)
+    BUILDFLAG(IS_CHROMEOS_ASH) || BUILDFLAG(IS_BSD)
 // Enables the triggering of device signals consent dialog when conditions met
 // This feature also requires UnmanagedDeviceSignalsConsentFlowEnabled policy to
 // be enabled
