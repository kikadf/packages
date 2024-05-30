$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- chrome/browser/ui/views/tabs/tab_hover_card_bubble_view.cc.orig	2024-05-21 22:42:54.108808000 +0000
+++ chrome/browser/ui/views/tabs/tab_hover_card_bubble_view.cc
@@ -371,7 +371,7 @@ TabHoverCardBubbleView::TabHoverCardBubb
   // not become active. Setting this to false creates the need to explicitly
   // hide the hovercard on press, touch, and keyboard events.
   SetCanActivate(false);
-#if BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
   set_accept_events(false);
 #endif
 
