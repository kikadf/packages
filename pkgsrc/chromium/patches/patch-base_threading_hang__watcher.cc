$NetBSD$

* Part of patchset to build on NetBSD

--- base/threading/hang_watcher.cc.orig	2024-03-19 22:14:27.277544500 +0000
+++ base/threading/hang_watcher.cc
@@ -332,7 +332,7 @@ void HangWatcher::InitializeOnMainThread
 
   bool enable_hang_watcher = base::FeatureList::IsEnabled(kEnableHangWatcher);
 
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if (BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)) && !BUILDFLAG(IS_BSD)
   if (is_zygote_child) {
     enable_hang_watcher =
         enable_hang_watcher &&
