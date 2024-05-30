$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- third_party/blink/renderer/modules/webgl/webgl_rendering_context_base.cc.orig	2024-05-21 22:43:10.454265800 +0000
+++ third_party/blink/renderer/modules/webgl/webgl_rendering_context_base.cc
@@ -6357,7 +6357,7 @@ void WebGLRenderingContextBase::TexImage
   constexpr bool kAllowZeroCopyImages = true;
 #endif
 
-#if BUILDFLAG(IS_ANDROID) || BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_ANDROID) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   // TODO(crbug.com/1175907): Only TexImage2D seems to work with the GPU path on
   // Android M -- appears to work fine on R, but to avoid regressions in <video>
   // limit to TexImage2D only for now. Fails conformance test on Nexus 5X:
