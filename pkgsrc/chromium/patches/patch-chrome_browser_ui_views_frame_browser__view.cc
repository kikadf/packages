$NetBSD$

* Part of patchset to build on NetBSD

--- chrome/browser/ui/views/frame/browser_view.cc.orig	2024-03-06 00:14:43.494198800 +0000
+++ chrome/browser/ui/views/frame/browser_view.cc
@@ -2161,7 +2161,7 @@ void BrowserView::TabDraggingStatusChang
   // CrOS cleanup is done.
 // TODO(crbug.com/1052397): Revisit the macro expression once build flag switch
 // of lacros-chrome is complete.
-#if !(BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS_LACROS))
+#if !(BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS_LACROS) || BUILDFLAG(IS_BSD))
   contents_web_view_->SetFastResize(is_dragging);
   if (!is_dragging) {
     // When tab dragging is ended, we need to make sure the web contents get