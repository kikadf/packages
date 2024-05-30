$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- components/signin/public/base/signin_switches.h.orig	2024-05-21 22:42:59.377278000 +0000
+++ components/signin/public/base/signin_switches.h
@@ -130,7 +130,7 @@ bool IsExplicitBrowserSigninUIOnDesktopE
 
 // Controls the view mode for (history) sync screen.
 #if BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_WIN) || \
-    BUILDFLAG(IS_ANDROID) || BUILDFLAG(IS_IOS)
+    BUILDFLAG(IS_ANDROID) || BUILDFLAG(IS_IOS) || BUILDFLAG(IS_BSD)
 COMPONENT_EXPORT(SIGNIN_SWITCHES)
 BASE_DECLARE_FEATURE(kMinorModeRestrictionsForHistorySyncOptIn);
 
