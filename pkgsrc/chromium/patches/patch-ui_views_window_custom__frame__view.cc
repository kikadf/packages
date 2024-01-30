$NetBSD$

--- ui/views/window/custom_frame_view.cc.orig	2020-07-15 18:56:49.000000000 +0000
+++ ui/views/window/custom_frame_view.cc
@@ -283,7 +283,7 @@ int CustomFrameView::NonClientTopBorderH
 int CustomFrameView::CaptionButtonY() const {
   // Maximized buttons start at window top so that even if their images aren't
   // drawn flush with the screen edge, they still obey Fitts' Law.
-#if defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#if (defined(OS_LINUX) || defined(OS_BSD)) && !defined(OS_CHROMEOS)
   return FrameBorderThickness();
 #else
   return frame_->IsMaximized() ? FrameBorderThickness() : kFrameShadowThickness;
