$NetBSD$

* Part of patchset to build on NetBSD

--- chrome/browser/ui/views/frame/tab_strip_region_view.cc.orig	2024-03-06 00:14:43.506199800 +0000
+++ chrome/browser/ui/views/frame/tab_strip_region_view.cc
@@ -196,7 +196,7 @@ TabStripRegionView::TabStripRegionView(s
 
     // TODO(crbug.com/1052397): Revisit the macro expression once build flag
     // switch of lacros-chrome is complete.
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS_LACROS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS_LACROS) || BUILDFLAG(IS_BSD)
     // The New Tab Button can be middle-clicked on Linux.
     new_tab_button_->SetTriggerableEventFlags(
         new_tab_button_->GetTriggerableEventFlags() |
