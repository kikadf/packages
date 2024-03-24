$NetBSD$

* Part of patchset to build on NetBSD

--- components/sync/base/features.cc.orig	2024-03-19 22:14:41.122779600 +0000
+++ components/sync/base/features.cc
@@ -122,7 +122,7 @@ BASE_FEATURE(kEnablePreferencesAccountSt
 BASE_FEATURE(kSyncPollImmediatelyOnEveryStartup,
              "SyncPollImmediatelyOnEveryStartup2",
 #if BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_MAC) || \
-    BUILDFLAG(IS_WIN)
+    BUILDFLAG(IS_WIN) || BUILDFLAG(IS_BSD)
              base::FEATURE_ENABLED_BY_DEFAULT
 #else
              base::FEATURE_DISABLED_BY_DEFAULT
