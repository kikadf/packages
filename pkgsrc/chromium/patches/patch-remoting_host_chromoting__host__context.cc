$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- remoting/host/chromoting_host_context.cc.orig	2024-04-10 21:24:58.417737200 +0000
+++ remoting/host/chromoting_host_context.cc
@@ -294,7 +294,7 @@ std::unique_ptr<ChromotingHostContext> C
   // on a UI thread.
   scoped_refptr<AutoThreadTaskRunner> input_task_runner =
       AutoThread::CreateWithType("ChromotingInputThread", ui_task_runner,
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
                                  base::MessagePumpType::UI);
 #else
                                  base::MessagePumpType::IO);
