$NetBSD$

--- ui/ozone/platform/x11/x11_screen_ozone.h.orig	2024-03-06 00:15:20.849441800 +0000
+++ ui/ozone/platform/x11/x11_screen_ozone.h
@@ -102,7 +102,7 @@ class X11ScreenOzone : public PlatformSc
   // Indicates that |this| is initialized.
   bool initialized_ = false;
 
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   base::ScopedObservation<ui::LinuxUi, DeviceScaleFactorObserver>
       display_scale_factor_observer_{this};
 #endif
