$NetBSD$

* Part of patchset to build on NetBSD

--- ui/platform_window/platform_window_delegate.cc.orig	2024-03-19 22:15:27.542920800 +0000
+++ ui/platform_window/platform_window_delegate.cc
@@ -48,7 +48,7 @@ PlatformWindowDelegate::PlatformWindowDe
 
 PlatformWindowDelegate::~PlatformWindowDelegate() = default;
 
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 void PlatformWindowDelegate::OnWindowTiledStateChanged(
     WindowTiledEdges new_tiled_edges) {}
 #endif
