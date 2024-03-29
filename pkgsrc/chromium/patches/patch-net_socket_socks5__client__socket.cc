$NetBSD$

* Part of patchset to build on NetBSD

--- net/socket/socks5_client_socket.cc.orig	2024-03-19 22:14:51.191677800 +0000
+++ net/socket/socks5_client_socket.cc
@@ -19,6 +19,9 @@
 #include "net/log/net_log_event_type.h"
 #include "net/traffic_annotation/network_traffic_annotation.h"
 
+#include <sys/types.h>
+#include <netinet/in.h>
+
 namespace net {
 
 const unsigned int SOCKS5ClientSocket::kGreetReadHeaderSize = 2;
