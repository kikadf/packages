$NetBSD$

* Part of patchset to build on NetBSD

--- ui/base/x/x11_util.h.orig	2024-03-06 00:15:20.341397500 +0000
+++ ui/base/x/x11_util.h
@@ -256,6 +256,10 @@ COMPONENT_EXPORT(UI_BASE_X) bool IsVulka
 COMPONENT_EXPORT(UI_BASE_X)
 gfx::ImageSkia GetNativeWindowIcon(intptr_t target_window_id);
 
+// Returns the ICCProfile corresponding to |monitor| using XGetWindowProperty.
+COMPONENT_EXPORT(UI_BASE_X)
+gfx::ICCProfile GetICCProfileForMonitor(int monitor);
+
 }  // namespace ui
 
 #endif  // UI_BASE_X_X11_UTIL_H_