$NetBSD$

* Part of patchset to build on NetBSD

--- components/user_education/views/help_bubble_view.cc.orig	2024-03-06 00:14:50.134775400 +0000
+++ components/user_education/views/help_bubble_view.cc
@@ -1009,7 +1009,7 @@ gfx::Rect HelpBubbleView::GetAnchorRect(
 void HelpBubbleView::OnBeforeBubbleWidgetInit(views::Widget::InitParams* params,
                                               views::Widget* widget) const {
   BubbleDialogDelegateView::OnBeforeBubbleWidgetInit(params, widget);
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   // Help bubbles anchored to menus may be clipped to their anchors' bounds,
   // resulting in visual errors, unless they use accelerated rendering. See
   // crbug.com/1445770 for details.