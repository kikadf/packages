$NetBSD$

--- content/browser/ppapi_plugin_process_host.cc.orig	2020-07-08 21:41:48.000000000 +0000
+++ content/browser/ppapi_plugin_process_host.cc
@@ -365,7 +365,7 @@ bool PpapiPluginProcessHost::Init(const 
   base::CommandLine::StringType plugin_launcher =
       browser_command_line.GetSwitchValueNative(switches::kPpapiPluginLauncher);
 
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
   int flags = plugin_launcher.empty() ? ChildProcessHost::CHILD_ALLOW_SELF :
                                         ChildProcessHost::CHILD_NORMAL;
 #elif defined(OS_MACOSX)
