$NetBSD$

--- content/browser/renderer_host/render_process_host_impl.h.orig	2020-07-08 21:41:48.000000000 +0000
+++ content/browser/renderer_host/render_process_host_impl.h
@@ -951,7 +951,7 @@ class CONTENT_EXPORT RenderProcessHostIm
   // if the request isn't handled on the IO thread.
   void OnBindHostReceiver(mojo::GenericPendingReceiver receiver);
 
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
   // Provides /proc/{renderer pid}/status and statm files for the renderer,
   // because the files are required to calculate the renderer's private
   // footprint on Chromium Linux. Regarding MacOS X and Windows, we have
