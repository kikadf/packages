$NetBSD$

* Part of patchset to build on NetBSD

--- ui/ozone/platform/wayland/gpu/vulkan_implementation_wayland.cc.orig	2024-03-19 22:15:27.498916900 +0000
+++ ui/ozone/platform/wayland/gpu/vulkan_implementation_wayland.cc
@@ -38,7 +38,11 @@ bool VulkanImplementationWayland::Initia
 
     path = path.Append("libvk_swiftshader.so");
   } else {
+#if BUILDFLAG(IS_BSD)
+    path = base::FilePath("libvulkan.so");
+#else
     path = base::FilePath("libvulkan.so.1");
+#endif
   }
 
   return vulkan_instance_.Initialize(path, required_extensions, {});
