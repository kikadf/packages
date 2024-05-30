$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- components/cookie_config/cookie_store_util.cc.orig	2024-05-21 22:42:57.561116000 +0000
+++ components/cookie_config/cookie_store_util.cc
@@ -12,7 +12,7 @@
 namespace cookie_config {
 
 #if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || \
-    BUILDFLAG(IS_CHROMEOS)
+    BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
 namespace {
 
 // Use the operating system's mechanisms to encrypt cookies before writing
