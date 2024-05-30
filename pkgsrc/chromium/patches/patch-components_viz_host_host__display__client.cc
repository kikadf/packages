$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- components/viz/host/host_display_client.cc.orig	2024-05-21 22:43:00.565384000 +0000
+++ components/viz/host/host_display_client.cc
@@ -65,7 +65,7 @@ void HostDisplayClient::AddChildWindowTo
 }
 #endif
 
-#if BUILDFLAG(IS_LINUX) && BUILDFLAG(IS_OZONE_X11)
+#if (BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)) && BUILDFLAG(IS_OZONE_X11)
 void HostDisplayClient::DidCompleteSwapWithNewSize(const gfx::Size& size) {
   NOTIMPLEMENTED();
 }
