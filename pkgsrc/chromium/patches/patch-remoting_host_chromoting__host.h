$NetBSD$

* Part of patchset to build chromium on NetBSD
* Based on OpenBSD's chromium patches, and
  pkgsrc's qt5-qtwebengine patches

--- remoting/host/chromoting_host.h.orig	2024-07-24 02:44:43.377434300 +0000
+++ remoting/host/chromoting_host.h
@@ -32,7 +32,7 @@
 #include "remoting/protocol/session_manager.h"
 #include "remoting/protocol/transport_context.h"
 
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 #include "remoting/host/chromoting_host_services_server.h"
 #endif
 
@@ -97,7 +97,7 @@ class ChromotingHost : public ClientSess
   // This method can only be called once during the lifetime of this object.
   void Start(const std::string& host_owner);
 
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   // Starts running the ChromotingHostServices server and listening for incoming
   // IPC binding requests.
   // Currently only Linux runs the ChromotingHostServices server on the host
@@ -206,7 +206,7 @@ class ChromotingHost : public ClientSess
   // List of host extensions.
   std::vector<std::unique_ptr<HostExtension>> extensions_;
 
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   // IPC server that runs the CRD host service API. Non-null if the server name
   // is set and the host is started.
   // Currently only Linux runs the ChromotingHostServices server on the host
