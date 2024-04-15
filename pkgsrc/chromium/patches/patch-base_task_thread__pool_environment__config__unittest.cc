$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- base/task/thread_pool/environment_config_unittest.cc.orig	2024-04-10 21:24:37.280052700 +0000
+++ base/task/thread_pool/environment_config_unittest.cc
@@ -15,7 +15,7 @@ TEST(ThreadPoolEnvironmentConfig, CanUse
 #if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_APPLE)
   EXPECT_TRUE(CanUseBackgroundThreadTypeForWorkerThread());
 #elif BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_ANDROID) || BUILDFLAG(IS_FUCHSIA) || \
-    BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_NACL)
+    BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_NACL) || BUILDFLAG(IS_BSD)
   EXPECT_FALSE(CanUseBackgroundThreadTypeForWorkerThread());
 #else
 #error Platform doesn't match any block
