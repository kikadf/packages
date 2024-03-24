$NetBSD$

* Part of patchset to build on NetBSD

--- chrome/browser/safe_browsing/incident_reporting/incident_reporting_service.cc.orig	2024-03-19 22:14:33.014056200 +0000
+++ chrome/browser/safe_browsing/incident_reporting/incident_reporting_service.cc
@@ -694,7 +694,7 @@ void IncidentReportingService::OnEnviron
 
 // Process::Current().CreationTime() is missing on some platforms.
 #if BUILDFLAG(IS_MAC) || BUILDFLAG(IS_WIN) || BUILDFLAG(IS_LINUX) || \
-    BUILDFLAG(IS_CHROMEOS)
+    BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
   base::TimeDelta uptime =
       first_incident_time_ - base::Process::Current().CreationTime();
   environment_data->mutable_process()->set_uptime_msec(uptime.InMilliseconds());
