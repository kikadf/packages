$NetBSD$

* Part of patchset to build on NetBSD

--- net/dns/address_sorter_posix.cc.orig	2024-03-19 22:14:50.759639300 +0000
+++ net/dns/address_sorter_posix.cc
@@ -27,6 +27,7 @@
 #include "net/dns/netinet_in_var_ios.h"
 #else
 #include <netinet/in_var.h>
+#include <netinet6/in6_var.h>
 #endif  // BUILDFLAG(IS_IOS)
 #endif
 
