$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- net/dns/dns_util.cc.orig	2024-04-10 21:24:57.393655500 +0000
+++ net/dns/dns_util.cc
@@ -29,6 +29,8 @@
 #include "net/dns/public/util.h"
 #include "net/third_party/uri_template/uri_template.h"
 
+#include <sys/socket.h>
+
 #if BUILDFLAG(IS_POSIX)
 #include <net/if.h>
 #include <netinet/in.h>
