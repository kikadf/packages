$NetBSD$

* Part of patchset to build on NetBSD

--- chrome/test/chromedriver/key_converter_unittest.cc.orig	2024-03-06 00:14:44.302269000 +0000
+++ chrome/test/chromedriver/key_converter_unittest.cc
@@ -246,7 +246,7 @@ TEST(KeyConverter, ToggleModifiers) {
   CheckEventsReleaseModifiers(keys, key_events);
 }
 
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
 // Fails on bots: crbug.com/174962
 #define MAYBE_AllEnglishKeyboardSymbols DISABLED_AllEnglishKeyboardSymbols
 #else
@@ -303,7 +303,7 @@ TEST(KeyConverter, AllEnglishKeyboardTex
 TEST(KeyConverter, AllSpecialWebDriverKeysOnEnglishKeyboard) {
   ui::ScopedKeyboardLayout keyboard_layout(ui::KEYBOARD_LAYOUT_ENGLISH_US);
   const char kTextForKeys[] = {
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
       0, 0, 0, 0, '\t', 0, '\r', '\r', 0, 0, 0, 0, 0,
 #else
       0, 0, 0, 0, 0, 0, '\r', '\r', 0, 0, 0, 0, 0,