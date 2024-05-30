$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- ui/compositor/compositor.cc.orig	2024-05-21 22:43:35.752522200 +0000
+++ ui/compositor/compositor.cc
@@ -922,7 +922,7 @@ void Compositor::OnResume() {
     obs.ResetIfActive();
 }
 
-#if BUILDFLAG(IS_LINUX) && BUILDFLAG(IS_OZONE_X11)
+#if (BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)) && BUILDFLAG(IS_OZONE_X11)
 void Compositor::OnCompleteSwapWithNewSize(const gfx::Size& size) {
   for (auto& observer : observer_list_)
     observer.OnCompositingCompleteSwapWithNewSize(this, size);
