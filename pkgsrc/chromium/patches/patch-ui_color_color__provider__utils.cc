$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- ui/color/color_provider_utils.cc.orig	2024-04-30 23:47:29.195288200 +0000
+++ ui/color/color_provider_utils.cc
@@ -200,7 +200,7 @@ base::StringPiece SystemThemeName(ui::Sy
   switch (system_theme) {
     case ui::SystemTheme::kDefault:
       return "kDefault";
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
     case ui::SystemTheme::kGtk:
       return "kGtk";
     case ui::SystemTheme::kQt:
