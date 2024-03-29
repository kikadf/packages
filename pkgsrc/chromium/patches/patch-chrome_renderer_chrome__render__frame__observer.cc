$NetBSD$

* Part of patchset to build on NetBSD

--- chrome/renderer/chrome_render_frame_observer.cc.orig	2024-03-19 22:14:34.966230400 +0000
+++ chrome/renderer/chrome_render_frame_observer.cc
@@ -351,7 +351,7 @@ void ChromeRenderFrameObserver::WillDeta
 
 void ChromeRenderFrameObserver::DraggableRegionsChanged() {
 #if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || \
-    BUILDFLAG(IS_CHROMEOS)
+    BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
   // Only the main frame is allowed to control draggable regions, to avoid other
   // frames manipulate the regions in the browser process.
   if (!render_frame()->IsMainFrame())
