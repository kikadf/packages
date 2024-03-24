$NetBSD$

* Part of patchset to build on NetBSD

--- ui/color/system_theme.h.orig	2024-03-19 22:15:27.110882300 +0000
+++ ui/color/system_theme.h
@@ -15,7 +15,7 @@ namespace ui {
 enum class SystemTheme {
   // Classic theme, used in the default or users' chosen theme.
   kDefault = 0,
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   kGtk = 1,
   kQt = 2,
   kMaxValue = kQt,
