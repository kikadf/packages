$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- extensions/common/features/feature.cc.orig	2024-04-10 21:24:53.833371900 +0000
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
