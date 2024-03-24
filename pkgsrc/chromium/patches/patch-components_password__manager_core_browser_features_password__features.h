$NetBSD$

* Part of patchset to build on NetBSD

--- components/password_manager/core/browser/features/password_features.h.orig	2024-03-19 22:14:39.382624400 +0000
+++ components/password_manager/core/browser/features/password_features.h
@@ -95,7 +95,7 @@ BASE_DECLARE_FEATURE(kPasswordManagerEna
 // terminal.
 BASE_DECLARE_FEATURE(kPasswordManagerLogToTerminal);
 
-#if BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 // Enables "Needs access to keychain, restart chrome" bubble and banner.
 BASE_DECLARE_FEATURE(kRestartToGainAccessToKeychain);
 #endif  // BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX)
