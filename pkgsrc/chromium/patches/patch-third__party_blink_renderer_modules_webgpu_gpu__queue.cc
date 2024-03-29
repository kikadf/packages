$NetBSD$

* Part of patchset to build on NetBSD

--- third_party/blink/renderer/modules/webgpu/gpu_queue.cc.orig	2024-03-19 22:14:55.824091200 +0000
+++ third_party/blink/renderer/modules/webgpu/gpu_queue.cc
@@ -785,7 +785,7 @@ bool GPUQueue::CopyFromCanvasSourceImage
 // on linux platform.
 // TODO(crbug.com/1424119): using a webgpu mailbox texture on the OpenGLES
 // backend is failing for unknown reasons.
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   bool forceReadback = true;
 #elif BUILDFLAG(IS_ANDROID)
   // TODO(crbug.com/dawn/1969): Some Android devices don't fail to copy from
