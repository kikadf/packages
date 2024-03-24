$NetBSD$

* Part of patchset to build on NetBSD

--- third_party/blink/renderer/core/scroll/scrollbar_theme_aura.cc.orig	2024-03-19 22:14:55.272042000 +0000
+++ third_party/blink/renderer/core/scroll/scrollbar_theme_aura.cc
@@ -149,7 +149,7 @@ bool ScrollbarThemeAura::SupportsDragSna
 // is true for at least GTK and QT apps).
 // TODO(crbug.com/1052397): Revisit once build flag switch of lacros-chrome is
 // complete.
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS_LACROS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS_LACROS) || BUILDFLAG(IS_BSD)
   return false;
 #else
   return true;
@@ -368,7 +368,7 @@ bool ScrollbarThemeAura::ShouldCenterOnT
                                              const WebMouseEvent& event) {
 // TODO(crbug.com/1052397): Revisit once build flag switch of lacros-chrome is
 // complete.
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS_LACROS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS_LACROS) || BUILDFLAG(IS_BSD)
   if (event.button == WebPointerProperties::Button::kMiddle)
     return true;
 #endif
