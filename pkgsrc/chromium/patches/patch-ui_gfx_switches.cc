$NetBSD$

* Part of patchset to build on NetBSD

--- ui/gfx/switches.cc.orig	2024-03-19 22:15:27.362904800 +0000
+++ ui/gfx/switches.cc
@@ -28,7 +28,7 @@ const char kForcePrefersReducedMotion[] 
 // Run in headless mode, i.e., without a UI or display server dependencies.
 const char kHeadless[] = "headless";
 
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
 // Which X11 display to connect to. Emulates the GTK+ "--display=" command line
 // argument. In use only with Ozone/X11.
 const char kX11Display[] = "display";
