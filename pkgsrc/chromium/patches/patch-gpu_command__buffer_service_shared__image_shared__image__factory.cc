$NetBSD$

* Part of patchset to build on NetBSD

--- gpu/command_buffer/service/shared_image/shared_image_factory.cc.orig	2024-03-19 22:14:45.663184600 +0000
+++ gpu/command_buffer/service/shared_image/shared_image_factory.cc
@@ -144,7 +144,7 @@ gfx::GpuMemoryBufferType GetNativeBuffer
   return gfx::GpuMemoryBufferType::IO_SURFACE_BUFFER;
 #elif BUILDFLAG(IS_ANDROID)
   return gfx::GpuMemoryBufferType::ANDROID_HARDWARE_BUFFER;
-#elif BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_FUCHSIA)
+#elif BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_FUCHSIA) || BUILDFLAG(IS_BSD)
   return gfx::GpuMemoryBufferType::NATIVE_PIXMAP;
 #elif BUILDFLAG(IS_WIN)
   return gfx::GpuMemoryBufferType::DXGI_SHARED_HANDLE;
