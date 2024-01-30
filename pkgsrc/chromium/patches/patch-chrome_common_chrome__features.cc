$NetBSD$

--- chrome/common/chrome_features.cc.orig	2020-07-08 21:41:47.000000000 +0000
+++ chrome/common/chrome_features.cc
@@ -70,7 +70,7 @@ const base::Feature kAsyncDns {
 #endif
 };
 
-#if defined(OS_WIN) || defined(OS_LINUX)
+#if defined(OS_WIN) || defined(OS_LINUX) || defined(OS_BSD)
 // Enables the Restart background mode optimization. When all Chrome UI is
 // closed and it goes in the background, allows to restart the browser to
 // discard memory.
