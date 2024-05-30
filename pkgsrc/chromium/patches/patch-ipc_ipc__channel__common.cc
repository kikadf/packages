$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- ipc/ipc_channel_common.cc.orig	2024-05-21 22:43:04.737756000 +0000
+++ ipc/ipc_channel_common.cc
@@ -10,7 +10,7 @@
 
 namespace IPC {
 
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
 
 namespace {
 int g_global_pid = 0;
