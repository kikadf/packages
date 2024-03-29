$NetBSD$

* Part of patchset to build on NetBSD

--- chrome/browser/metrics/power/process_monitor.h.orig	2024-03-19 22:14:31.605930600 +0000
+++ chrome/browser/metrics/power/process_monitor.h
@@ -75,7 +75,7 @@ class ProcessMonitor : public content::B
     double cpu_usage = 0.0;
 
 #if BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || \
-    BUILDFLAG(IS_AIX)
+    BUILDFLAG(IS_AIX) || BUILDFLAG(IS_BSD)
     // Returns the number of average idle cpu wakeups per second since the last
     // time the metric was sampled.
     int idle_wakeups = 0;
