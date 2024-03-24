$NetBSD$

* Part of patchset to build on NetBSD

--- net/url_request/url_request_context.h.orig	2024-03-19 22:14:51.407697200 +0000
+++ net/url_request/url_request_context.h
@@ -85,7 +85,7 @@ class NET_EXPORT URLRequestContext final
 // TODO(crbug.com/1052397): Revisit once build flag switch of lacros-chrome is
 // complete.
 #if !BUILDFLAG(IS_WIN) && \
-    !(BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS_LACROS))
+    !(BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS_LACROS) || BUILDFLAG(IS_BSD))
   // This function should not be used in Chromium, please use the version with
   // NetworkTrafficAnnotationTag in the future.
   //
