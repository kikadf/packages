$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- ui/events/keycodes/dom/keycode_converter.h.orig	2024-05-21 22:43:35.992543700 +0000
+++ ui/events/keycodes/dom/keycode_converter.h
@@ -63,7 +63,7 @@ class KeycodeConverter {
   // Convert a DomCode into a native keycode.
   static int DomCodeToNativeKeycode(DomCode code);
 
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_FREEBSD)
   // Convert a XKB keycode into a DomCode.
   static DomCode XkbKeycodeToDomCode(uint32_t xkb_keycode);
 
