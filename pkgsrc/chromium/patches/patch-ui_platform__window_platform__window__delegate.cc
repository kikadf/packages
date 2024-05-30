$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- ui/platform_window/platform_window_delegate.cc.orig	2024-05-21 22:43:36.308571800 +0000
+++ ui/platform_window/platform_window_delegate.cc
@@ -48,7 +48,7 @@ PlatformWindowDelegate::PlatformWindowDe
 
 PlatformWindowDelegate::~PlatformWindowDelegate() = default;
 
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 void PlatformWindowDelegate::OnWindowTiledStateChanged(
     WindowTiledEdges new_tiled_edges) {}
 #endif
