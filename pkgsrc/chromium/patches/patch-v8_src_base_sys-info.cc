$NetBSD$

* Part of patchset to build on NetBSD

--- v8/src/base/sys-info.cc.orig	2024-03-19 22:16:28.868392000 +0000
+++ v8/src/base/sys-info.cc
@@ -37,8 +37,12 @@ namespace base {
 
 // static
 int SysInfo::NumberOfProcessors() {
+#if V8_OS_OPENBSD || V8_OS_NETBSD
 #if V8_OS_OPENBSD
+  int mib[2] = {CTL_HW, HW_NCPUONLINE};
+#else
   int mib[2] = {CTL_HW, HW_NCPU};
+#endif
   int ncpu = 0;
   size_t len = sizeof(ncpu);
   if (sysctl(mib, arraysize(mib), &ncpu, &len, nullptr, 0) != 0) {
