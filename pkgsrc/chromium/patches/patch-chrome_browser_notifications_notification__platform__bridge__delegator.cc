$NetBSD$

* Part of patchset to build on NetBSD

--- chrome/browser/notifications/notification_platform_bridge_delegator.cc.orig	2024-03-19 22:14:31.709940000 +0000
+++ chrome/browser/notifications/notification_platform_bridge_delegator.cc
@@ -57,7 +57,7 @@ bool SystemNotificationsEnabled(Profile*
 #elif BUILDFLAG(IS_WIN)
   return NotificationPlatformBridgeWin::SystemNotificationEnabled();
 #else
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   if (profile) {
     // Prefs take precedence over flags.
     PrefService* prefs = profile->GetPrefs();
