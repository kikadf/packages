$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- ash/display/mirror_window_controller.cc.orig	2024-05-21 22:42:45.568046300 +0000
+++ ash/display/mirror_window_controller.cc
@@ -294,7 +294,11 @@ void MirrorWindowController::UpdateWindo
       if (!base::Contains(display_info_list, iter->first,
                           &display::ManagedDisplayInfo::id)) {
         CloseAndDeleteHost(iter->second, true);
+#if defined(__llvm__)
+        mirroring_host_info_map_.erase(iter++);
+#else
         iter = mirroring_host_info_map_.erase(iter);
+#endif
       } else {
         ++iter;
       }
