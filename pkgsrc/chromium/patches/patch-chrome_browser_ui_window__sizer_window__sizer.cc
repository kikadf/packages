$NetBSD$

* Part of patchset to build on NetBSD

--- chrome/browser/ui/window_sizer/window_sizer.cc.orig	2024-03-06 00:14:43.902234300 +0000
+++ chrome/browser/ui/window_sizer/window_sizer.cc
@@ -216,7 +216,7 @@ void WindowSizer::GetBrowserWindowBounds
       browser, window_bounds, show_state);
 }
 
-#if !BUILDFLAG(IS_LINUX)
+#if !BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 // Linux has its own implementation, see WindowSizerLinux.
 // static
 void WindowSizer::GetBrowserWindowBoundsAndShowState(
