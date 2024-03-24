$NetBSD$

* Part of patchset to build on NetBSD

--- third_party/webrtc/modules/desktop_capture/linux/x11/x_server_pixel_buffer.cc.orig	2024-03-19 22:16:24.624013200 +0000
+++ third_party/webrtc/modules/desktop_capture/linux/x11/x_server_pixel_buffer.cc
@@ -203,6 +203,12 @@ bool XServerPixelBuffer::Init(XAtomCache
 void XServerPixelBuffer::InitShm(const XWindowAttributes& attributes) {
   Visual* default_visual = attributes.visual;
   int default_depth = attributes.depth;
+#if defined(__OpenBSD__)
+// pledge(2)
+  RTC_LOG(LS_WARNING) << "Unable to use shmget(2) while using pledge(2). "
+                         "Performance may be degraded.";
+  return;
+#endif
 
   int major, minor;
   Bool have_pixmaps;
