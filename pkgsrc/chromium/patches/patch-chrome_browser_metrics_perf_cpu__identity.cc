$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- chrome/browser/metrics/perf/cpu_identity.cc.orig	2024-05-21 22:42:51.680591600 +0000
+++ chrome/browser/metrics/perf/cpu_identity.cc
@@ -142,7 +142,7 @@ CPUIdentity GetCPUIdentity() {
   result.release =
 #if BUILDFLAG(IS_CHROMEOS_ASH)
       base::SysInfo::KernelVersion();
-#elif BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS_LACROS)
+#elif BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS_LACROS) || BUILDFLAG(IS_BSD)
       base::SysInfo::OperatingSystemVersion();
 #else
 #error "Unsupported configuration"
