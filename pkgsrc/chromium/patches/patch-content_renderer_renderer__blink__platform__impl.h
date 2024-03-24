$NetBSD$

* Part of patchset to build on NetBSD

--- content/renderer/renderer_blink_platform_impl.h.orig	2024-03-19 22:14:43.699009400 +0000
+++ content/renderer/renderer_blink_platform_impl.h
@@ -247,7 +247,7 @@ class CONTENT_EXPORT RendererBlinkPlatfo
   void Collect3DContextInformation(blink::Platform::GraphicsInfo* gl_info,
                                    const gpu::GPUInfo& gpu_info) const;
 
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_MAC)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_BSD)
   std::unique_ptr<blink::WebSandboxSupport> sandbox_support_;
 #endif
 
