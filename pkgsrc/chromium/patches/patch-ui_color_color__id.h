$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- ui/color/color_id.h.orig	2024-04-10 21:25:24.847843400 +0000
+++ ui/color/color_id.h
@@ -611,7 +611,7 @@
   E_CPONLY(kColorNativeColor6) \
   E_CPONLY(kColorNativeBaseColor) \
   E_CPONLY(kColorNativeSecondaryColor)
-#elif BUILDFLAG(IS_LINUX)
+#elif BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 #define PLATFORM_SPECIFIC_COLOR_IDS \
   E_CPONLY(kColorNativeButtonBorder)\
   E_CPONLY(kColorNativeHeaderButtonBorderActive) \
