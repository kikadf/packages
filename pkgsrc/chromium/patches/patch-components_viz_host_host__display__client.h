$NetBSD$

* Part of patchset to build on NetBSD

--- components/viz/host/host_display_client.h.orig	2024-03-19 22:14:42.174873600 +0000
+++ components/viz/host/host_display_client.h
@@ -52,7 +52,7 @@ class VIZ_HOST_EXPORT HostDisplayClient 
   void AddChildWindowToBrowser(gpu::SurfaceHandle child_window) override;
 #endif
 
-#if BUILDFLAG(IS_LINUX) && BUILDFLAG(IS_OZONE_X11)
+#if (BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)) && BUILDFLAG(IS_OZONE_X11)
   void DidCompleteSwapWithNewSize(const gfx::Size& size) override;
 #endif  // BUILDFLAG(IS_LINUX) && BUILDFLAG(IS_OZONE_X11)
 
