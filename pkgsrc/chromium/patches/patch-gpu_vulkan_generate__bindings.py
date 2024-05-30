$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- gpu/vulkan/generate_bindings.py.orig	2024-05-21 22:43:03.077608000 +0000
+++ gpu/vulkan/generate_bindings.py
@@ -270,7 +270,7 @@ VULKAN_DEVICE_FUNCTIONS = [
     ]
   },
   {
-    'ifdef': 'BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)',
+    'ifdef': 'BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)',
     'extension': 'VK_EXT_IMAGE_DRM_FORMAT_MODIFIER_EXTENSION_NAME',
     'functions': [
       'vkGetImageDrmFormatModifierPropertiesEXT',
