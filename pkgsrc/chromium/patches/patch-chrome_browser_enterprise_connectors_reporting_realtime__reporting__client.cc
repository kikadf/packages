$NetBSD$

* Part of patchset to build on NetBSD

--- chrome/browser/enterprise/connectors/reporting/realtime_reporting_client.cc.orig	2024-03-06 00:14:40.865970600 +0000
+++ chrome/browser/enterprise/connectors/reporting/realtime_reporting_client.cc
@@ -58,7 +58,7 @@
 #include "base/strings/utf_string_conversions.h"
 #endif
 
-#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 #include "chrome/browser/enterprise/signals/signals_aggregator_factory.h"
 #include "components/device_signals/core/browser/signals_aggregator.h"
 #include "components/device_signals/core/common/signals_constants.h"
@@ -132,7 +132,7 @@ void UploadSecurityEventReport(base::Val
       std::move(upload_callback));
 }
 
-#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 void PopulateSignals(base::Value::Dict event,
                      policy::CloudPolicyClient* client,
                      std::string name,
@@ -427,7 +427,7 @@ void RealtimeReportingClient::ReportPast
                            /*include_profile_user_name=*/false);
 }
 
-#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 
 void AddCrowdstrikeSignalsToEvent(
     base::Value::Dict& event,
@@ -486,7 +486,7 @@ void RealtimeReportingClient::ReportEven
   if (include_profile_user_name) {
     event.Set(kKeyProfileUserName, GetProfileUserName());
   }
-#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   Profile* profile = Profile::FromBrowserContext(context_);
   device_signals::SignalsAggregator* signals_aggregator =
       enterprise_signals::SignalsAggregatorFactory::GetForProfile(profile);