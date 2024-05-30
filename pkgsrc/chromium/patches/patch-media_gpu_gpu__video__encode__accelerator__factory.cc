$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- media/gpu/gpu_video_encode_accelerator_factory.cc.orig	2024-05-21 22:43:04.973777000 +0000
+++ media/gpu/gpu_video_encode_accelerator_factory.cc
@@ -118,7 +118,7 @@ std::vector<VEAFactoryFunction> GetVEAFa
     return vea_factory_functions;
 
 #if BUILDFLAG(USE_VAAPI)
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   if (base::FeatureList::IsEnabled(kVaapiVideoEncodeLinux))
     vea_factory_functions.push_back(base::BindRepeating(&CreateVaapiVEA));
 #else
