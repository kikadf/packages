$NetBSD$

* Part of patchset to build on NetBSD

--- chrome/browser/intranet_redirect_detector.h.orig	2024-03-06 00:14:41.218001100 +0000
+++ chrome/browser/intranet_redirect_detector.h
@@ -25,7 +25,7 @@ class SimpleURLLoader;
 class PrefRegistrySimple;
 
 #if !(BUILDFLAG(IS_MAC) || BUILDFLAG(IS_WIN) || BUILDFLAG(IS_LINUX) || \
-      BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_FUCHSIA))
+      BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_FUCHSIA) || BUILDFLAG(IS_BSD))
 #error "IntranetRedirectDetector should only be built on Desktop platforms."
 #endif
 