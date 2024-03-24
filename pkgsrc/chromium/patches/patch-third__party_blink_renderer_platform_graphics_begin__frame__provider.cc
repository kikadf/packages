$NetBSD$

* Part of patchset to build on NetBSD

--- third_party/blink/renderer/platform/graphics/begin_frame_provider.cc.orig	2024-03-19 22:14:55.936101200 +0000
+++ third_party/blink/renderer/platform/graphics/begin_frame_provider.cc
@@ -71,8 +71,12 @@ void BeginFrameProvider::CreateComposito
 
   // Once we are using RAF, this thread is driving user interactive display
   // updates. Update priority accordingly.
+  // pledge(2)
+  // stop this baloney
+#if !defined(OS_OPENBSD)
   base::PlatformThread::SetCurrentThreadType(
       base::ThreadType::kDisplayCritical);
+#endif
 
   mojo::Remote<mojom::blink::EmbeddedFrameSinkProvider> provider;
   Platform::Current()->GetBrowserInterfaceBroker()->GetInterface(
