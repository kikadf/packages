$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- components/sync/base/features.cc.orig	2024-05-09 21:46:48.726717500 +0000
+++ components/sync/base/features.cc
@@ -126,7 +126,7 @@ BASE_FEATURE(kEnablePreferencesAccountSt
 BASE_FEATURE(kSyncPollImmediatelyOnEveryStartup,
              "SyncPollImmediatelyOnEveryStartup2",
 #if BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_MAC) || \
-    BUILDFLAG(IS_WIN)
+    BUILDFLAG(IS_WIN) || BUILDFLAG(IS_BSD)
              base::FEATURE_ENABLED_BY_DEFAULT
 #else
              base::FEATURE_DISABLED_BY_DEFAULT
