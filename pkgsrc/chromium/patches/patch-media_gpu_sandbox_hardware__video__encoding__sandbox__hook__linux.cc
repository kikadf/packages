$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- media/gpu/sandbox/hardware_video_encoding_sandbox_hook_linux.cc.orig	2024-05-21 22:43:04.981778000 +0000
+++ media/gpu/sandbox/hardware_video_encoding_sandbox_hook_linux.cc
@@ -18,12 +18,15 @@
 #include "media/gpu/v4l2/v4l2_device.h"
 #endif
 
+#if !BUILDFLAG(IS_BSD)
 using sandbox::syscall_broker::BrokerFilePermission;
+#endif
 
 namespace media {
 
 bool HardwareVideoEncodingPreSandboxHook(
     sandbox::policy::SandboxLinux::Options options) {
+#if !BUILDFLAG(IS_BSD)
   sandbox::syscall_broker::BrokerCommandSet command_set;
   std::vector<BrokerFilePermission> permissions;
 
@@ -121,6 +124,7 @@ bool HardwareVideoEncodingPreSandboxHook
     }
   }
 #endif
+#endif
   return true;
 }
 
