$NetBSD$

* Part of patchset to build on NetBSD

--- media/video/gpu_memory_buffer_video_frame_pool.cc.orig	2024-03-19 22:14:49.659541100 +0000
+++ media/video/gpu_memory_buffer_video_frame_pool.cc
@@ -803,7 +803,7 @@ void GpuMemoryBufferVideoFramePool::Pool
   }
 
   bool is_software_backed_video_frame = !video_frame->HasTextures();
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
   is_software_backed_video_frame &= !video_frame->HasDmaBufs();
 #endif
 
@@ -1285,7 +1285,7 @@ scoped_refptr<VideoFrame> GpuMemoryBuffe
     }
 #endif
 
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
     is_webgpu_compatible = (gpu_memory_buffer != nullptr);
     if (is_webgpu_compatible) {
       is_webgpu_compatible &=
@@ -1307,7 +1307,7 @@ scoped_refptr<VideoFrame> GpuMemoryBuffe
                        gpu::SHARED_IMAGE_USAGE_DISPLAY_READ |
                        gpu::SHARED_IMAGE_USAGE_SCANOUT;
 
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_MAC)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_BSD)
       // TODO(crbug.com/1241537): Always add the flag once the
       // OzoneImageBacking is by default turned on.
       if (base::CommandLine::ForCurrentProcess()->HasSwitch(
