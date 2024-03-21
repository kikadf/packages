$NetBSD$

* Part of patchset to build on NetBSD

--- ui/native_theme/native_theme_base.cc.orig	2024-03-06 00:15:20.785436200 +0000
+++ ui/native_theme/native_theme_base.cc
@@ -235,7 +235,7 @@ void NativeThemeBase::Paint(cc::PaintCan
       break;
 // TODO(crbug.com/1052397): Revisit the macro expression once build flag switch
 // of lacros-chrome is complete.
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS_LACROS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS_LACROS) || BUILDFLAG(IS_BSD)
     case kFrameTopArea:
       PaintFrameTopArea(canvas, state, rect,
                         absl::get<FrameTopAreaExtraParams>(extra),
