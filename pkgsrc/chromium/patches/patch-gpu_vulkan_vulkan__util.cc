$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- gpu/vulkan/vulkan_util.cc.orig	2024-03-26 21:37:01.218080300 +0000
+++ gpu/vulkan/vulkan_util.cc
@@ -443,7 +443,7 @@ bool CheckVulkanCompatibilities(const Vu
     }
   }
 
-#if BUILDFLAG(IS_LINUX) && !defined(OZONE_PLATFORM_IS_X11)
+#if (BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)) && !defined(OZONE_PLATFORM_IS_X11)
   // Vulkan is only supported with X11 on Linux for now.
   return false;
 #else
