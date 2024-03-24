$NetBSD$

* Part of patchset to build on NetBSD

--- net/base/network_interfaces_posix.h.orig	2024-03-19 22:14:50.463613000 +0000
+++ net/base/network_interfaces_posix.h
@@ -8,6 +8,8 @@
 // This file provides some basic functionality shared between
 // network_interfaces_linux.cc and network_interfaces_getifaddrs.cc.
 
+#include <sys/socket.h>
+
 #include <string>
 
 struct sockaddr;
