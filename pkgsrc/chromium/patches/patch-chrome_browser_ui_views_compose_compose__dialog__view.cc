$NetBSD$

* Part of patchset to build on NetBSD

--- chrome/browser/ui/views/compose/compose_dialog_view.cc.orig	2024-03-06 00:14:43.442194200 +0000
+++ chrome/browser/ui/views/compose/compose_dialog_view.cc
@@ -144,7 +144,7 @@ void ComposeDialogView::OnBeforeBubbleWi
     views::Widget::InitParams* params,
     views::Widget* widget) const {
   WebUIBubbleDialogView::OnBeforeBubbleWidgetInit(params, widget);
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   // In linux, windows may be clipped to their anchors' bounds,
   // resulting in visual errors, unless they use accelerated rendering. See
   // crbug.com/1445770 for details.
