$NetBSD$

* Part of patchset to build on NetBSD

--- net/base/sockaddr_util_posix_unittest.cc.orig	2024-03-06 00:14:56.339314000 +0000
+++ net/base/sockaddr_util_posix_unittest.cc
@@ -83,7 +83,8 @@ TEST(FillUnixAddressTest, AbstractLinuxA
   size_t path_max = MaxPathLength(&storage);
   std::string path(path_max, '0');
 
-#if BUILDFLAG(IS_ANDROID) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_ANDROID) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
+  // XXX?
   EXPECT_TRUE(FillUnixAddress(path, /*use_abstract_namespace=*/true, &storage));
 
   EXPECT_EQ(path.size() + 1U + offsetof(struct sockaddr_un, sun_path),