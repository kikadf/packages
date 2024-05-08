$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- ui/platform_window/platform_window_delegate.h.orig	2024-04-30 23:47:29.587330300 +0000
+++ ui/platform_window/platform_window_delegate.h
@@ -166,7 +166,7 @@ class COMPONENT_EXPORT(PLATFORM_WINDOW) 
   virtual void OnWindowStateChanged(PlatformWindowState old_state,
                                     PlatformWindowState new_state) = 0;
 
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   // Notifies the delegate that the tiled state of the window edges has changed.
   virtual void OnWindowTiledStateChanged(WindowTiledEdges new_tiled_edges);
 #endif
