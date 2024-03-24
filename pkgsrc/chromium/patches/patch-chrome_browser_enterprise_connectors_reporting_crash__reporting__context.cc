$NetBSD$

* Part of patchset to build on NetBSD

--- chrome/browser/enterprise/connectors/reporting/crash_reporting_context.cc.orig	2024-03-19 22:14:31.089884500 +0000
+++ chrome/browser/enterprise/connectors/reporting/crash_reporting_context.cc
@@ -18,7 +18,7 @@
 
 namespace enterprise_connectors {
 
-#if !BUILDFLAG(IS_FUCHSIA) && !BUILDFLAG(IS_CHROMEOS)
+#if !BUILDFLAG(IS_FUCHSIA) && !BUILDFLAG(IS_CHROMEOS) && !BUILDFLAG(IS_BSD)
 
 namespace {
 
