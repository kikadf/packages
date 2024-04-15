$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- ui/gfx/linux/gbm_wrapper.cc.orig	2024-04-10 21:25:25.279878000 +0000
+++ ui/gfx/linux/gbm_wrapper.cc
@@ -313,7 +313,7 @@ class Device final : public ui::GbmDevic
     // of 1x1 BOs which are destroyed before creating the final BO creation used
     // to instantiate the returned GbmBuffer.
     gfx::Size size =
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
         gfx::Size(1, 1);
 #else
         requested_size;
