$NetBSD$

* Part of patchset to build on NetBSD

--- components/device_signals/core/common/signals_features.h.orig	2024-03-19 22:14:38.602554800 +0000
+++ components/device_signals/core/common/signals_features.h
@@ -28,7 +28,7 @@ enum class NewEvFunction { kFileSystemIn
 bool IsNewFunctionEnabled(NewEvFunction new_ev_function);
 
 #if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || \
-    BUILDFLAG(IS_CHROMEOS_ASH)
+    BUILDFLAG(IS_CHROMEOS_ASH) || BUILDFLAG(IS_BSD)
 BASE_DECLARE_FEATURE(kDeviceSignalsConsentDialog);
 
 // Returns true if device signals consent dialog has been enabled for
