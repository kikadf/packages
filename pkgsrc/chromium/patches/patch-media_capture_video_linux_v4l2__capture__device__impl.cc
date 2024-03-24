$NetBSD$

* Part of patchset to build on NetBSD

--- media/capture/video/linux/v4l2_capture_device_impl.cc.orig	2024-03-19 22:14:49.035485500 +0000
+++ media/capture/video/linux/v4l2_capture_device_impl.cc
@@ -22,7 +22,7 @@ int V4L2CaptureDeviceImpl::close(int fd)
   return ::close(fd);
 }
 
-int V4L2CaptureDeviceImpl::ioctl(int fd, int request, void* argp) {
+int V4L2CaptureDeviceImpl::ioctl(int fd, unsigned long request, void* argp) {
   return ::ioctl(fd, request, argp);
 }
 
