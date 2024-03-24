$NetBSD$

* Part of patchset to build on NetBSD

--- components/viz/service/display_embedder/skia_output_surface_impl.cc.orig	2024-03-19 22:14:42.210876700 +0000
+++ components/viz/service/display_embedder/skia_output_surface_impl.cc
@@ -1519,7 +1519,7 @@ GrBackendFormat SkiaOutputSurfaceImpl::G
             ->GetDeviceQueue()
             ->GetVulkanPhysicalDevice(),
         VK_IMAGE_TILING_OPTIMAL, vk_format, yuv_color_space, ycbcr_info);
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
     // Textures that were allocated _on linux_ with ycbcr info came from
     // VaapiVideoDecoder, which exports using DRM format modifiers.
     return GrBackendFormats::MakeVk(gr_ycbcr_info,
