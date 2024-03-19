$NetBSD$

--- chrome/browser/ui/views/frame/browser_frame_view_linux.cc.orig	2024-03-06 00:14:43.486198200 +0000
+++ chrome/browser/ui/views/frame/browser_frame_view_linux.cc
@@ -77,7 +77,7 @@ void BrowserFrameViewLinux::OnWindowButt
 
 void BrowserFrameViewLinux::PaintRestoredFrameBorder(
     gfx::Canvas* canvas) const {
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   const bool tiled = frame()->tiled();
 #else
   const bool tiled = false;
@@ -103,7 +103,7 @@ bool BrowserFrameViewLinux::ShouldDrawRe
 }
 
 float BrowserFrameViewLinux::GetRestoredCornerRadiusDip() const {
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   const bool tiled = frame()->tiled();
 #else
   const bool tiled = false;
