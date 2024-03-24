$NetBSD$

* Part of patchset to build on NetBSD

--- ui/platform_window/platform_window_delegate.h.orig	2024-03-19 22:15:27.542920800 +0000
+++ ui/platform_window/platform_window_delegate.h
@@ -166,7 +166,7 @@ class COMPONENT_EXPORT(PLATFORM_WINDOW) 
   virtual void OnWindowStateChanged(PlatformWindowState old_state,
                                     PlatformWindowState new_state) = 0;
 
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   // Notifies the delegate that the tiled state of the window edges has changed.
   virtual void OnWindowTiledStateChanged(WindowTiledEdges new_tiled_edges);
 #endif
