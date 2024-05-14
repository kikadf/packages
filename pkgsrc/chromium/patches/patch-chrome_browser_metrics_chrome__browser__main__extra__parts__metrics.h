$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- chrome/browser/metrics/chrome_browser_main_extra_parts_metrics.h.orig	2024-05-09 21:46:36.349900200 +0000
+++ chrome/browser/metrics/chrome_browser_main_extra_parts_metrics.h
@@ -28,7 +28,7 @@ class PowerMetricsReporter;
 class ProcessMonitor;
 #endif
 
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 class PressureMetricsReporter;
 #endif  // BUILDFLAG(IS_LINUX)
 
@@ -115,7 +115,7 @@ class ChromeBrowserMainExtraPartsMetrics
   std::unique_ptr<BatteryDischargeReporter> battery_discharge_reporter_;
 #endif  // !BUILDFLAG(IS_ANDROID)
 
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   // Reports pressure metrics.
   std::unique_ptr<PressureMetricsReporter> pressure_metrics_reporter_;
 #endif  // BUILDFLAG(IS_LINUX)
