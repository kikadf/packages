$NetBSD$

* Part of patchset to build on NetBSD

--- components/variations/service/variations_service.cc.orig	2024-03-06 00:14:50.158777500 +0000
+++ components/variations/service/variations_service.cc
@@ -98,7 +98,7 @@ std::string GetPlatformString() {
   return "android";
 #elif BUILDFLAG(IS_FUCHSIA)
   return "fuchsia";
-#elif BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD) || BUILDFLAG(IS_SOLARIS)
+#elif BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD) || BUILDFLAG(IS_SOLARIS) || BUILDFLAG(IS_BSD)
   // Default BSD and SOLARIS to Linux to not break those builds, although these
   // platforms are not officially supported by Chrome.
   return "linux";
