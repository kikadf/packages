$NetBSD$

* Part of patchset to build on NetBSD

--- net/dns/public/scoped_res_state.h.orig	2024-03-06 00:14:56.607337200 +0000
+++ net/dns/public/scoped_res_state.h
@@ -5,6 +5,7 @@
 #ifndef NET_DNS_PUBLIC_SCOPED_RES_STATE_H_
 #define NET_DNS_PUBLIC_SCOPED_RES_STATE_H_
 
+#include <netinet/in.h>
 #include <resolv.h>
 
 #include <optional>
