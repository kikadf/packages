$NetBSD$

* Part of patchset to build on NetBSD

--- third_party/blink/renderer/platform/fonts/skia/font_cache_skia.cc.orig	2024-03-06 00:15:00.391665700 +0000
+++ third_party/blink/renderer/platform/fonts/skia/font_cache_skia.cc
@@ -65,7 +65,7 @@ AtomicString ToAtomicString(const SkStri
   return AtomicString::FromUTF8(str.c_str(), str.size());
 }
 
-#if BUILDFLAG(IS_ANDROID) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_ANDROID) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
 // This function is called on android or when we are emulating android fonts on
 // linux and the embedder has overriden the default fontManager with
 // WebFontRendering::setSkiaFontMgr.
@@ -247,7 +247,7 @@ std::unique_ptr<FontPlatformData> FontCa
   std::string name;
 
   sk_sp<SkTypeface> typeface;
-#if BUILDFLAG(IS_ANDROID) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_ANDROID) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
   bool noto_color_emoji_from_gmscore = false;
 #if BUILDFLAG(IS_ANDROID)
   // Use the unique local matching pathway for fetching Noto Color Emoji Compat