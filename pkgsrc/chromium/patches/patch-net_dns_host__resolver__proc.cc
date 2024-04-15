$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- net/dns/host_resolver_proc.cc.orig	2024-04-10 21:24:57.401656200 +0000
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
