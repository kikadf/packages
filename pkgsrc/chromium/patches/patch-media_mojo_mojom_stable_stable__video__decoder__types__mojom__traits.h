$NetBSD$

* Part of patchset to build on NetBSD

--- media/mojo/mojom/stable/stable_video_decoder_types_mojom_traits.h.orig	2024-03-06 00:14:55.063203000 +0000
+++ media/mojo/mojom/stable/stable_video_decoder_types_mojom_traits.h
@@ -693,7 +693,7 @@ struct StructTraits<media::stable::mojom
   static const gfx::GpuMemoryBufferId& id(
       const gfx::GpuMemoryBufferHandle& input);
 
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
   static gfx::NativePixmapHandle platform_handle(
       gfx::GpuMemoryBufferHandle& input);
 #else
