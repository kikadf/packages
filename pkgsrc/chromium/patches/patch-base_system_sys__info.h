$NetBSD$

* Part of patchset to build on NetBSD

--- base/system/sys_info.h.orig	2024-03-19 22:14:27.185536100 +0000
+++ base/system/sys_info.h
@@ -318,6 +318,8 @@ class BASE_EXPORT SysInfo {
   static void ResetCpuSecurityMitigationsEnabledForTesting();
 #endif
 
+  static uint64_t MaxSharedMemorySize();
+
  private:
   friend class test::ScopedAmountOfPhysicalMemoryOverride;
   FRIEND_TEST_ALL_PREFIXES(SysInfoTest, AmountOfAvailablePhysicalMemory);
@@ -330,7 +332,7 @@ class BASE_EXPORT SysInfo {
   static HardwareInfo GetHardwareInfoSync();
 
 #if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_ANDROID) || \
-    BUILDFLAG(IS_AIX)
+    BUILDFLAG(IS_AIX) || BUILDFLAG(IS_BSD)
   static uint64_t AmountOfAvailablePhysicalMemory(
       const SystemMemoryInfoKB& meminfo);
 #endif
