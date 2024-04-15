$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- chrome/browser/safe_browsing/incident_reporting/incident_reporting_service.cc.orig	2024-04-10 21:24:43.076514700 +0000
+++ chrome/browser/safe_browsing/incident_reporting/incident_reporting_service.cc
@@ -694,7 +694,7 @@ void IncidentReportingService::OnEnviron
 
 // Process::Current().CreationTime() is missing on some platforms.
 #if BUILDFLAG(IS_MAC) || BUILDFLAG(IS_WIN) || BUILDFLAG(IS_LINUX) || \
-    BUILDFLAG(IS_CHROMEOS)
+    BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
   base::TimeDelta uptime =
       first_incident_time_ - base::Process::Current().CreationTime();
   environment_data->mutable_process()->set_uptime_msec(uptime.InMilliseconds());
