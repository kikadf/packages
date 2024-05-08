$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- net/dns/host_resolver_proc.cc.orig	2024-04-30 23:47:00.628203400 +0000
+++ net/dns/host_resolver_proc.cc
@@ -15,10 +15,6 @@
 #include "net/base/net_errors.h"
 #include "net/dns/host_resolver_system_task.h"
 
-#if BUILDFLAG(IS_OPENBSD)
-#define AI_ADDRCONFIG 0
-#endif
-
 namespace net {
 
 HostResolverProc* HostResolverProc::default_proc_ = nullptr;
