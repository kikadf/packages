$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- media/gpu/chromeos/native_pixmap_frame_resource.cc.orig	2024-05-21 22:43:04.965776400 +0000
+++ media/gpu/chromeos/native_pixmap_frame_resource.cc
@@ -166,7 +166,7 @@ scoped_refptr<NativePixmapFrameResource>
   const bool is_intel_media_compression_enabled =
 #if BUILDFLAG(IS_CHROMEOS)
       base::FeatureList::IsEnabled(features::kEnableIntelMediaCompression);
-#elif BUILDFLAG(IS_LINUX)
+#elif BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
       false;
 #endif
   CHECK(!is_intel_media_compressed_buffer ||