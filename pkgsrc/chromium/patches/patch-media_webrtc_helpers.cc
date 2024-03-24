$NetBSD$

* Part of patchset to build on NetBSD

--- media/webrtc/helpers.cc.orig	2024-03-19 22:14:49.671542200 +0000
+++ media/webrtc/helpers.cc
@@ -41,14 +41,14 @@ void ConfigAutomaticGainControl(const Au
     return;
   }
 
-#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   const bool kInputVolumeAdjustmentOverrideAllowed = true;
 #elif BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_FUCHSIA)
   const bool kInputVolumeAdjustmentOverrideAllowed = false;
 #endif
 
 #if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || \
-    BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_FUCHSIA)
+    BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_FUCHSIA) || BUILDFLAG(IS_BSD)
   // Use AGC2 digital and input volume controller.
   // TODO(crbug.com/1375239): Remove `kWebRtcAllowInputVolumeAdjustment` safely.
   if (kInputVolumeAdjustmentOverrideAllowed &&
@@ -161,7 +161,7 @@ rtc::scoped_refptr<webrtc::AudioProcessi
 #endif
 #if !(BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || \
       BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_FUCHSIA) ||               \
-      BUILDFLAG(IS_ANDROID) || BUILDFLAG(IS_IOS))
+      BUILDFLAG(IS_ANDROID) || BUILDFLAG(IS_IOS)) || BUILDFLAG(IS_BSD)
   apm_config.transient_suppression.enabled =
       settings.transient_noise_suppression;
 #endif
