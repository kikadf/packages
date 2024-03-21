$NetBSD$

* Part of patchset to build on NetBSD

--- base/base_switches.cc.orig	2024-03-06 00:14:36.925628700 +0000
+++ base/base_switches.cc
@@ -172,7 +172,7 @@ const char kPackageVersionName[] = "pack
 const char kPackageVersionCode[] = "package-version-code";
 #endif
 
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
 // TODO(crbug.com/1176772): Remove kEnableCrashpad and IsCrashpadEnabled() when
 // Crashpad is fully enabled on Linux. Indicates that Crashpad should be
 // enabled.
