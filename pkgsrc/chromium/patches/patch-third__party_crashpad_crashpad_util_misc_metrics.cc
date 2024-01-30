$NetBSD$

--- third_party/crashpad/crashpad/util/misc/metrics.cc.orig	2020-07-15 18:56:30.000000000 +0000
+++ third_party/crashpad/crashpad/util/misc/metrics.cc
@@ -25,7 +25,7 @@
 #define METRICS_OS_NAME "Win"
 #elif defined(OS_ANDROID)
 #define METRICS_OS_NAME "Android"
-#elif defined(OS_LINUX)
+#elif defined(OS_LINUX) || defined(OS_BSD)
 #define METRICS_OS_NAME "Linux"
 #elif defined(OS_FUCHSIA)
 #define METRICS_OS_NAME "Fuchsia"
