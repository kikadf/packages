$NetBSD$

* Part of patchset to build on NetBSD

--- chrome/browser/background/background_mode_optimizer.cc.orig	2024-03-19 22:14:30.785857400 +0000
+++ chrome/browser/background/background_mode_optimizer.cc
@@ -31,7 +31,7 @@ std::unique_ptr<BackgroundModeOptimizer>
     return nullptr;
   }
 
-#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
   if (base::FeatureList::IsEnabled(features::kBackgroundModeAllowRestart)) {
     // Private ctor.
     return base::WrapUnique(new BackgroundModeOptimizer());
