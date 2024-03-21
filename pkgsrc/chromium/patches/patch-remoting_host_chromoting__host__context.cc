$NetBSD$

* Part of patchset to build on NetBSD

--- remoting/host/chromoting_host_context.cc.orig	2024-03-06 00:14:57.367403300 +0000
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
