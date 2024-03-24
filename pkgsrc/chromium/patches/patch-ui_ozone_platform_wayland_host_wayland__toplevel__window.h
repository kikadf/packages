$NetBSD$

* Part of patchset to build on NetBSD

--- ui/ozone/platform/wayland/host/wayland_toplevel_window.h.orig	2024-03-19 22:15:27.510918100 +0000
+++ ui/ozone/platform/wayland/host/wayland_toplevel_window.h
@@ -259,7 +259,7 @@ class WaylandToplevelWindow : public Way
   // The display ID to switch to in case the state is `kFullscreen`.
   int64_t fullscreen_display_id_ = display::kInvalidDisplayId;
 
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   // Contains the current state of the tiled edges.
   WindowTiledEdges tiled_state_;
 #endif
