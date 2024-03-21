$NetBSD$

* Part of patchset to build on NetBSD

--- ui/ozone/platform/wayland/emulate/wayland_input_emulate.cc.orig	2024-03-06 00:15:20.813438700 +0000
+++ ui/ozone/platform/wayland/emulate/wayland_input_emulate.cc
@@ -230,7 +230,7 @@ void WaylandInputEmulate::EmulateTouch(i
   wayland_proxy->FlushForTesting();
 }
 
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 void WaylandInputEmulate::ForceUseScreenCoordinatesOnce() {
   force_use_screen_coordinates_once_ = true;
 }
