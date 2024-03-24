$NetBSD$

* Part of patchset to build on NetBSD

--- chrome/browser/ui/views/tabs/tab_hover_card_bubble_view.cc.orig	2024-03-19 22:14:34.330173700 +0000
+++ chrome/browser/ui/views/tabs/tab_hover_card_bubble_view.cc
@@ -373,7 +373,7 @@ TabHoverCardBubbleView::TabHoverCardBubb
   // not become active. Setting this to false creates the need to explicitly
   // hide the hovercard on press, touch, and keyboard events.
   SetCanActivate(false);
-#if BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   set_accept_events(false);
 #endif
 
