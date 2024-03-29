$NetBSD$

* Part of patchset to build on NetBSD

--- ui/compositor/compositor.cc.orig	2024-03-19 22:15:27.110882300 +0000
+++ ui/compositor/compositor.cc
@@ -894,7 +894,7 @@ void Compositor::OnResume() {
     obs.ResetIfActive();
 }
 
-#if BUILDFLAG(IS_LINUX) && BUILDFLAG(IS_OZONE_X11)
+#if (BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)) && BUILDFLAG(IS_OZONE_X11)
 void Compositor::OnCompleteSwapWithNewSize(const gfx::Size& size) {
   for (auto& observer : observer_list_)
     observer.OnCompositingCompleteSwapWithNewSize(this, size);
