$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- ui/gfx/switches.h.orig	2024-05-21 22:43:36.156558300 +0000
+++ ui/gfx/switches.h
@@ -19,7 +19,7 @@ GFX_SWITCHES_EXPORT extern const char kF
 GFX_SWITCHES_EXPORT extern const char kForcePrefersNoReducedMotion[];
 GFX_SWITCHES_EXPORT extern const char kHeadless[];
 
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
 GFX_SWITCHES_EXPORT extern const char kX11Display[];
 GFX_SWITCHES_EXPORT extern const char kNoXshm[];
 #endif
