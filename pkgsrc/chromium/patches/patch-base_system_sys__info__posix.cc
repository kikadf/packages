$NetBSD$

* Part of patchset to build on NetBSD

--- base/system/sys_info_posix.cc.orig	2024-03-06 00:14:37.057640000 +0000
+++ base/system/sys_info_posix.cc
@@ -117,7 +117,7 @@ bool GetDiskSpaceInfo(const base::FilePa
 
 namespace base {
 
-#if !BUILDFLAG(IS_OPENBSD)
+#if !BUILDFLAG(IS_BSD)
 // static
 int SysInfo::NumberOfProcessors() {
 #if BUILDFLAG(IS_MAC)
@@ -174,7 +174,7 @@ int SysInfo::NumberOfProcessors() {
 
   return cached_num_cpus;
 }
-#endif  // !BUILDFLAG(IS_OPENBSD)
+#endif  // !BUILDFLAG(IS_BSD)
 
 // static
 uint64_t SysInfo::AmountOfVirtualMemory() {
@@ -264,6 +264,8 @@ std::string SysInfo::OperatingSystemArch
     arch = "x86";
   } else if (arch == "amd64") {
     arch = "x86_64";
+  } else if (arch == "arm64") {
+    arch = "aarch64";
   } else if (std::string(info.sysname) == "AIX") {
     arch = "ppc64";
   }