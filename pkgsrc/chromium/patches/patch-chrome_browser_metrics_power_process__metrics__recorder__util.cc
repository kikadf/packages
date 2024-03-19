$NetBSD$

--- chrome/browser/metrics/power/process_metrics_recorder_util.cc.orig	2024-03-06 00:14:41.366014000 +0000
+++ chrome/browser/metrics/power/process_metrics_recorder_util.cc
@@ -59,7 +59,7 @@ void RecordProcessHistograms(const char*
                              const ProcessMonitor::Metrics& metrics) {
   RecordAverageCPUUsage(histogram_suffix, metrics.cpu_usage);
 #if BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || \
-    BUILDFLAG(IS_AIX)
+    BUILDFLAG(IS_AIX) || BUILDFLAG(IS_BSD)
   base::UmaHistogramCounts10000(
       base::StrCat({"PerformanceMonitor.IdleWakeups2.", histogram_suffix}),
       metrics.idle_wakeups);
