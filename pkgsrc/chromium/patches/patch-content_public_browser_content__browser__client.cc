$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- content/public/browser/content_browser_client.cc.orig	2024-05-21 22:43:01.417460000 +0000
+++ content/public/browser/content_browser_client.cc
@@ -1293,7 +1293,7 @@ bool ContentBrowserClient::ShouldRunOutO
 // that can be adequately sandboxed.
 // Currently Android's network service will not run out of process or sandboxed,
 // so OutOfProcessSystemDnsResolution is not currently enabled on Android.
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   return true;
 #else
   return false;
