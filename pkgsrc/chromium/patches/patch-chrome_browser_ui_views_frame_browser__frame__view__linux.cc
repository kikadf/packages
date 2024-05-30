$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- chrome/browser/ui/views/frame/browser_frame_view_linux.cc.orig	2024-05-21 22:42:53.956794500 +0000
+++ chrome/browser/ui/views/frame/browser_frame_view_linux.cc
@@ -60,7 +60,7 @@ gfx::ShadowValues BrowserFrameViewLinux:
 
 void BrowserFrameViewLinux::PaintRestoredFrameBorder(
     gfx::Canvas* canvas) const {
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   const bool tiled = frame()->tiled();
 #else
   const bool tiled = false;
@@ -104,7 +104,7 @@ void BrowserFrameViewLinux::OnWindowButt
 }
 
 float BrowserFrameViewLinux::GetRestoredCornerRadiusDip() const {
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   const bool tiled = frame()->tiled();
 #else
   const bool tiled = false;
