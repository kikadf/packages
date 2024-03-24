$NetBSD$

* Part of patchset to build on NetBSD

--- remoting/host/base/desktop_environment_options.cc.orig	2024-03-19 22:14:51.639717800 +0000
+++ remoting/host/base/desktop_environment_options.cc
@@ -124,7 +124,7 @@ bool DesktopEnvironmentOptions::capture_
   // TODO(joedow): Determine whether we can migrate additional platforms to
   // using the DesktopCaptureWrapper instead of the DesktopCaptureProxy. Then
   // clean up DesktopCapturerProxy::Core::CreateCapturer().
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   return capture_video_on_dedicated_thread_;
 #else
   return false;
