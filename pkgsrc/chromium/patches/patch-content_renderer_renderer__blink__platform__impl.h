$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- content/renderer/renderer_blink_platform_impl.h.orig	2024-05-21 22:43:01.525469500 +0000
+++ content/renderer/renderer_blink_platform_impl.h
@@ -246,7 +246,7 @@ class CONTENT_EXPORT RendererBlinkPlatfo
   void Collect3DContextInformation(blink::Platform::GraphicsInfo* gl_info,
                                    const gpu::GPUInfo& gpu_info) const;
 
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_MAC)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_BSD)
   std::unique_ptr<blink::WebSandboxSupport> sandbox_support_;
 #endif
 
