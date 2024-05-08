$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- base/posix/unix_domain_socket_unittest.cc.orig	2024-04-30 23:46:40.946078300 +0000
+++ base/posix/unix_domain_socket_unittest.cc
@@ -10,6 +10,8 @@
 #include <sys/types.h>
 #include <unistd.h>
 
+#include <signal.h>
+
 #include "base/files/file_util.h"
 #include "base/files/scoped_file.h"
 #include "base/functional/bind.h"
