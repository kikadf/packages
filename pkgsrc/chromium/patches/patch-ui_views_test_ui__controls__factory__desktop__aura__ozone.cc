$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- ui/views/test/ui_controls_factory_desktop_aura_ozone.cc.orig	2024-04-10 21:25:25.611904400 +0000
+++ ui/views/test/ui_controls_factory_desktop_aura_ozone.cc
@@ -296,7 +296,7 @@ void UpdateDisplaySync(const std::string
 }
 #endif
 
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 // static
 void ForceUseScreenCoordinatesOnce() {
   g_ozone_ui_controls_test_helper->ForceUseScreenCoordinatesOnce();
