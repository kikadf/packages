$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- chrome/browser/web_applications/web_app_install_info.h.orig	2024-05-21 22:42:54.476841000 +0000
+++ chrome/browser/web_applications/web_app_install_info.h
@@ -35,7 +35,7 @@
 #include "url/gurl.h"
 
 static_assert(BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) ||
-              BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_FUCHSIA));
+              BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_FUCHSIA) || BUILDFLAG(IS_BSD));
 
 namespace web_app {
 
