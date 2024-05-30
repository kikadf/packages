$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- content/renderer/render_thread_impl.cc.orig	2024-05-21 22:43:01.525469500 +0000
+++ content/renderer/render_thread_impl.cc
@@ -206,6 +206,8 @@
 
 #if BUILDFLAG(IS_APPLE)
 #include <malloc/malloc.h>
+#elif BUILDFLAG(IS_BSD)
+#include <stdlib.h>
 #else
 #include <malloc.h>
 #endif
@@ -999,7 +1001,7 @@ media::GpuVideoAcceleratorFactories* Ren
                              kGpuStreamIdMedia, kGpuStreamPriorityMedia);
 
   const bool enable_video_decode_accelerator =
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
       base::FeatureList::IsEnabled(media::kVaapiVideoDecodeLinux) &&
 #endif  // BUILDFLAG(IS_LINUX)
       !cmd_line->HasSwitch(switches::kDisableAcceleratedVideoDecode) &&
@@ -1008,7 +1010,7 @@ media::GpuVideoAcceleratorFactories* Ren
        gpu::kGpuFeatureStatusEnabled);
 
   const bool enable_video_encode_accelerator =
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
       base::FeatureList::IsEnabled(media::kVaapiVideoEncodeLinux) &&
 #else
       !cmd_line->HasSwitch(switches::kDisableAcceleratedVideoEncode) &&
@@ -1751,7 +1753,7 @@ std::unique_ptr<CodecFactory> RenderThre
     bool enable_video_encode_accelerator) {
   mojo::PendingRemote<media::mojom::VideoEncodeAcceleratorProvider>
       vea_provider;
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
   if (base::FeatureList::IsEnabled(media::kUseOutOfProcessVideoEncoding)) {
     BindHostReceiver(vea_provider.InitWithNewPipeAndPassReceiver());
   } else {
