$NetBSD$

--- ui/native_theme/native_theme.h.orig	2020-07-15 18:56:34.000000000 +0000
+++ ui/native_theme/native_theme.h
@@ -51,7 +51,7 @@ class NATIVE_THEME_EXPORT NativeTheme {
   // The part to be painted / sized.
   enum Part {
     kCheckbox,
-#if defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#if (defined(OS_LINUX) || defined(OS_BSD)) && !defined(OS_CHROMEOS)
     kFrameTopArea,
 #endif
     kInnerSpinButton,
