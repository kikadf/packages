$NetBSD$

* Part of patchset to build on NetBSD

--- components/services/screen_ai/sandbox/screen_ai_sandbox_hook_linux.cc.orig	2024-03-06 00:14:48.998676800 +0000
+++ components/services/screen_ai/sandbox/screen_ai_sandbox_hook_linux.cc
@@ -53,6 +53,7 @@ bool ScreenAIPreSandboxHook(sandbox::pol
     }
   }
 
+#if !BUILDFLAG(IS_BSD)
   auto* instance = sandbox::policy::SandboxLinux::GetInstance();
 
   std::vector<BrokerFilePermission> permissions{
@@ -75,6 +76,7 @@ bool ScreenAIPreSandboxHook(sandbox::pol
                             sandbox::syscall_broker::COMMAND_OPEN}),
       permissions, sandbox::policy::SandboxLinux::PreSandboxHook(), options);
   instance->EngageNamespaceSandboxIfPossible();
+#endif
 
   return true;
 }
