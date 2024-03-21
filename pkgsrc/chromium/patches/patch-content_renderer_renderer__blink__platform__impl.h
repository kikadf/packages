$NetBSD$

* Part of patchset to build on NetBSD

--- content/renderer/renderer_blink_platform_impl.h.orig	2024-03-06 00:14:51.366882300 +0000
+++ content/renderer/renderer_blink_platform_impl.h
@@ -246,7 +246,7 @@ class CONTENT_EXPORT RendererBlinkPlatfo
   void Collect3DContextInformation(blink::Platform::GraphicsInfo* gl_info,
                                    const gpu::GPUInfo& gpu_info) const;
 
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_MAC)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_BSD)
   std::unique_ptr<blink::WebSandboxSupport> sandbox_support_;
 #endif
 
