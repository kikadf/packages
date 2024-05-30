$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- components/optimization_guide/core/optimization_guide_util.cc.orig	2024-05-21 22:42:58.421192600 +0000
+++ components/optimization_guide/core/optimization_guide_util.cc
@@ -40,7 +40,7 @@ optimization_guide::proto::Platform GetP
   return optimization_guide::proto::PLATFORM_CHROMEOS;
 #elif BUILDFLAG(IS_ANDROID)
   return optimization_guide::proto::PLATFORM_ANDROID;
-#elif BUILDFLAG(IS_LINUX)
+#elif BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   return optimization_guide::proto::PLATFORM_LINUX;
 #else
   return optimization_guide::proto::PLATFORM_UNDEFINED;
