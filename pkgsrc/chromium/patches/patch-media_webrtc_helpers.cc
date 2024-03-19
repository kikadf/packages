$NetBSD$

--- media/webrtc/helpers.cc.orig	2024-03-06 00:14:55.855271800 +0000
+++ media/webrtc/helpers.cc
@@ -40,7 +40,7 @@ void ConfigAutomaticGainControl(const Au
     apm_config.gain_controller2.enabled = false;
     return;
   }
-#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   // Use the Hybrid AGC setup, which combines the AGC1 input volume controller
   // and the AGC2 digital adaptive controller.
 
