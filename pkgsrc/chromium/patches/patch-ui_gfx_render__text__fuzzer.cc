$NetBSD$

* Part of patchset to build on NetBSD

--- ui/gfx/render_text_fuzzer.cc.orig	2024-03-19 22:15:27.354904200 +0000
+++ ui/gfx/render_text_fuzzer.cc
@@ -14,7 +14,7 @@
 #include "ui/gfx/font_util.h"
 #include "ui/gfx/render_text.h"
 
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
 #include "third_party/test_fonts/fontconfig/fontconfig_util_linux.h"
 #endif
 
@@ -37,7 +37,7 @@ struct Environment {
 
     CHECK(base::i18n::InitializeICU());
 
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
     test_fonts::SetUpFontconfig();
 #endif
     gfx::InitializeFonts();
