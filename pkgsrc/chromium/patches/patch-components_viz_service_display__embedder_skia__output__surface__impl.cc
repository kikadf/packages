$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- components/viz/service/display_embedder/skia_output_surface_impl.cc.orig	2024-05-09 21:46:49.470766800 +0000
+++ components/viz/service/display_embedder/skia_output_surface_impl.cc
@@ -1527,7 +1527,7 @@ GrBackendFormat SkiaOutputSurfaceImpl::G
                                           ->GetVulkanPhysicalDevice(),
                                       VK_IMAGE_TILING_OPTIMAL, vk_format,
                                       si_format, yuv_color_space, ycbcr_info);
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
     // Textures that were allocated _on linux_ with ycbcr info came from
     // VaapiVideoDecoder, which exports using DRM format modifiers.
     return GrBackendFormats::MakeVk(gr_ycbcr_info,
