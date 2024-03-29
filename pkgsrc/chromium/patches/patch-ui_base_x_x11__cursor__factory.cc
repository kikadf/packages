$NetBSD$

* Part of patchset to build on NetBSD

--- ui/base/x/x11_cursor_factory.cc.orig	2024-03-19 22:15:27.002872700 +0000
+++ ui/base/x/x11_cursor_factory.cc
@@ -13,7 +13,7 @@
 #include "ui/gfx/geometry/point.h"
 #include "ui/gfx/x/connection.h"
 
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 #include "ui/linux/linux_ui.h"
 #endif
 
@@ -70,7 +70,7 @@ scoped_refptr<PlatformCursor> X11CursorF
 }
 
 void X11CursorFactory::ObserveThemeChanges() {
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   auto* linux_ui = LinuxUi::instance();
   DCHECK(linux_ui);
   cursor_theme_observation_.Observe(linux_ui);
