$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- ui/color/color_provider_utils.cc.orig	2024-04-10 21:25:24.847843400 +0000
+++ ui/color/color_provider_utils.cc
@@ -189,7 +189,7 @@ base::StringPiece SystemThemeName(ui::Sy
   switch (system_theme) {
     case ui::SystemTheme::kDefault:
       return "kDefault";
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
     case ui::SystemTheme::kGtk:
       return "kGtk";
     case ui::SystemTheme::kQt:
