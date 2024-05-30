$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- chrome/browser/extensions/api/enterprise_reporting_private/conversion_utils.h.orig	2024-05-21 22:42:51.212550000 +0000
+++ chrome/browser/extensions/api/enterprise_reporting_private/conversion_utils.h
@@ -7,7 +7,7 @@
 
 #include "build/build_config.h"
 
-#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 
 #include <optional>
 #include <vector>
