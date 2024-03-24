$NetBSD$

* Part of patchset to build on NetBSD

--- components/performance_manager/public/features.h.orig	2024-03-19 22:14:39.542638500 +0000
+++ components/performance_manager/public/features.h
@@ -28,7 +28,7 @@ BASE_DECLARE_FEATURE(kRunOnDedicatedThre
 
 #if !BUILDFLAG(IS_ANDROID)
 
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 #define URGENT_DISCARDING_FROM_PERFORMANCE_MANAGER() false
 #else
 #define URGENT_DISCARDING_FROM_PERFORMANCE_MANAGER() true
