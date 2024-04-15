$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- gpu/command_buffer/service/dawn_context_provider.cc.orig	2024-04-10 21:24:54.073391000 +0000
+++ gpu/command_buffer/service/dawn_context_provider.cc
@@ -186,7 +186,7 @@ wgpu::BackendType DawnContextProvider::G
   return base::FeatureList::IsEnabled(features::kSkiaGraphiteDawnUseD3D12)
              ? wgpu::BackendType::D3D12
              : wgpu::BackendType::D3D11;
-#elif BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_ANDROID)
+#elif BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_ANDROID) || BUILDFLAG(IS_BSD)
   return wgpu::BackendType::Vulkan;
 #elif BUILDFLAG(IS_APPLE)
   return wgpu::BackendType::Metal;
