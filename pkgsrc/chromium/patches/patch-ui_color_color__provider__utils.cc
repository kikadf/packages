$NetBSD$

* Part of patchset to build on NetBSD

--- ui/color/color_provider_utils.cc.orig	2024-03-19 22:15:27.106882000 +0000
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
