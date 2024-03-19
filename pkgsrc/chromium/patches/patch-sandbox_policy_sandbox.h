$NetBSD$

--- sandbox/policy/sandbox.h.orig	2024-03-06 00:14:57.543418400 +0000
+++ sandbox/policy/sandbox.h
@@ -12,6 +12,14 @@
 #include "sandbox/policy/linux/sandbox_linux.h"
 #endif
 
+#if BUILDFLAG(IS_OPENBSD)
+#include "sandbox/policy/openbsd/sandbox_openbsd.h"
+#if BUILDFLAG(IS_NETBSD)
+#include "sandbox/policy/netbsd/sandbox_netbsd.h"
+#elif BUILDFLAG(IS_FREEBSD)
+#include "sandbox/policy/freebsd/sandbox_freebsd.h"
+#endif
+
 namespace sandbox {
 namespace mojom {
 enum class Sandbox;
@@ -32,7 +40,7 @@ namespace policy {
 
 class SANDBOX_POLICY_EXPORT Sandbox {
  public:
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
   static bool Initialize(sandbox::mojom::Sandbox sandbox_type,
                          SandboxLinux::PreSandboxHook hook,
                          const SandboxLinux::Options& options);
