$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- chrome/browser/enterprise/watermark/watermark_view.cc.orig	2024-05-21 22:42:51.164545500 +0000
+++ chrome/browser/enterprise/watermark/watermark_view.cc
@@ -36,7 +36,7 @@ gfx::Font WatermarkFont() {
       "Segoe UI",
 #elif BUILDFLAG(IS_MAC)
       "SF Pro Text",
-#elif BUILDFLAG(IS_LINUX)
+#elif BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
       "Ubuntu",
 #elif BUILDFLAG(IS_CHROMEOS)
       "Google Sans",
@@ -47,7 +47,7 @@ gfx::Font WatermarkFont() {
 }
 
 gfx::Font::Weight WatermarkFontWeight() {
-#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   return gfx::Font::Weight::SEMIBOLD;
 #else
   return gfx::Font::Weight::MEDIUM;