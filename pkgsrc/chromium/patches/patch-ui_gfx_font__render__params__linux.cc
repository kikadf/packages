$NetBSD$

* Part of patchset to build on NetBSD

--- ui/gfx/font_render_params_linux.cc.orig	2024-03-06 00:15:20.673426400 +0000
+++ ui/gfx/font_render_params_linux.cc
@@ -25,7 +25,7 @@
 #include "ui/gfx/linux/fontconfig_util.h"
 #include "ui/gfx/switches.h"
 
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 #include "ui/linux/linux_ui.h"
 #endif
 
@@ -212,7 +212,7 @@ FontRenderParams GetFontRenderParams(con
 
   // Start with the delegate's settings, but let Fontconfig have the final say.
   FontRenderParams params;
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   if (const auto* linux_ui = ui::LinuxUi::instance())
     params = linux_ui->GetDefaultFontRenderParams();
 #endif