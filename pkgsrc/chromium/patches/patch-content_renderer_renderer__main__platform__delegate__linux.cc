$NetBSD$

* Part of patchset to build on NetBSD

--- content/renderer/renderer_main_platform_delegate_linux.cc.orig	2024-03-19 22:14:43.699009400 +0000
+++ content/renderer/renderer_main_platform_delegate_linux.cc
@@ -44,6 +44,7 @@ bool RendererMainPlatformDelegate::Enabl
   // any renderer has been started.
   // Here, we test that the status of SeccompBpf in the renderer is consistent
   // with what SandboxLinux::GetStatus() said we would do.
+#if !BUILDFLAG(IS_BSD)
   auto* linux_sandbox = sandbox::policy::SandboxLinux::GetInstance();
   if (linux_sandbox->GetStatus() & sandbox::policy::SandboxLinux::kSeccompBPF) {
     CHECK(linux_sandbox->seccomp_bpf_started());
@@ -65,6 +66,7 @@ bool RendererMainPlatformDelegate::Enabl
     CHECK_EQ(errno, EPERM);
   }
 #endif  // __x86_64__
+#endif
 
   return true;
 }
