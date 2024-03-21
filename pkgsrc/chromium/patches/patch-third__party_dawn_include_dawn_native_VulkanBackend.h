$NetBSD$

* Part of patchset to build on NetBSD

--- third_party/dawn/include/dawn/native/VulkanBackend.h.orig	2024-03-06 00:15:41.379224000 +0000
+++ third_party/dawn/include/dawn/native/VulkanBackend.h
@@ -83,7 +83,8 @@ struct ExternalImageExportInfoVk : Exter
 };
 
 // Can't use DAWN_PLATFORM_IS(LINUX) since header included in both Dawn and Chrome
-#ifdef __linux__
+#if defined(__linux__) || defined(__OpenBSD__) || defined(__FreeBSD__) || \
+    defined(__NetBSD__)
 
 // Common properties of external images represented by FDs. On successful import the file
 // descriptor's ownership is transferred to the Dawn implementation and they shouldn't be
