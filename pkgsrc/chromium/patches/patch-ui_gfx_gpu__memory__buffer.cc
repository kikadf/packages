$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- ui/gfx/gpu_memory_buffer.cc.orig	2024-04-10 21:25:25.267876900 +0000
+++ ui/gfx/gpu_memory_buffer.cc
@@ -54,7 +54,7 @@ GpuMemoryBufferHandle GpuMemoryBufferHan
   handle.region = region.Duplicate();
   handle.offset = offset;
   handle.stride = stride;
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_FUCHSIA)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_FUCHSIA) || BUILDFLAG(IS_BSD)
   handle.native_pixmap_handle = CloneHandleForIPC(native_pixmap_handle);
 #elif BUILDFLAG(IS_APPLE)
   handle.io_surface = io_surface;
