$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- remoting/host/chromoting_host.cc.orig	2024-05-21 22:43:06.993957300 +0000
+++ remoting/host/chromoting_host.cc
@@ -129,7 +129,7 @@ void ChromotingHost::Start(const std::st
       &ChromotingHost::OnIncomingSession, base::Unretained(this)));
 }
 
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 void ChromotingHost::StartChromotingHostServices() {
   DCHECK_CALLED_ON_VALID_SEQUENCE(sequence_checker_);
   DCHECK(!ipc_server_);
