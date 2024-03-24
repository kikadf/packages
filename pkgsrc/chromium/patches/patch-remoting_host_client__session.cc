$NetBSD$

* Part of patchset to build on NetBSD

--- remoting/host/client_session.cc.orig	2024-03-19 22:14:51.647718700 +0000
+++ remoting/host/client_session.cc
@@ -160,7 +160,7 @@ void ClientSession::NotifyClientResoluti
   if (desktop_environment_options_.enable_curtaining()) {
     dpi_vector.set(resolution.x_dpi(), resolution.y_dpi());
   }
-#elif BUILDFLAG(IS_LINUX)
+#elif BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   dpi_vector.set(resolution.x_dpi(), resolution.y_dpi());
 #endif
 
