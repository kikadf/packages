$NetBSD$

* Part of patchset to build on NetBSD

--- services/network/public/cpp/features.cc.orig	2024-03-19 22:14:52.067756000 +0000
+++ services/network/public/cpp/features.cc
@@ -98,7 +98,7 @@ BASE_FEATURE(kSplitAuthCacheByNetworkIso
 BASE_FEATURE(kDnsOverHttpsUpgrade,
              "DnsOverHttpsUpgrade",
 #if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_MAC) || \
-    BUILDFLAG(IS_ANDROID) || BUILDFLAG(IS_LINUX)
+    BUILDFLAG(IS_ANDROID) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
              base::FEATURE_ENABLED_BY_DEFAULT
 #else
              base::FEATURE_DISABLED_BY_DEFAULT
