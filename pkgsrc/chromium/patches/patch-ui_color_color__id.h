$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- ui/color/color_id.h.orig	2024-05-21 22:43:35.744521600 +0000
+++ ui/color/color_id.h
@@ -626,7 +626,7 @@
   \
   E_CPONLY(kColorCrosSysPositive) \
   E_CPONLY(kColorCrosSysComplementVariant)
-#elif BUILDFLAG(IS_LINUX)
+#elif BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 #define PLATFORM_SPECIFIC_COLOR_IDS \
   E_CPONLY(kColorNativeButtonBorder)\
   E_CPONLY(kColorNativeHeaderButtonBorderActive) \
