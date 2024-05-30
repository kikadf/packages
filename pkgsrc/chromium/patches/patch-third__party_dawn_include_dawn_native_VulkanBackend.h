$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- third_party/dawn/include/dawn/native/VulkanBackend.h.orig	2024-05-21 22:44:17.428239300 +0000
+++ third_party/dawn/include/dawn/native/VulkanBackend.h
@@ -90,7 +90,8 @@ struct DAWN_NATIVE_EXPORT SamplerYCbCrVu
 };
 
 // Can't use DAWN_PLATFORM_IS(LINUX) since header included in both Dawn and Chrome
-#ifdef __linux__
+#if defined(__linux__) || defined(__OpenBSD__) || defined(__FreeBSD__) || \
+    defined(__NetBSD__)
 
 // Common properties of external images represented by FDs. On successful import the file
 // descriptor's ownership is transferred to the Dawn implementation and they shouldn't be
