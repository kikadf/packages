$NetBSD$

* Part of patchset to build on NetBSD

--- chrome/browser/ui/color/native_chrome_color_mixer.cc.orig	2024-03-19 22:14:33.894134800 +0000
+++ chrome/browser/ui/color/native_chrome_color_mixer.cc
@@ -7,7 +7,7 @@
 #include "build/build_config.h"
 
 #if !BUILDFLAG(IS_CHROMEOS) && !BUILDFLAG(IS_LINUX) && !BUILDFLAG(IS_MAC) && \
-    !BUILDFLAG(IS_WIN)
+    !BUILDFLAG(IS_WIN) && !BUILDFLAG(IS_BSD)
 void AddNativeChromeColorMixer(ui::ColorProvider* provider,
                                const ui::ColorProviderKey& key) {}
 #endif
