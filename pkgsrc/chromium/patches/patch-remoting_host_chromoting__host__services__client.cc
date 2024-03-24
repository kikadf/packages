$NetBSD$

* Part of patchset to build on NetBSD

--- remoting/host/chromoting_host_services_client.cc.orig	2024-03-19 22:14:51.647718700 +0000
+++ remoting/host/chromoting_host_services_client.cc
@@ -59,7 +59,7 @@ mojo::PendingRemote<mojom::ChromotingHos
 
 }  // namespace
 
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 
 // static
 constexpr char
@@ -136,7 +136,7 @@ bool ChromotingHostServicesClient::Ensur
   if (session_services_remote_.is_bound()) {
     return true;
   }
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   if (!environment_->HasVar(kChromeRemoteDesktopSessionEnvVar)) {
     LOG(WARNING) << "Current desktop environment is not remotable.";
     return false;
