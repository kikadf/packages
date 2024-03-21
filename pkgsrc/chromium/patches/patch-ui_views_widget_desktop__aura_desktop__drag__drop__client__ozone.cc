$NetBSD$

* Part of patchset to build on NetBSD

--- ui/views/widget/desktop_aura/desktop_drag_drop_client_ozone.cc.orig	2024-03-06 00:15:21.025457000 +0000
+++ ui/views/widget/desktop_aura/desktop_drag_drop_client_ozone.cc
@@ -195,7 +195,7 @@ DragOperation DesktopDragDropClientOzone
   return drag_operation_;
 }
 
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 void DesktopDragDropClientOzone::UpdateDragImage(const gfx::ImageSkia& image,
                                                  const gfx::Vector2d& offset) {
   DCHECK(drag_handler_);
