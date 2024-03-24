$NetBSD$

* Part of patchset to build on NetBSD

--- ui/views/window/custom_frame_view.cc.orig	2024-03-19 22:15:27.758940200 +0000
+++ ui/views/window/custom_frame_view.cc
@@ -266,7 +266,7 @@ int CustomFrameView::CaptionButtonY() co
   // drawn flush with the screen edge, they still obey Fitts' Law.
 // TODO(crbug.com/1052397): Revisit the macro expression once build flag switch
 // of lacros-chrome is complete.
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS_LACROS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS_LACROS) || BUILDFLAG(IS_BSD)
   return FrameBorderThickness();
 #else
   return frame_->IsMaximized() ? FrameBorderThickness() : kFrameShadowThickness;
