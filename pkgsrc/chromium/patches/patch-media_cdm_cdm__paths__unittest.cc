$NetBSD$

* Part of patchset to build on NetBSD

--- media/cdm/cdm_paths_unittest.cc.orig	2024-03-19 22:14:49.071488900 +0000
+++ media/cdm/cdm_paths_unittest.cc
@@ -27,7 +27,7 @@ const char kComponentPlatform[] =
     "win";
 #elif BUILDFLAG(IS_CHROMEOS)
     "cros";
-#elif BUILDFLAG(IS_LINUX)
+#elif BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
     "linux";
 #elif BUILDFLAG(IS_FUCHSIA)
     "fuchsia";
