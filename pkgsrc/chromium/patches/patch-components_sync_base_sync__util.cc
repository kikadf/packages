$NetBSD$

* Part of patchset to build on NetBSD

--- components/sync/base/sync_util.cc.orig	2024-03-19 22:14:41.122779600 +0000
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
