$NetBSD$

* Part of patchset to build on NetBSD

--- chrome/browser/ui/views/frame/browser_frame_view_layout_linux_native.cc.orig	2024-03-19 22:14:34.158158300 +0000
+++ chrome/browser/ui/views/frame/browser_frame_view_layout_linux_native.cc
@@ -18,7 +18,7 @@ BrowserFrameViewLayoutLinuxNative::~Brow
 
 ui::WindowFrameProvider* BrowserFrameViewLayoutLinuxNative::GetFrameProvider()
     const {
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   const bool tiled = delegate_->IsTiled();
 #else
   const bool tiled = false;
