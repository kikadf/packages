$NetBSD$

* Part of patchset to build on NetBSD

--- media/gpu/gpu_video_encode_accelerator_factory.cc.orig	2024-03-19 22:14:49.183498600 +0000
+++ media/gpu/gpu_video_encode_accelerator_factory.cc
@@ -119,7 +119,7 @@ std::vector<VEAFactoryFunction> GetVEAFa
     return vea_factory_functions;
 
 #if BUILDFLAG(USE_VAAPI)
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   if (base::FeatureList::IsEnabled(kVaapiVideoEncodeLinux))
     vea_factory_functions.push_back(base::BindRepeating(&CreateVaapiVEA));
 #else
