$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- ui/base/test/skia_gold_pixel_diff.cc.orig	2024-04-10 21:25:24.731834200 +0000
+++ ui/base/test/skia_gold_pixel_diff.cc
@@ -115,7 +115,7 @@ const char* GetPlatformName() {
   return "macOS";
 // TODO(crbug.com/1052397): Revisit the macro expression once build flag switch
 // of lacros-chrome is complete.
-#elif BUILDFLAG(IS_LINUX)
+#elif BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   return "linux";
 #elif BUILDFLAG(IS_CHROMEOS_LACROS)
   return "lacros";
