$NetBSD$

* Part of patchset to build on NetBSD

--- remoting/host/desktop_capturer_wrapper.cc.orig	2024-03-19 22:14:51.651718900 +0000
+++ remoting/host/desktop_capturer_wrapper.cc
@@ -13,7 +13,7 @@
 #include "third_party/webrtc/modules/desktop_capture/desktop_capturer.h"
 #include "third_party/webrtc/modules/desktop_capture/desktop_frame.h"
 
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 #include "remoting/host/linux/wayland_desktop_capturer.h"
 #include "remoting/host/linux/wayland_utils.h"
 #endif
@@ -32,7 +32,7 @@ void DesktopCapturerWrapper::CreateCaptu
     const webrtc::DesktopCaptureOptions& options) {
   DCHECK(!capturer_);
 
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   if (IsRunningWayland()) {
     capturer_ = std::make_unique<WaylandDesktopCapturer>(options);
   } else {
@@ -109,7 +109,7 @@ void DesktopCapturerWrapper::OnCaptureRe
 bool DesktopCapturerWrapper::SupportsFrameCallbacks() {
   DCHECK_CALLED_ON_VALID_THREAD(thread_checker_);
 
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   return capturer_ && IsRunningWayland();
 #else
   return false;
