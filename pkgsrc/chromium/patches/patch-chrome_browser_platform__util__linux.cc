$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- chrome/browser/platform_util_linux.cc.orig	2024-04-10 21:24:42.228447000 +0000
+++ chrome/browser/platform_util_linux.cc
@@ -300,7 +300,9 @@ void RunCommand(const std::string& comma
 
   base::LaunchOptions options;
   options.current_directory = working_directory;
+#if !BUILDFLAG(IS_BSD)
   options.allow_new_privs = true;
+#endif
   // xdg-open can fall back on mailcap which eventually might plumb through
   // to a command that needs a terminal.  Set the environment variable telling
   // it that we definitely don't have a terminal available and that it should
