$NetBSD$

* Part of patchset to build on NetBSD

--- ui/views/corewm/tooltip_aura.cc.orig	2024-03-06 00:15:20.981453200 +0000
+++ ui/views/corewm/tooltip_aura.cc
@@ -38,7 +38,7 @@ namespace {
 bool CanUseTranslucentTooltipWidget() {
 // TODO(crbug.com/1052397): Revisit the macro expression once build flag switch
 // of lacros-chrome is complete.
-#if (BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS_LACROS)) || BUILDFLAG(IS_WIN)
+#if (BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS_LACROS)) || BUILDFLAG(IS_WIN) || BUILDFLAG(IS_BSD)
   return false;
 #else
   return true;
