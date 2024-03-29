$NetBSD$

* Part of patchset to build on NetBSD

--- components/safe_browsing/core/browser/db/v4_protocol_manager_util.cc.orig	2024-03-19 22:14:40.410716000 +0000
+++ components/safe_browsing/core/browser/db/v4_protocol_manager_util.cc
@@ -116,7 +116,7 @@ std::ostream& operator<<(std::ostream& o
 PlatformType GetCurrentPlatformType() {
 #if BUILDFLAG(IS_WIN)
   return WINDOWS_PLATFORM;
-#elif BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#elif BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
   return LINUX_PLATFORM;
 #elif BUILDFLAG(IS_IOS)
   return IOS_PLATFORM;
