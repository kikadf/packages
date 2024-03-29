$NetBSD$

* Part of patchset to build on NetBSD

--- components/system_cpu/cpu_probe.cc.orig	2024-03-19 22:14:41.218788100 +0000
+++ components/system_cpu/cpu_probe.cc
@@ -30,6 +30,9 @@ std::unique_ptr<CpuProbe> CpuProbe::Crea
   return CpuProbeWin::Create();
 #elif BUILDFLAG(IS_MAC)
   return CpuProbeMac::Create();
+#elif BUILDFLAG(IS_BSD)
+  NOTIMPLEMENTED();
+  return nullptr;
 #else
   return nullptr;
 #endif  // BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
