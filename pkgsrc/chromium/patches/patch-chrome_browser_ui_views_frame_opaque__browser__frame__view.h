$NetBSD$

* Part of patchset to build on NetBSD

--- chrome/browser/ui/views/frame/opaque_browser_frame_view.h.orig	2024-03-19 22:14:34.174159800 +0000
+++ chrome/browser/ui/views/frame/opaque_browser_frame_view.h
@@ -115,7 +115,7 @@ class OpaqueBrowserFrameView : public Br
   void UpdateWindowControlsOverlay(
       const gfx::Rect& bounding_rect) const override;
   bool ShouldDrawRestoredFrameShadow() const override;
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   bool IsTiled() const override;
 #endif
   int WebAppButtonHeight() const override;
@@ -232,7 +232,7 @@ class OpaqueBrowserFrameView : public Br
   // Background painter for the window frame.
   std::unique_ptr<views::FrameBackground> frame_background_;
 
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   std::unique_ptr<views::MenuRunner> menu_runner_;
 #endif
 
