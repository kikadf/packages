$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- chrome/browser/ui/window_sizer/window_sizer.cc.orig	2024-05-21 22:42:54.372831600 +0000
+++ chrome/browser/ui/window_sizer/window_sizer.cc
@@ -210,7 +210,7 @@ void WindowSizer::GetBrowserWindowBounds
       browser, window_bounds, show_state);
 }
 
-#if !BUILDFLAG(IS_LINUX)
+#if !BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 // Linux has its own implementation, see WindowSizerLinux.
 // static
 void WindowSizer::GetBrowserWindowBoundsAndShowState(
