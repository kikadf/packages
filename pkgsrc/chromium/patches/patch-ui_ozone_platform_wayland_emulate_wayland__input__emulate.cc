$NetBSD$

* Part of patchset to build on NetBSD

--- ui/ozone/platform/wayland/emulate/wayland_input_emulate.cc.orig	2024-03-19 22:15:27.494916700 +0000
+++ ui/ozone/platform/wayland/emulate/wayland_input_emulate.cc
@@ -284,7 +284,7 @@ void WaylandInputEmulate::EmulateUpdateD
 }
 #endif
 
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 void WaylandInputEmulate::ForceUseScreenCoordinatesOnce() {
   force_use_screen_coordinates_once_ = true;
 }
