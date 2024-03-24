$NetBSD$

* Part of patchset to build on NetBSD

--- media/capture/video/linux/video_capture_device_linux.cc.orig	2024-03-19 22:14:49.035485500 +0000
+++ media/capture/video/linux/video_capture_device_linux.cc
@@ -15,7 +15,7 @@
 #include "build/build_config.h"
 #include "media/capture/video/linux/v4l2_capture_delegate.h"
 
-#if BUILDFLAG(IS_OPENBSD)
+#if BUILDFLAG(IS_OPENBSD) || defined(OS_NETBSD)
 #include <sys/videoio.h>
 #else
 #include <linux/videodev2.h>
