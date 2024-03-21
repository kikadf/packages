$NetBSD$

* Part of patchset to build on NetBSD

--- ui/ozone/platform/x11/vulkan_implementation_x11.cc.orig	2024-03-06 00:15:20.849441800 +0000
+++ ui/ozone/platform/x11/vulkan_implementation_x11.cc
@@ -58,7 +58,11 @@ bool VulkanImplementationX11::Initialize
 
     path = path.Append("libvk_swiftshader.so");
   } else {
+#if BUILDFLAG(IS_BSD) 
+    path = base::FilePath("libvulkan.so");
+#else
     path = base::FilePath("libvulkan.so.1");
+#endif
   }
 
   return vulkan_instance_.Initialize(path, required_extensions, {});
