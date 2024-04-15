$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- ui/ozone/platform/wayland/emulate/wayland_input_emulate.h.orig	2024-04-10 21:25:25.403887700 +0000
+++ ui/ozone/platform/wayland/emulate/wayland_input_emulate.h
@@ -68,7 +68,7 @@ class WaylandInputEmulate : public wl::W
                             uint32_t request_id);
 #endif
 
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   void ForceUseScreenCoordinatesOnce();
 #endif
 
