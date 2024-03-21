$NetBSD$

* Part of patchset to build on NetBSD

--- base/posix/sysctl.cc.orig	2024-03-06 00:14:37.013636400 +0000
+++ base/posix/sysctl.cc
@@ -4,6 +4,7 @@
 
 #include "base/posix/sysctl.h"
 
+#include <sys/types.h>
 #include <sys/sysctl.h>
 
 #include <initializer_list>
