$NetBSD$

* Part of patchset to build on NetBSD

--- content/public/browser/content_browser_client.cc.orig	2024-03-19 22:14:43.398982800 +0000
+++ content/public/browser/content_browser_client.cc
@@ -1277,7 +1277,7 @@ bool ContentBrowserClient::ShouldRunOutO
 // that can be adequately sandboxed.
 // Currently Android's network service will not run out of process or sandboxed,
 // so OutOfProcessSystemDnsResolution is not currently enabled on Android.
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   return true;
 #else
   return false;
