$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- ui/compositor/compositor.h.orig	2024-05-21 22:43:35.752522200 +0000
+++ ui/compositor/compositor.h
@@ -456,7 +456,7 @@ class COMPOSITOR_EXPORT Compositor : pub
   // base::PowerSuspendObserver:
   void OnResume() override;
 
-#if BUILDFLAG(IS_LINUX) && BUILDFLAG(IS_OZONE_X11)
+#if (BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)) && BUILDFLAG(IS_OZONE_X11)
   void OnCompleteSwapWithNewSize(const gfx::Size& size);
 #endif  // BUILDFLAG(IS_LINUX) && BUILDFLAG(IS_OZONE_X11)
 
