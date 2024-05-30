$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- chrome/browser/ui/views/frame/browser_frame_view_layout_linux.cc.orig	2024-05-21 22:42:53.952794300 +0000
+++ chrome/browser/ui/views/frame/browser_frame_view_layout_linux.cc
@@ -53,7 +53,7 @@ gfx::Insets BrowserFrameViewLayoutLinux:
         OpaqueBrowserFrameViewLayout::RestoredFrameBorderInsets());
   }
 
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   const bool tiled = delegate_->IsTiled();
 #else
   const bool tiled = false;
