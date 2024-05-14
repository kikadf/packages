$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- media/capture/video/linux/v4l2_capture_device_impl.cc.orig	2024-05-09 21:46:58.267347600 +0000
+++ media/capture/video/linux/v4l2_capture_device_impl.cc
@@ -22,7 +22,7 @@ int V4L2CaptureDeviceImpl::close(int fd)
   return ::close(fd);
 }
 
-int V4L2CaptureDeviceImpl::ioctl(int fd, int request, void* argp) {
+int V4L2CaptureDeviceImpl::ioctl(int fd, unsigned long request, void* argp) {
   return ::ioctl(fd, request, argp);
 }
 
