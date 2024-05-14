$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- ui/views/widget/widget.cc.orig	2024-05-09 21:47:31.869567000 +0000
+++ ui/views/widget/widget.cc
@@ -54,7 +54,7 @@
 #include "ui/views/window/custom_frame_view.h"
 #include "ui/views/window/dialog_delegate.h"
 
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 #include "ui/linux/linux_ui.h"
 #endif
 
@@ -2106,7 +2106,7 @@ const ui::NativeTheme* Widget::GetNative
   if (parent_)
     return parent_->GetNativeTheme();
 
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   if (auto* linux_ui_theme = ui::LinuxUiTheme::GetForWindow(GetNativeWindow()))
     return linux_ui_theme->GetNativeTheme();
 #endif
