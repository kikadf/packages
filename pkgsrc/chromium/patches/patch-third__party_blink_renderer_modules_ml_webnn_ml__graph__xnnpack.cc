$NetBSD$

* Part of patchset to build on NetBSD

--- third_party/blink/renderer/modules/ml/webnn/ml_graph_xnnpack.cc.orig	2024-03-06 00:15:00.127642900 +0000
+++ third_party/blink/renderer/modules/ml/webnn/ml_graph_xnnpack.cc
@@ -202,7 +202,7 @@ class SharedXnnpackContext : public Thre
 
   ~SharedXnnpackContext() {
     base::AutoLock auto_lock(SharedXnnpackContextLock());
-#if !(BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS))
+#if !(BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD))
     // For Linux and ChromeOS, cpuinfo needs to parse /proc/cpuinfo to
     // initialize in pre sandbox stage. Calling xnn_deinitialize() here will
     // deinitialize cpuinfo within sandbox and cannot access /proc/cpuinfo
