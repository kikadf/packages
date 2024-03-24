$NetBSD$

* Part of patchset to build on NetBSD

--- components/safe_browsing/core/browser/realtime/url_lookup_service_base.cc.orig	2024-03-19 22:14:40.418717000 +0000
+++ components/safe_browsing/core/browser/realtime/url_lookup_service_base.cc
@@ -109,7 +109,7 @@ RTLookupRequest::OSType GetRTLookupReque
   return RTLookupRequest::OS_TYPE_FUCHSIA;
 #elif BUILDFLAG(IS_IOS)
   return RTLookupRequest::OS_TYPE_IOS;
-#elif BUILDFLAG(IS_LINUX)
+#elif BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   return RTLookupRequest::OS_TYPE_LINUX;
 #elif BUILDFLAG(IS_MAC)
   return RTLookupRequest::OS_TYPE_MAC;
