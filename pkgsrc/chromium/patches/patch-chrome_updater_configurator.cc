$NetBSD$

* Part of patchset to build on NetBSD

--- chrome/updater/configurator.cc.orig	2024-03-19 22:14:36.786392700 +0000
+++ chrome/updater/configurator.cc
@@ -67,7 +67,7 @@ Configurator::Configurator(scoped_refptr
         return std::nullopt;
 #endif  // BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC)
       }()) {
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   // On Linux creating the NetworkFetcherFactory requires performing blocking IO
   // to load an external library. This should be done when the configurator is
   // created.
