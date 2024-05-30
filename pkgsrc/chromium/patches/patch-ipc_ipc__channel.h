$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- ipc/ipc_channel.h.orig	2024-05-21 22:43:04.737756000 +0000
+++ ipc/ipc_channel.h
@@ -240,7 +240,7 @@ class COMPONENT_EXPORT(IPC) Channel : pu
   static std::string GenerateUniqueRandomChannelID();
 #endif
 
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
   // Sandboxed processes live in a PID namespace, so when sending the IPC hello
   // message from client to server we need to send the PID from the global
   // PID namespace.
