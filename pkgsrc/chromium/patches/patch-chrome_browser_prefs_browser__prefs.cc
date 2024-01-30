$NetBSD$

--- chrome/browser/prefs/browser_prefs.cc.orig	2020-07-08 21:41:47.000000000 +0000
+++ chrome/browser/prefs/browser_prefs.cc
@@ -385,7 +385,7 @@
 #endif
 
 #if defined(OS_WIN) || defined(OS_MACOSX) || \
-    (defined(OS_LINUX) && !defined(OS_CHROMEOS))
+    ((defined(OS_LINUX) || defined(OS_BSD)) && !defined(OS_CHROMEOS))
 #include "chrome/browser/browser_switcher/browser_switcher_prefs.h"
 #endif
 
@@ -1100,7 +1100,7 @@ void RegisterProfilePrefs(user_prefs::Pr
 #endif
 
 #if defined(OS_WIN) || defined(OS_MACOSX) || \
-    (defined(OS_LINUX) && !defined(OS_CHROMEOS))
+    ((defined(OS_LINUX) || defined(OS_BSD)) && !defined(OS_CHROMEOS))
   browser_switcher::BrowserSwitcherPrefs::RegisterProfilePrefs(registry);
 #endif
 
