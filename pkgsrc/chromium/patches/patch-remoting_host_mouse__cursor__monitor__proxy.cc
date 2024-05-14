$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- remoting/host/mouse_cursor_monitor_proxy.cc.orig	2024-05-09 21:47:01.583566700 +0000
+++ remoting/host/mouse_cursor_monitor_proxy.cc
@@ -73,7 +73,7 @@ void MouseCursorMonitorProxy::Core::Crea
 
 #if BUILDFLAG(IS_CHROMEOS_ASH)
   mouse_cursor_monitor_ = std::make_unique<MouseCursorMonitorAura>();
-#elif BUILDFLAG(IS_LINUX)
+#elif BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   if (IsRunningWayland()) {
     mouse_cursor_monitor_ = webrtc::MouseCursorMonitor::Create(options);
   } else {
