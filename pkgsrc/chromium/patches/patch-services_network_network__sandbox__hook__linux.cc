$NetBSD$

--- services/network/network_sandbox_hook_linux.cc.orig	2020-07-15 18:56:47.000000000 +0000
+++ services/network/network_sandbox_hook_linux.cc
@@ -14,6 +14,7 @@ using sandbox::syscall_broker::MakeBroke
 namespace network {
 
 bool NetworkPreSandboxHook(service_manager::SandboxLinux::Options options) {
+#if !defined(OS_BSD)
   auto* instance = service_manager::SandboxLinux::GetInstance();
 
   // TODO(tsepez): remove universal permission under filesytem root.
@@ -32,6 +33,7 @@ bool NetworkPreSandboxHook(service_manag
       service_manager::SandboxLinux::PreSandboxHook(), options);
 
   instance->EngageNamespaceSandboxIfPossible();
+#endif
   return true;
 }
 
