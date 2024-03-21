$NetBSD$

* Part of patchset to build on NetBSD

--- chrome/browser/enterprise/connectors/reporting/crash_reporting_context.cc.orig	2024-03-06 00:14:40.865970600 +0000
+++ chrome/browser/enterprise/connectors/reporting/crash_reporting_context.cc
@@ -18,7 +18,7 @@
 
 namespace enterprise_connectors {
 
-#if !BUILDFLAG(IS_FUCHSIA) && !BUILDFLAG(IS_CHROMEOS_ASH)
+#if !BUILDFLAG(IS_FUCHSIA) && !BUILDFLAG(IS_CHROMEOS_ASH) && !BUILDFLAG(IS_BSD)
 
 namespace {
 
