$NetBSD$

* Part of patchset to build on NetBSD

--- gpu/vulkan/vulkan_device_queue.h.orig	2024-03-19 22:14:45.723190000 +0000
+++ gpu/vulkan/vulkan_device_queue.h
@@ -169,7 +169,7 @@ class COMPONENT_EXPORT(VULKAN) VulkanDev
   bool allow_protected_memory_ = false;
 
 #if BUILDFLAG(IS_ANDROID) || BUILDFLAG(IS_FUCHSIA) || BUILDFLAG(IS_LINUX) || \
-    BUILDFLAG(IS_CHROMEOS)
+    BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
   VkPhysicalDeviceSamplerYcbcrConversionFeatures
       sampler_ycbcr_conversion_features_{
           VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_YCBCR_CONVERSION_FEATURES};
