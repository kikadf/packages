$NetBSD$

* Part of patchset to build on NetBSD

--- third_party/crashpad/crashpad/minidump/minidump_misc_info_writer.cc.orig	2024-03-06 00:15:14.944929100 +0000
+++ third_party/crashpad/crashpad/minidump/minidump_misc_info_writer.cc
@@ -159,6 +159,10 @@ std::string MinidumpMiscInfoDebugBuildSt
   static constexpr char kOS[] = "win";
 #elif BUILDFLAG(IS_FUCHSIA)
   static constexpr char kOS[] = "fuchsia";
+#elif defined(OS_OPENBSD)
+  static constexpr char kOS[] = "openbsd";
+#elif defined(OS_FREEBSD)
+  static constexpr char kOS[] = "freebsd";
 #else
 #error define kOS for this operating system
 #endif
