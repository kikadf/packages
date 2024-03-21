$NetBSD$

* Part of patchset to build on NetBSD

--- ui/base/x/x11_cursor_factory.h.orig	2024-03-06 00:15:20.337397300 +0000
+++ ui/base/x/x11_cursor_factory.h
@@ -20,7 +20,7 @@ namespace ui {
 class X11Cursor;
 class XCursorLoader;
 
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 class LinuxUi;
 #endif
 
@@ -62,7 +62,7 @@ class COMPONENT_EXPORT(UI_BASE_X) X11Cur
   // initializing `cursor_loader_` will modify `default_cursors_`.
   std::unique_ptr<XCursorLoader> cursor_loader_;
 
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   base::ScopedObservation<LinuxUi, CursorThemeManagerObserver>
       cursor_theme_observation_{this};
 #endif
