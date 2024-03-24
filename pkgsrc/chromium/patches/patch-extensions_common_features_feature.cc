$NetBSD$

* Part of patchset to build on NetBSD

--- extensions/common/features/feature.cc.orig	2024-03-19 22:14:45.135137600 +0000
+++ extensions/common/features/feature.cc
@@ -34,6 +34,8 @@ Feature::Platform Feature::GetCurrentPla
   return WIN_PLATFORM;
 #elif BUILDFLAG(IS_FUCHSIA)
   return FUCHSIA_PLATFORM;
+#elif BUILDFLAG(IS_BSD)
+  return LINUX_PLATFORM;
 #else
   return UNSPECIFIED_PLATFORM;
 #endif
