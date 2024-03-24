$NetBSD$

* Part of patchset to build on NetBSD

--- chrome/browser/ui/views/tabs/tab.cc.orig	2024-03-19 22:14:34.322172900 +0000
+++ chrome/browser/ui/views/tabs/tab.cc
@@ -618,7 +618,7 @@ void Tab::MaybeUpdateHoverStatus(const u
     return;
   }
 
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
   // Move the hit test area for hovering up so that it is not overlapped by tab
   // hover cards when they are shown.
   // TODO(crbug.com/978134): Once Linux/CrOS widget transparency is solved,
