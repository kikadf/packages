$NetBSD$

* Part of patchset to build on NetBSD

--- chrome/browser/enterprise/connectors/connectors_service.cc.orig	2024-03-19 22:14:31.065882400 +0000
+++ chrome/browser/enterprise/connectors/connectors_service.cc
@@ -542,7 +542,7 @@ bool ConnectorsService::ConnectorsEnable
 
   Profile* profile = Profile::FromBrowserContext(context_);
 
-#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   // On desktop, the guest profile is actually the primary OTR profile of
   // the "regular" guest profile.  The regular guest profile is never used
   // directly by users.  Also, user are not able to create child OTR profiles
