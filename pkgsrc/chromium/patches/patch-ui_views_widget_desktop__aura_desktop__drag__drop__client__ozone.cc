$NetBSD$

* Part of patchset to build on NetBSD

--- ui/views/widget/desktop_aura/desktop_drag_drop_client_ozone.cc.orig	2024-03-19 22:15:27.738938300 +0000
+++ ui/views/widget/desktop_aura/desktop_drag_drop_client_ozone.cc
@@ -196,7 +196,7 @@ DragOperation DesktopDragDropClientOzone
   return selected_operation_;
 }
 
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 void DesktopDragDropClientOzone::UpdateDragImage(const gfx::ImageSkia& image,
                                                  const gfx::Vector2d& offset) {
   DCHECK(drag_handler_);
