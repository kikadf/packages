$NetBSD$

* Part of patchset to build on NetBSD

--- ui/compositor/compositor.h.orig	2024-03-06 00:15:20.497411300 +0000
+++ ui/compositor/compositor.h
@@ -461,7 +461,7 @@ class COMPOSITOR_EXPORT Compositor : pub
   // base::PowerSuspendObserver:
   void OnResume() override;
 
-#if BUILDFLAG(IS_LINUX) && BUILDFLAG(IS_OZONE_X11)
+#if (BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)) && BUILDFLAG(IS_OZONE_X11)
   void OnCompleteSwapWithNewSize(const gfx::Size& size);
 #endif  // BUILDFLAG(IS_LINUX) && BUILDFLAG(IS_OZONE_X11)
 
