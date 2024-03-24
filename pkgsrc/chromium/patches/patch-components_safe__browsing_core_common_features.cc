$NetBSD$

* Part of patchset to build on NetBSD

--- components/safe_browsing/core/common/features.cc.orig	2024-03-19 22:14:40.426717500 +0000
+++ components/safe_browsing/core/common/features.cc
@@ -240,7 +240,7 @@ BASE_FEATURE(kSafeBrowsingSkipSubresourc
 BASE_FEATURE(kSafeBrowsingSkipSubresources2,
              "SafeBrowsingSkipSubResources2",
 #if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || \
-    BUILDFLAG(IS_CHROMEOS_LACROS) || BUILDFLAG(IS_ANDROID)
+    BUILDFLAG(IS_CHROMEOS_LACROS) || BUILDFLAG(IS_ANDROID) || BUILDFLAG(IS_BSD)
              base::FEATURE_ENABLED_BY_DEFAULT
 #else
              base::FEATURE_DISABLED_BY_DEFAULT
