$NetBSD$

* Part of patchset to build on NetBSD

--- ui/base/test/ui_controls.h.orig	2024-03-19 22:15:26.994872000 +0000
+++ ui/base/test/ui_controls.h
@@ -186,7 +186,7 @@ bool SendTouchEventsNotifyWhenDone(int a
                                    base::OnceClosure task);
 #endif
 
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 // Forces the platform implementation to use screen coordinates, even if they're
 // not really available, the next time that ui_controls::SendMouseMove() or
 // ui_controls::SendMouseMoveNotifyWhenDone() is called, or some other method
