$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- media/cdm/cdm_paths_unittest.cc.orig	2024-05-21 22:43:04.885769400 +0000
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
