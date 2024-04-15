$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- chrome/browser/enterprise/connectors/reporting/crash_reporting_context.cc.orig	2024-04-10 21:24:41.420382700 +0000
+++ chrome/browser/enterprise/connectors/reporting/crash_reporting_context.cc
@@ -18,7 +18,7 @@
 
 namespace enterprise_connectors {
 
-#if !BUILDFLAG(IS_FUCHSIA) && !BUILDFLAG(IS_CHROMEOS)
+#if !BUILDFLAG(IS_FUCHSIA) && !BUILDFLAG(IS_CHROMEOS) && !BUILDFLAG(IS_BSD)
 
 namespace {
 
