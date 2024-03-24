$NetBSD$

* Part of patchset to build on NetBSD

--- chrome/browser/ui/views/chrome_browser_main_extra_parts_views.cc.orig	2024-03-19 22:14:34.106153700 +0000
+++ chrome/browser/ui/views/chrome_browser_main_extra_parts_views.cc
@@ -38,7 +38,7 @@
 #include "ui/wm/core/wm_state.h"
 #endif  // defined(USE_AURA)
 
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 #include <sys/stat.h>
 #include <sys/types.h>
 #include <unistd.h>
@@ -131,7 +131,7 @@ void ChromeBrowserMainExtraPartsViews::P
         return controller;
       }));
 
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   // On the Linux desktop, we want to prevent the user from logging in as root,
   // so that we don't destroy the profile. Now that we have some minimal ui
   // initialized, check to see if we're running as root and bail if we are.
