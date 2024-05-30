$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- chrome/browser/first_run/first_run_internal.h.orig	2024-05-21 22:42:51.448571000 +0000
+++ chrome/browser/first_run/first_run_internal.h
@@ -54,7 +54,7 @@ FirstRunState DetermineFirstRunState(boo
                                      bool force_first_run,
                                      bool no_first_run);
 
-#if BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 // For testing, forces the first run dialog to either be shown or not. If not
 // called, the decision to show the dialog or not will be made by Chrome based
 // on a number of factors (such as install type, whether it's a Chrome-branded
