$NetBSD$

--- services/device/compute_pressure/cpu_probe.cc.orig	2024-03-06 00:14:57.599423400 +0000
+++ services/device/compute_pressure/cpu_probe.cc
@@ -60,6 +60,7 @@ std::unique_ptr<CpuProbe> CpuProbe::Crea
 #elif BUILDFLAG(IS_MAC)
   return CpuProbeMac::Create(sampling_interval, std::move(sampling_callback));
 #else
+  NOTIMPLEMENTED();
   return nullptr;
 #endif  // BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
 }
