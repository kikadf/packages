$NetBSD$

* Part of patchset to build on NetBSD

--- ui/gfx/platform_font_skia.cc.orig	2024-03-06 00:15:20.705429300 +0000
+++ ui/gfx/platform_font_skia.cc
@@ -30,7 +30,7 @@
 #include "ui/gfx/system_fonts_win.h"
 #endif
 
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 #include "ui/linux/linux_ui.h"
 #endif
 
@@ -168,7 +168,7 @@ void PlatformFontSkia::EnsuresDefaultFon
   weight = system_font.GetWeight();
 #endif  // BUILDFLAG(IS_WIN)
 
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   // On Linux, LinuxUi is used to query the native toolkit (e.g.
   // GTK) for the default UI font.
   if (const auto* linux_ui = ui::LinuxUi::instance()) {