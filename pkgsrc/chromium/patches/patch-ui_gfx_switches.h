$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- ui/gfx/switches.h.orig	2024-04-10 21:25:25.295879100 +0000
+++ ui/gfx/switches.h
@@ -18,7 +18,7 @@ GFX_SWITCHES_EXPORT extern const char kE
 GFX_SWITCHES_EXPORT extern const char kForcePrefersReducedMotion[];
 GFX_SWITCHES_EXPORT extern const char kHeadless[];
 
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
 GFX_SWITCHES_EXPORT extern const char kX11Display[];
 GFX_SWITCHES_EXPORT extern const char kNoXshm[];
 #endif
