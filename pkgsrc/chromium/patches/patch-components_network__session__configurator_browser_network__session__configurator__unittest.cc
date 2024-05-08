$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- components/network_session_configurator/browser/network_session_configurator_unittest.cc.orig	2024-04-30 23:46:52.623339200 +0000
+++ components/network_session_configurator/browser/network_session_configurator_unittest.cc
@@ -781,7 +781,7 @@ TEST_F(NetworkSessionConfiguratorTest, H
 
 TEST_F(NetworkSessionConfiguratorTest, DefaultCacheBackend) {
 #if BUILDFLAG(IS_ANDROID) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || \
-    BUILDFLAG(IS_MAC)
+    BUILDFLAG(IS_MAC) || BUILDFLAG(IS_BSD)
   EXPECT_EQ(net::URLRequestContextBuilder::HttpCacheParams::DISK_SIMPLE,
             ChooseCacheType());
 #else
