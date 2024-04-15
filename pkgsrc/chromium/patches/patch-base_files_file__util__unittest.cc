$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- base/files/file_util_unittest.cc.orig	2024-04-10 21:24:37.148042200 +0000
+++ base/files/file_util_unittest.cc
@@ -3869,7 +3869,7 @@ TEST_F(FileUtilTest, ReadFileToStringWit
 }
 #endif  // BUILDFLAG(IS_WIN)
 
-#if BUILDFLAG(IS_POSIX) && !BUILDFLAG(IS_APPLE)
+#if BUILDFLAG(IS_POSIX) && !BUILDFLAG(IS_APPLE) && !BUILDFLAG(IS_BSD)
 TEST_F(FileUtilTest, ReadFileToStringWithProcFileSystem) {
   FilePath file_path("/proc/cpuinfo");
   std::string data = "temp";
@@ -4592,7 +4592,7 @@ TEST(FileUtilMultiThreadedTest, MultiThr
                 NULL);
 #else
     size_t bytes_written =
-        ::write(::fileno(output_file.get()), content.c_str(), content.length());
+        ::write(fileno(output_file.get()), content.c_str(), content.length());
 #endif
     EXPECT_EQ(content.length(), bytes_written);
     ::fflush(output_file.get());
