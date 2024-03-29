$NetBSD$

* Part of patchset to build on NetBSD

--- media/base/audio_latency.cc.orig	2024-03-19 22:14:48.955478400 +0000
+++ media/base/audio_latency.cc
@@ -147,7 +147,7 @@ int AudioLatency::GetRtcBufferSize(int s
   }
 
 #if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_APPLE) || \
-    BUILDFLAG(IS_FUCHSIA)
+    BUILDFLAG(IS_FUCHSIA) || BUILDFLAG(IS_BSD)
   // On Linux, MacOS and Fuchsia, the low level IO implementations on the
   // browser side supports all buffer size the clients want. We use the native
   // peer connection buffer size (10ms) to achieve best possible performance.
