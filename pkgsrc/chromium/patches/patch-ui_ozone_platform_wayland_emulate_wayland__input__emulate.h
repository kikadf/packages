$NetBSD$

* Part of patchset to build on NetBSD

--- ui/ozone/platform/wayland/emulate/wayland_input_emulate.h.orig	2024-03-06 00:15:20.813438700 +0000
+++ ui/ozone/platform/wayland/emulate/wayland_input_emulate.h
@@ -61,7 +61,7 @@ class WaylandInputEmulate : public wl::W
                     int touch_id,
                     uint32_t request_id);
 
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   void ForceUseScreenCoordinatesOnce();
 #endif
 
