$NetBSD$

* Part of patchset to build on NetBSD

--- chrome/browser/metrics/power/process_monitor.cc.orig	2024-03-19 22:14:31.605930600 +0000
+++ chrome/browser/metrics/power/process_monitor.cc
@@ -65,7 +65,7 @@ ProcessMonitor::Metrics SampleMetrics(ba
 #endif
 
 #if BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || \
-    BUILDFLAG(IS_AIX)
+    BUILDFLAG(IS_AIX) || BUILDFLAG(IS_BSD)
   metrics.idle_wakeups = process_metrics.GetIdleWakeupsPerSecond();
 #endif
 #if BUILDFLAG(IS_MAC)
@@ -81,7 +81,7 @@ void ScaleMetrics(ProcessMonitor::Metric
   metrics->cpu_usage *= factor;
 
 #if BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || \
-    BUILDFLAG(IS_AIX)
+    BUILDFLAG(IS_AIX) || BUILDFLAG(IS_BSD)
   metrics->idle_wakeups *= factor;
 #endif
 
@@ -172,7 +172,7 @@ ProcessMonitor::Metrics& operator+=(Proc
   lhs.cpu_usage += rhs.cpu_usage;
 
 #if BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || \
-    BUILDFLAG(IS_AIX)
+    BUILDFLAG(IS_AIX) || BUILDFLAG(IS_BSD)
   lhs.idle_wakeups += rhs.idle_wakeups;
 #endif
 
