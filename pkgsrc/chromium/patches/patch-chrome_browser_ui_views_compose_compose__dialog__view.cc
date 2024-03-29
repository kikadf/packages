$NetBSD$

* Part of patchset to build on NetBSD

--- chrome/browser/ui/views/compose/compose_dialog_view.cc.orig	2024-03-19 22:14:34.110154000 +0000
+++ chrome/browser/ui/views/compose/compose_dialog_view.cc
@@ -159,7 +159,7 @@ void ComposeDialogView::OnBeforeBubbleWi
     views::Widget::InitParams* params,
     views::Widget* widget) const {
   WebUIBubbleDialogView::OnBeforeBubbleWidgetInit(params, widget);
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   // In linux, windows may be clipped to their anchors' bounds,
   // resulting in visual errors, unless they use accelerated rendering. See
   // crbug.com/1445770 for details.
