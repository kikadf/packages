$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- ui/views/widget/desktop_aura/desktop_drag_drop_client_ozone.cc.orig	2024-04-10 21:25:25.623905400 +0000
+++ ui/views/widget/desktop_aura/desktop_drag_drop_client_ozone.cc
@@ -196,7 +196,7 @@ DragOperation DesktopDragDropClientOzone
   return selected_operation_;
 }
 
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 void DesktopDragDropClientOzone::UpdateDragImage(const gfx::ImageSkia& image,
                                                  const gfx::Vector2d& offset) {
   DCHECK(drag_handler_);
