$NetBSD$

* Part of patchset to build on NetBSD

--- ui/platform_window/platform_window_delegate.cc.orig	2024-03-06 00:15:20.857442400 +0000
+++ ui/platform_window/platform_window_delegate.cc
@@ -42,7 +42,7 @@ PlatformWindowDelegate::PlatformWindowDe
 
 PlatformWindowDelegate::~PlatformWindowDelegate() = default;
 
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 void PlatformWindowDelegate::OnWindowTiledStateChanged(
     WindowTiledEdges new_tiled_edges) {}
 #endif