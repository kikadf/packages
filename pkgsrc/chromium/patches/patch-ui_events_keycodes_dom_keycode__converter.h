$NetBSD$

* Part of patchset to build on NetBSD

--- ui/events/keycodes/dom/keycode_converter.h.orig	2024-03-06 00:15:20.553416000 +0000
+++ ui/events/keycodes/dom/keycode_converter.h
@@ -63,7 +63,7 @@ class KeycodeConverter {
   // Convert a DomCode into a native keycode.
   static int DomCodeToNativeKeycode(DomCode code);
 
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_FREEBSD)
   // Convert a XKB keycode into a DomCode.
   static DomCode XkbKeycodeToDomCode(uint32_t xkb_keycode);
 
