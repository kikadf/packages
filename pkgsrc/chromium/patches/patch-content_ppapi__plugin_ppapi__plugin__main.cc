$NetBSD$

* Part of patchset to build on NetBSD

--- content/ppapi_plugin/ppapi_plugin_main.cc.orig	2024-03-19 22:14:43.338977300 +0000
+++ content/ppapi_plugin/ppapi_plugin_main.cc
@@ -54,6 +54,11 @@
 #include "gin/v8_initializer.h"
 #endif
 
+#if BUILDFLAG(IS_BSD)
+#include "sandbox/policy/sandbox.h"
+#include "sandbox/policy/sandbox_type.h"
+#endif
+
 #if BUILDFLAG(IS_POSIX) && !BUILDFLAG(IS_ANDROID)
 #include <stdlib.h>
 #endif
@@ -150,7 +155,7 @@ int PpapiPluginMain(MainFunctionParams p
   gin::V8Initializer::LoadV8Snapshot();
 #endif
 
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_OPENBSD)
   sandbox::policy::SandboxLinux::GetInstance()->InitializeSandbox(
       sandbox::policy::SandboxTypeFromCommandLine(command_line),
       sandbox::policy::SandboxLinux::PreSandboxHook(),
