$NetBSD$

* Part of patchset to build on NetBSD

--- chrome/test/chromedriver/chrome_launcher.cc.orig	2024-03-19 22:14:35.094241900 +0000
+++ chrome/test/chromedriver/chrome_launcher.cc
@@ -73,6 +73,7 @@
 #include <fcntl.h>
 #include <sys/stat.h>
 #include <sys/types.h>
+#include <sys/wait.h>
 #include <unistd.h>
 #elif BUILDFLAG(IS_WIN)
 #include <windows.h>
