$NetBSD$

* Part of patchset to build on NetBSD

--- chrome/browser/metrics/perf/cpu_identity.cc.orig	2024-03-19 22:14:31.597930000 +0000
+++ chrome/browser/metrics/perf/cpu_identity.cc
@@ -141,7 +141,7 @@ CPUIdentity GetCPUIdentity() {
   result.release =
 #if BUILDFLAG(IS_CHROMEOS_ASH)
       base::SysInfo::KernelVersion();
-#elif BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS_LACROS)
+#elif BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS_LACROS) || BUILDFLAG(IS_BSD)
       base::SysInfo::OperatingSystemVersion();
 #else
 #error "Unsupported configuration"
