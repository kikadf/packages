$NetBSD$

--- components/viz/common/features.cc.orig	2020-07-08 21:41:48.000000000 +0000
+++ components/viz/common/features.cc
@@ -20,7 +20,7 @@ const base::Feature kUseSkiaForGLReadbac
                                           base::FEATURE_ENABLED_BY_DEFAULT};
 
 // Use the SkiaRenderer.
-#if defined(OS_LINUX) && !(defined(OS_CHROMEOS) || BUILDFLAG(IS_CHROMECAST))
+#if (defined(OS_LINUX) || defined(OS_BSD)) && !(defined(OS_CHROMEOS) || BUILDFLAG(IS_CHROMECAST))
 const base::Feature kUseSkiaRenderer{"UseSkiaRenderer",
                                      base::FEATURE_ENABLED_BY_DEFAULT};
 #else
