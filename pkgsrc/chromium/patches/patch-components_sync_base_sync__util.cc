$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- components/sync/base/sync_util.cc.orig	2024-05-09 21:46:48.726717500 +0000
+++ components/sync/base/sync_util.cc
@@ -43,6 +43,8 @@ std::string GetSystemString() {
   system = "FREEBSD ";
 #elif BUILDFLAG(IS_OPENBSD)
   system = "OPENBSD ";
+#elif BUILDFLAG(IS_NETBSD)
+  system = "NETBSD ";
 #elif BUILDFLAG(IS_MAC)
   system = "MAC ";
 #endif
