$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- remoting/host/client_session.cc.orig	2024-05-21 22:43:06.997957700 +0000
+++ remoting/host/client_session.cc
@@ -157,7 +157,7 @@ void ClientSession::NotifyClientResoluti
   if (desktop_environment_options_.enable_curtaining()) {
     dpi_vector.set(resolution.x_dpi(), resolution.y_dpi());
   }
-#elif BUILDFLAG(IS_LINUX)
+#elif BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   dpi_vector.set(resolution.x_dpi(), resolution.y_dpi());
 #endif
 
