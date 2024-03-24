$NetBSD$

* Part of patchset to build on NetBSD

--- ui/gfx/canvas_skia.cc.orig	2024-03-19 22:15:27.294898700 +0000
+++ ui/gfx/canvas_skia.cc
@@ -213,7 +213,7 @@ void Canvas::DrawStringRectWithFlags(con
     Range range = StripAcceleratorChars(flags, &adjusted_text);
     bool elide_text = ((flags & NO_ELLIPSIS) == 0);
 
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
     // On Linux, eliding really means fading the end of the string. But only
     // for LTR text. RTL text is still elided (on the left) with "...".
     if (elide_text) {
