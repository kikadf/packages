$NetBSD$

* Part of patchset to build on NetBSD

--- components/password_manager/core/common/password_manager_pref_names.h.orig	2024-03-06 00:14:47.926583500 +0000
+++ components/password_manager/core/common/password_manager_pref_names.h
@@ -324,7 +324,7 @@ inline constexpr char kPasswordManagerPr
 inline constexpr char kPasswordSharingEnabled[] =
     "password_manager.password_sharing_enabled";
 
-#if BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 // Integer pref indicating how many times relaunch Chrome bubble was dismissed.
 inline constexpr char kRelaunchChromeBubbleDismissedCounter[] =
     "password_manager.relaunch_chrome_bubble_dismissed_counter";