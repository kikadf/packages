$NetBSD$

* Part of patchset to build on NetBSD

--- net/dns/public/resolv_reader.h.orig	2024-03-19 22:14:50.787641800 +0000
+++ net/dns/public/resolv_reader.h
@@ -5,6 +5,7 @@
 #ifndef NET_DNS_PUBLIC_RESOLV_READER_H_
 #define NET_DNS_PUBLIC_RESOLV_READER_H_
 
+#include <netinet/in.h>
 #include <resolv.h>
 
 #include <memory>
