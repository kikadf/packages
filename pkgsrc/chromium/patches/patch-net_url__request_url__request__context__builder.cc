$NetBSD$

* Part of patchset to build on NetBSD

--- net/url_request/url_request_context_builder.cc.orig	2024-03-19 22:14:51.407697200 +0000
+++ net/url_request/url_request_context_builder.cc
@@ -428,7 +428,7 @@ std::unique_ptr<URLRequestContext> URLRe
   }
 
   if (!proxy_resolution_service_) {
-#if !BUILDFLAG(IS_LINUX) && !BUILDFLAG(IS_CHROMEOS) && !BUILDFLAG(IS_ANDROID)
+#if !BUILDFLAG(IS_LINUX) && !BUILDFLAG(IS_CHROMEOS) && !BUILDFLAG(IS_ANDROID) && !BUILDFLAG(IS_BSD)
     // TODO(willchan): Switch to using this code when
     // ProxyConfigService::CreateSystemProxyConfigService()'s
     // signature doesn't suck.
