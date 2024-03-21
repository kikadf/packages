$NetBSD$

* Part of patchset to build on NetBSD

--- net/url_request/url_request_context.cc.orig	2024-03-06 00:14:57.143383700 +0000
+++ net/url_request/url_request_context.cc
@@ -117,7 +117,7 @@ const HttpNetworkSessionContext* URLRequ
 // TODO(crbug.com/1052397): Revisit once build flag switch of lacros-chrome is
 // complete.
 #if !BUILDFLAG(IS_WIN) && \
-    !(BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS_LACROS))
+    !(BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS_LACROS) || BUILDFLAG(IS_BSD))
 std::unique_ptr<URLRequest> URLRequestContext::CreateRequest(
     const GURL& url,
     RequestPriority priority,
