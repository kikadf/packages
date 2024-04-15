$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- chrome/browser/headless/headless_mode_util.cc.orig	2024-04-10 21:24:41.752409000 +0000
+++ chrome/browser/headless/headless_mode_util.cc
@@ -19,7 +19,7 @@
 #include "chrome/common/chrome_switches.h"
 #include "content/public/common/content_switches.h"
 
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 #include "ui/gl/gl_switches.h"               // nogncheck
 #include "ui/ozone/public/ozone_switches.h"  // nogncheck
 #endif  // BUILDFLAG(IS_LINUX)
@@ -87,7 +87,7 @@ class HeadlessModeHandleImpl : public He
       command_line->AppendSwitchPath(switches::kUserDataDir, GetUserDataDir());
     }
 
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   // Headless mode on Linux relies on ozone/headless platform.
   command_line->AppendSwitchASCII(::switches::kOzonePlatform,
                                   switches::kHeadless);
