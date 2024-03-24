$NetBSD$

* Part of patchset to build on NetBSD

--- base/posix/unix_domain_socket_unittest.cc.orig	2024-03-19 22:14:27.145532600 +0000
+++ base/posix/unix_domain_socket_unittest.cc
@@ -10,6 +10,8 @@
 #include <sys/types.h>
 #include <unistd.h>
 
+#include <signal.h>
+
 #include "base/files/file_util.h"
 #include "base/files/scoped_file.h"
 #include "base/functional/bind.h"
