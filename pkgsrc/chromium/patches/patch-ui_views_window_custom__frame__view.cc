$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- ui/views/window/custom_frame_view.cc.orig	2024-05-21 22:43:36.504589300 +0000
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
