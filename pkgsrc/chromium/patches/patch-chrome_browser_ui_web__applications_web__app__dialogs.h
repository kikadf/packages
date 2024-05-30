$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- chrome/browser/ui/web_applications/web_app_dialogs.h.orig	2024-05-21 22:42:54.168813500 +0000
+++ chrome/browser/ui/web_applications/web_app_dialogs.h
@@ -22,7 +22,7 @@
 #include "ui/gfx/native_widget_types.h"
 
 static_assert(BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) ||
-              BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_FUCHSIA));
+              BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_FUCHSIA) || BUILDFLAG(IS_BSD));
 
 class GURL;
 class Profile;
