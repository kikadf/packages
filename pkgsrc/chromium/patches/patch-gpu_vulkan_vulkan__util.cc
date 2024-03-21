$NetBSD$

* Part of patchset to build on NetBSD

--- gpu/vulkan/vulkan_util.cc.orig	2024-03-06 00:14:52.951019800 +0000
+++ gpu/vulkan/vulkan_util.cc
@@ -443,7 +443,7 @@ bool CheckVulkanCompatibilities(const Vu
     }
   }
 
-#if BUILDFLAG(IS_LINUX) && !defined(OZONE_PLATFORM_IS_X11)
+#if (BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)) && !defined(OZONE_PLATFORM_IS_X11)
   // Vulkan is only supported with X11 on Linux for now.
   return false;
 #else
