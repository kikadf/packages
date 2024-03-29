$NetBSD$

* Part of patchset to build on NetBSD

--- components/eye_dropper/eye_dropper_view.cc.orig	2024-03-19 22:14:38.786571300 +0000
+++ components/eye_dropper/eye_dropper_view.cc
@@ -200,7 +200,7 @@ EyeDropperView::EyeDropperView(gfx::Nati
   // EyeDropper/WidgetDelegate.
   set_owned_by_client();
   SetPreferredSize(GetSize());
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   // Use TYPE_MENU for Linux to ensure that the eye dropper view is displayed
   // above the color picker.
   views::Widget::InitParams params(views::Widget::InitParams::TYPE_MENU);
