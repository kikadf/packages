$NetBSD$

* Part of patchset to build on NetBSD

--- third_party/blink/renderer/platform/fonts/font_platform_data.cc.orig	2024-03-19 22:14:55.912099100 +0000
+++ third_party/blink/renderer/platform/fonts/font_platform_data.cc
@@ -48,7 +48,7 @@
 namespace blink {
 namespace {
 
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
 // Getting the system font render style takes a significant amount of time on
 // Linux because looking up fonts using fontconfig can be very slow. We fetch
 // the render style for each font family and text size, while it's very
@@ -127,7 +127,7 @@ FontPlatformData::FontPlatformData(sk_sp
   style_ = WebFontRenderStyle::GetDefault();
 #if !BUILDFLAG(IS_WIN)
   WebFontRenderStyle system_style;
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
   bool override_font_name_and_size =
       base::FeatureList::IsEnabled(kOptimizeLinuxFonts);
 #else
