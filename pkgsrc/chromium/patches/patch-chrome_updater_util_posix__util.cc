$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- chrome/updater/util/posix_util.cc.orig	2024-05-21 22:42:56.289002700 +0000
+++ chrome/updater/util/posix_util.cc
@@ -20,7 +20,7 @@
 #include "chrome/updater/updater_branding.h"
 #include "chrome/updater/util/util.h"
 
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 #include "chrome/updater/util/linux_util.h"
 #endif
 
