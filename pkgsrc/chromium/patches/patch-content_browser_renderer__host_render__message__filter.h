$NetBSD$

--- content/browser/renderer_host/render_message_filter.h.orig	2020-07-08 21:40:42.000000000 +0000
+++ content/browser/renderer_host/render_message_filter.h
@@ -79,14 +79,14 @@ class CONTENT_EXPORT RenderMessageFilter
   // mojom::RenderMessageFilter:
   void GenerateRoutingID(GenerateRoutingIDCallback routing_id) override;
   void HasGpuProcess(HasGpuProcessCallback callback) override;
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
   void SetThreadPriority(int32_t ns_tid,
                          base::ThreadPriority priority) override;
 #endif
 
   void OnResolveProxy(const GURL& url, IPC::Message* reply_msg);
 
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
   void SetThreadPriorityOnFileThread(base::PlatformThreadId ns_tid,
                                      base::ThreadPriority priority);
 #endif
