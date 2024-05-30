$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- net/base/features.cc.orig	2024-05-21 22:43:05.925862000 +0000
+++ net/base/features.cc
@@ -26,7 +26,7 @@ BASE_FEATURE(kCapReferrerToOriginOnCross
 BASE_FEATURE(kAsyncDns,
              "AsyncDns",
 #if BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_ANDROID) || \
-    BUILDFLAG(IS_WIN) || BUILDFLAG(IS_LINUX)
+    BUILDFLAG(IS_WIN) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
              base::FEATURE_ENABLED_BY_DEFAULT
 #else
              base::FEATURE_DISABLED_BY_DEFAULT
@@ -532,7 +532,12 @@ BASE_FEATURE(kSpdyHeadersToHttpResponseU
              "SpdyHeadersToHttpResponseUseBuilder",
              base::FEATURE_DISABLED_BY_DEFAULT);
 
+#if BUILDFLAG(IS_OPENBSD)
+// No IP_RECVTOS support
 BASE_FEATURE(kReceiveEcn, "ReceiveEcn", base::FEATURE_DISABLED_BY_DEFAULT);
+#else
+BASE_FEATURE(kReceiveEcn, "ReceiveEcn", base::FEATURE_DISABLED_BY_DEFAULT);
+#endif
 
 BASE_FEATURE(kUseNewAlpsCodepointHttp2,
              "UseNewAlpsCodepointHttp2",
