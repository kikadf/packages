$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- base/posix/sysctl.cc.orig	2024-04-10 21:24:37.216047500 +0000
+++ base/posix/sysctl.cc
@@ -4,6 +4,7 @@
 
 #include "base/posix/sysctl.h"
 
+#include <sys/types.h>
 #include <sys/sysctl.h>
 
 #include <initializer_list>
