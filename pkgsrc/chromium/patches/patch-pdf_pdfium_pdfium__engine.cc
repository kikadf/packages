$NetBSD$

* Part of patchset to build on NetBSD

--- pdf/pdfium/pdfium_engine.cc.orig	2024-03-19 22:14:51.439700100 +0000
+++ pdf/pdfium/pdfium_engine.cc
@@ -85,7 +85,7 @@
 #include "gin/public/cppgc.h"
 #endif
 
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
 #include "pdf/pdfium/pdfium_font_linux.h"
 #endif
 
@@ -525,7 +525,7 @@ void InitializeSDK(bool enable_v8,
 
   FPDF_InitLibraryWithConfig(&config);
 
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
   g_font_mapping_mode = font_mapping_mode;
   InitializeLinuxFontMapper();
 #endif
