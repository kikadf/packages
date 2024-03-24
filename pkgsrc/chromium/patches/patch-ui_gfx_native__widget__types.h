$NetBSD$

* Part of patchset to build on NetBSD

--- ui/gfx/native_widget_types.h.orig	2024-03-19 22:15:27.350903700 +0000
+++ ui/gfx/native_widget_types.h
@@ -104,7 +104,7 @@ class SkBitmap;
 
 // TODO(crbug.com/1052397): Revisit the macro expression once build flag switch
 // of lacros-chrome is complete.
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS_LACROS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS_LACROS) || BUILDFLAG(IS_BSD)
 extern "C" {
 struct _AtkObject;
 using AtkObject = struct _AtkObject;
@@ -220,7 +220,7 @@ using NativeViewAccessible = struct objc
 #endif
 // TODO(crbug.com/1052397): Revisit the macro expression once build flag switch
 // of lacros-chrome is complete.
-#elif BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS_LACROS)
+#elif BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS_LACROS) || BUILDFLAG(IS_BSD)
 // Linux doesn't have a native font type.
 using NativeViewAccessible = AtkObject*;
 #else
