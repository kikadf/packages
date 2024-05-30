$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- net/dns/address_sorter_posix.cc.orig	2024-05-21 22:43:06.193886000 +0000
+++ net/dns/address_sorter_posix.cc
@@ -27,6 +27,7 @@
 #include "net/dns/netinet_in_var_ios.h"
 #else
 #include <netinet/in_var.h>
+#include <netinet6/in6_var.h>
 #endif  // BUILDFLAG(IS_IOS)
 #endif
 #include <vector>
