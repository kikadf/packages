$NetBSD$

* Part of patchset to build on NetBSD

--- net/dns/address_sorter_posix.cc.orig	2024-03-06 00:14:56.583335200 +0000
+++ net/dns/address_sorter_posix.cc
@@ -27,6 +27,7 @@
 #include "net/dns/netinet_in_var_ios.h"
 #else
 #include <netinet/in_var.h>
+#include <netinet6/in6_var.h>
 #endif  // BUILDFLAG(IS_IOS)
 #endif
 