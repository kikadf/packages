$NetBSD$

--- ipc/ipc_channel_common.cc.orig	2020-07-08 21:40:45.000000000 +0000
+++ ipc/ipc_channel_common.cc
@@ -10,7 +10,7 @@
 
 namespace IPC {
 
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
 
 namespace {
 int g_global_pid = 0;
