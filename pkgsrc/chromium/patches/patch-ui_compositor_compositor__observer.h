$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- ui/compositor/compositor_observer.h.orig	2024-04-10 21:25:24.855844000 +0000
+++ ui/compositor/compositor_observer.h
@@ -46,7 +46,7 @@ class COMPOSITOR_EXPORT CompositorObserv
   // Called when a child of the compositor is resizing.
   virtual void OnCompositingChildResizing(Compositor* compositor) {}
 
-#if BUILDFLAG(IS_LINUX) && BUILDFLAG(IS_OZONE_X11)
+#if (BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)) && BUILDFLAG(IS_OZONE_X11)
   // Called when a swap with new size is completed.
   virtual void OnCompositingCompleteSwapWithNewSize(ui::Compositor* compositor,
                                                     const gfx::Size& size) {}
