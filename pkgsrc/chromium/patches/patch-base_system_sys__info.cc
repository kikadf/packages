$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- base/system/sys_info.cc.orig	2024-05-21 22:42:46.756152400 +0000
+++ base/system/sys_info.cc
@@ -225,7 +225,7 @@ std::string SysInfo::HardwareModelName()
 #endif
 
 void SysInfo::GetHardwareInfo(base::OnceCallback<void(HardwareInfo)> callback) {
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_FUCHSIA)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_FUCHSIA) || BUILDFLAG(IS_BSD)
   constexpr base::TaskTraits kTraits = {base::MayBlock()};
 #else
   constexpr base::TaskTraits kTraits = {};
