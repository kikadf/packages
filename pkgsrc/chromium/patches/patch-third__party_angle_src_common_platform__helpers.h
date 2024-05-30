$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- third_party/angle/src/common/platform_helpers.h.orig	2024-05-21 22:43:57.966503600 +0000
+++ third_party/angle/src/common/platform_helpers.h
@@ -62,7 +62,7 @@ inline constexpr bool IsIOS()
 
 inline constexpr bool IsLinux()
 {
-#if defined(ANGLE_PLATFORM_LINUX)
+#if defined(ANGLE_PLATFORM_LINUX) || defined(ANGLE_PLATFORM_BSD)
     return true;
 #else
     return false;
