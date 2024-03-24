$NetBSD$

* Part of patchset to build on NetBSD

--- remoting/host/chromoting_host.cc.orig	2024-03-19 22:14:51.643718200 +0000
+++ remoting/host/chromoting_host.cc
@@ -129,7 +129,7 @@ void ChromotingHost::Start(const std::st
       &ChromotingHost::OnIncomingSession, base::Unretained(this)));
 }
 
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 void ChromotingHost::StartChromotingHostServices() {
   DCHECK_CALLED_ON_VALID_SEQUENCE(sequence_checker_);
   DCHECK(!ipc_server_);
