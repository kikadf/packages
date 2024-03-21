$NetBSD$

* Part of patchset to build on NetBSD

--- media/capture/video/fake_video_capture_device_factory.cc.orig	2024-03-06 00:14:54.867186000 +0000
+++ media/capture/video/fake_video_capture_device_factory.cc
@@ -230,7 +230,7 @@ void FakeVideoCaptureDeviceFactory::GetD
   int entry_index = 0;
   for (const auto& entry : devices_config_) {
     VideoCaptureApi api =
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
         VideoCaptureApi::LINUX_V4L2_SINGLE_PLANE;
 #elif BUILDFLAG(IS_IOS)
         VideoCaptureApi::UNKNOWN;
