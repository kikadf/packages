$NetBSD$

* Part of patchset to build on NetBSD

--- chrome/browser/themes/theme_helper.cc.orig	2024-03-19 22:14:33.302081800 +0000
+++ chrome/browser/themes/theme_helper.cc
@@ -18,7 +18,7 @@
 #include "ui/gfx/image/image.h"
 #include "ui/native_theme/native_theme.h"
 
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 #include "ui/linux/linux_ui.h"
 #endif
 
