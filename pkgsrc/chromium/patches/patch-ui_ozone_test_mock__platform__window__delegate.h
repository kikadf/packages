$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- ui/ozone/test/mock_platform_window_delegate.h.orig	2024-05-21 22:43:36.308571800 +0000
+++ ui/ozone/test/mock_platform_window_delegate.h
@@ -33,7 +33,7 @@ class MockPlatformWindowDelegate : publi
   MOCK_METHOD2(OnWindowStateChanged,
                void(PlatformWindowState old_state,
                     PlatformWindowState new_state));
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   MOCK_METHOD1(OnWindowTiledStateChanged,
                void(WindowTiledEdges new_tiled_edges));
 #endif
