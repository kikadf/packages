$NetBSD$

* Part of patchset to build on NetBSD

--- ui/display/screen.cc.orig	2024-03-06 00:15:20.521413300 +0000
+++ ui/display/screen.cc
@@ -85,7 +85,7 @@ void Screen::SetDisplayForNewWindows(int
   display_id_for_new_windows_ = display_id;
 }
 
-#if BUILDFLAG(IS_CHROMEOS_LACROS) || BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_CHROMEOS_LACROS) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 Screen::ScreenSaverSuspender::~ScreenSaverSuspender() = default;
 
 std::unique_ptr<Screen::ScreenSaverSuspender> Screen::SuspendScreenSaver() {