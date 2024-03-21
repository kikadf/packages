$NetBSD$

* Part of patchset to build on NetBSD

--- components/network_session_configurator/browser/network_session_configurator_unittest.cc.orig	2024-03-06 00:14:47.674561700 +0000
+++ components/network_session_configurator/browser/network_session_configurator_unittest.cc
@@ -793,7 +793,7 @@ TEST_F(NetworkSessionConfiguratorTest, H
 
 TEST_F(NetworkSessionConfiguratorTest, DefaultCacheBackend) {
 #if BUILDFLAG(IS_ANDROID) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || \
-    BUILDFLAG(IS_MAC)
+    BUILDFLAG(IS_MAC) || BUILDFLAG(IS_BSD)
   EXPECT_EQ(net::URLRequestContextBuilder::HttpCacheParams::DISK_SIMPLE,
             ChooseCacheType());
 #else
