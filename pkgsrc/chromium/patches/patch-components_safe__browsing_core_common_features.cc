$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- components/safe_browsing/core/common/features.cc.orig	2024-05-21 22:42:59.209263000 +0000
+++ components/safe_browsing/core/common/features.cc
@@ -133,7 +133,7 @@ BASE_FEATURE(kFriendlierSafeBrowsingSett
 BASE_FEATURE(kHashPrefixRealTimeLookups,
              "SafeBrowsingHashPrefixRealTimeLookups",
 #if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || \
-    BUILDFLAG(IS_CHROMEOS)
+    BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
              base::FEATURE_ENABLED_BY_DEFAULT
 #else
              base::FEATURE_DISABLED_BY_DEFAULT
