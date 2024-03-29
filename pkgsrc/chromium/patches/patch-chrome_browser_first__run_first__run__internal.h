$NetBSD$

* Part of patchset to build on NetBSD

--- chrome/browser/first_run/first_run_internal.h.orig	2024-03-19 22:14:31.385911000 +0000
+++ chrome/browser/first_run/first_run_internal.h
@@ -54,7 +54,7 @@ FirstRunState DetermineFirstRunState(boo
                                      bool force_first_run,
                                      bool no_first_run);
 
-#if BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 // For testing, forces the first run dialog to either be shown or not. If not
 // called, the decision to show the dialog or not will be made by Chrome based
 // on a number of factors (such as install type, whether it's a Chrome-branded
