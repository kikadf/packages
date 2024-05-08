$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- chrome/test/chromedriver/chrome_launcher.cc.orig	2024-04-30 23:46:49.106959300 +0000
+++ chrome/test/chromedriver/chrome_launcher.cc
@@ -73,6 +73,7 @@
 #include <fcntl.h>
 #include <sys/stat.h>
 #include <sys/types.h>
+#include <sys/wait.h>
 #include <unistd.h>
 #elif BUILDFLAG(IS_WIN)
 #include <windows.h>
