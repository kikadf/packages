$NetBSD$

* Part of patchset to build on NetBSD

--- content/browser/renderer_host/render_widget_host_view_event_handler.cc.orig	2024-03-06 00:14:50.766830200 +0000
+++ content/browser/renderer_host/render_widget_host_view_event_handler.cc
@@ -599,7 +599,7 @@ bool RenderWidgetHostViewEventHandler::C
   if (event->type() == ui::ET_MOUSE_EXITED) {
     if (mouse_locked || selection_popup)
       return false;
-#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
     // Don't forward the mouse leave message which is received when the context
     // menu is displayed by the page. This confuses the page and causes state
     // changes.