$NetBSD$

--- components/viz/service/frame_sinks/root_compositor_frame_sink_impl.h.orig	2020-07-08 21:40:41.000000000 +0000
+++ components/viz/service/frame_sinks/root_compositor_frame_sink_impl.h
@@ -157,7 +157,7 @@ class RootCompositorFrameSinkImpl : publ
   base::TimeDelta preferred_frame_interval_ =
       FrameRateDecider::UnspecifiedFrameInterval();
 
-#if defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#if (defined(OS_LINUX) || defined(OS_BSD)) && !defined(OS_CHROMEOS)
   gfx::Size last_swap_pixel_size_;
 #endif
 
