$NetBSD$

* Part of patchset to build chromium on NetBSD
* Based on OpenBSD's chromium patches, and
  pkgsrc's qt5-qtwebengine patches

--- components/password_manager/core/browser/features/password_features.h.orig	2024-06-13 23:28:55.755759700 +0000
+++ components/password_manager/core/browser/features/password_features.h
@@ -82,7 +82,7 @@ BASE_DECLARE_FEATURE(kPasswordManagerLog
 // Enables triggering password suggestions through the context menu.
 BASE_DECLARE_FEATURE(kPasswordManualFallbackAvailable);
 
-#if BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 // Enables "Needs access to keychain, restart chrome" bubble and banner.
 BASE_DECLARE_FEATURE(kRestartToGainAccessToKeychain);
 #endif  // BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX)
