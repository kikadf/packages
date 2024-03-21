$NetBSD$

* Part of patchset to build on NetBSD

--- content/common/features.cc.orig	2024-03-06 00:14:51.182866300 +0000
+++ content/common/features.cc
@@ -166,7 +166,7 @@ BASE_FEATURE(kEnableBackForwardCacheForO
              base::FEATURE_DISABLED_BY_DEFAULT);
 
 // Enables error reporting for JS errors inside DevTools frontend host
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
 BASE_FEATURE(kEnableDevToolsJsErrorReporting,
              "EnableDevToolsJsErrorReporting",
              base::FEATURE_DISABLED_BY_DEFAULT);
@@ -254,7 +254,7 @@ BASE_FEATURE(kGroupNIKByJoiningOrigin,
 // process and having browser process handle adjusting thread properties (nice
 // value, c-group, latency sensitivity...) for children which have sandbox
 // restrictions.
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
 BASE_FEATURE(kHandleChildThreadTypeChangesInBrowser,
              "HandleChildThreadTypeChangesInBrowser",
              base::FEATURE_ENABLED_BY_DEFAULT);
