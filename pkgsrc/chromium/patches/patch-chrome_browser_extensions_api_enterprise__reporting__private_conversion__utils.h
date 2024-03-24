$NetBSD$

* Part of patchset to build on NetBSD

--- chrome/browser/extensions/api/enterprise_reporting_private/conversion_utils.h.orig	2024-03-19 22:14:31.161891000 +0000
+++ chrome/browser/extensions/api/enterprise_reporting_private/conversion_utils.h
@@ -7,7 +7,7 @@
 
 #include "build/build_config.h"
 
-#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 
 #include <optional>
 #include <vector>
