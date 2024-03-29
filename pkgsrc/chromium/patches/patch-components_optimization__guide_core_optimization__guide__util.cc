$NetBSD$

* Part of patchset to build on NetBSD

--- components/optimization_guide/core/optimization_guide_util.cc.orig	2024-03-19 22:14:39.302617300 +0000
+++ components/optimization_guide/core/optimization_guide_util.cc
@@ -39,7 +39,7 @@ optimization_guide::proto::Platform GetP
   return optimization_guide::proto::PLATFORM_CHROMEOS;
 #elif BUILDFLAG(IS_ANDROID)
   return optimization_guide::proto::PLATFORM_ANDROID;
-#elif BUILDFLAG(IS_LINUX)
+#elif BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   return optimization_guide::proto::PLATFORM_LINUX;
 #else
   return optimization_guide::proto::PLATFORM_UNDEFINED;
