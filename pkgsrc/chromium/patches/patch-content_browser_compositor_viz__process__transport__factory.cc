$NetBSD$

* Part of patchset to build on NetBSD

--- content/browser/compositor/viz_process_transport_factory.cc.orig	2024-03-06 00:14:50.454803000 +0000
+++ content/browser/compositor/viz_process_transport_factory.cc
@@ -118,7 +118,7 @@ class HostDisplayClient : public viz::Ho
   HostDisplayClient& operator=(const HostDisplayClient&) = delete;
 
   // viz::HostDisplayClient:
-#if BUILDFLAG(IS_LINUX) && BUILDFLAG(IS_OZONE_X11)
+#if (BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)) && BUILDFLAG(IS_OZONE_X11)
   void DidCompleteSwapWithNewSize(const gfx::Size& size) override {
     compositor_->OnCompleteSwapWithNewSize(size);
   }
