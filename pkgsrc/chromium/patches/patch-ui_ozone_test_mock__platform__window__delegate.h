$NetBSD$

--- ui/ozone/test/mock_platform_window_delegate.h.orig	2024-03-06 00:15:20.857442400 +0000
+++ ui/ozone/test/mock_platform_window_delegate.h
@@ -32,7 +32,7 @@ class MockPlatformWindowDelegate : publi
   MOCK_METHOD2(OnWindowStateChanged,
                void(PlatformWindowState old_state,
                     PlatformWindowState new_state));
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   MOCK_METHOD1(OnWindowTiledStateChanged,
                void(WindowTiledEdges new_tiled_edges));
 #endif
