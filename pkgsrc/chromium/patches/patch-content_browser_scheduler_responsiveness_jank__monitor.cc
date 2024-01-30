$NetBSD$

--- content/browser/scheduler/responsiveness/jank_monitor.cc.orig	2020-07-08 21:40:42.000000000 +0000
+++ content/browser/scheduler/responsiveness/jank_monitor.cc
@@ -322,7 +322,7 @@ void JankMonitor::ThreadExecutionState::
     // in context menus, among others). Simply ignore the mismatches for now.
     // See https://crbug.com/929813 for the details of why the mismatch
     // happens.
-#if !defined(OS_CHROMEOS) && defined(OS_LINUX) && defined(USE_OZONE)
+#if !defined(OS_CHROMEOS) && (defined(OS_LINUX) || defined(OS_BSD)) && defined(USE_OZONE)
     task_execution_metadata_.clear();
 #endif
     return;
