$NetBSD$

--- chrome/browser/ui/views/tabs/new_tab_button.cc.orig	2020-07-08 21:40:36.000000000 +0000
+++ chrome/browser/ui/views/tabs/new_tab_button.cc
@@ -84,7 +84,7 @@ class NewTabButton::HighlightPathGenerat
 NewTabButton::NewTabButton(TabStrip* tab_strip, views::ButtonListener* listener)
     : views::ImageButton(listener), tab_strip_(tab_strip) {
   set_animate_on_state_change(true);
-#if defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#if (defined(OS_LINUX) || defined(OS_BSD)) && !defined(OS_CHROMEOS)
   set_triggerable_event_flags(triggerable_event_flags() |
                               ui::EF_MIDDLE_MOUSE_BUTTON);
 #endif
