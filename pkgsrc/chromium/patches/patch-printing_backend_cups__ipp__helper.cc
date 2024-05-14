$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- printing/backend/cups_ipp_helper.cc.orig	2024-05-09 21:47:01.431556700 +0000
+++ printing/backend/cups_ipp_helper.cc
@@ -215,7 +215,7 @@ void ExtractResolutions(const CupsOption
   // Provide a default DPI if no valid DPI is found.
 #if BUILDFLAG(IS_MAC)
   constexpr gfx::Size kDefaultMissingDpi(kDefaultMacDpi, kDefaultMacDpi);
-#elif BUILDFLAG(IS_LINUX)
+#elif BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   constexpr gfx::Size kDefaultMissingDpi(kPixelsPerInch, kPixelsPerInch);
 #else
   constexpr gfx::Size kDefaultMissingDpi(kDefaultPdfDpi, kDefaultPdfDpi);
