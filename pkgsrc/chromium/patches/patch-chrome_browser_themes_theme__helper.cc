$NetBSD$

* Part of patchset to build on NetBSD

--- chrome/browser/themes/theme_helper.cc.orig	2024-03-06 00:14:42.686128600 +0000
+++ chrome/browser/themes/theme_helper.cc
@@ -18,7 +18,7 @@
 #include "ui/gfx/image/image.h"
 #include "ui/native_theme/native_theme.h"
 
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 #include "ui/linux/linux_ui.h"
 #endif
 
