$NetBSD$

* Part of patchset to build on NetBSD

--- chrome/browser/headless/headless_mode_util.cc.orig	2024-03-06 00:14:41.181998000 +0000
+++ chrome/browser/headless/headless_mode_util.cc
@@ -18,7 +18,7 @@
 #include "chrome/common/chrome_switches.h"
 #include "content/public/common/content_switches.h"
 
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 #include "ui/gl/gl_switches.h"               // nogncheck
 #include "ui/ozone/public/ozone_switches.h"  // nogncheck
 #endif  // BUILDFLAG(IS_LINUX)
@@ -86,7 +86,7 @@ class HeadlessModeHandleImpl : public He
       command_line->AppendSwitchPath(switches::kUserDataDir, GetUserDataDir());
     }
 
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   // Headless mode on Linux relies on ozone/headless platform.
   command_line->AppendSwitchASCII(::switches::kOzonePlatform,
                                   switches::kHeadless);