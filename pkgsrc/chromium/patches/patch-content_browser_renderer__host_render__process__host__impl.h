$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- content/browser/renderer_host/render_process_host_impl.h.orig	2024-05-21 22:43:01.157436800 +0000
+++ content/browser/renderer_host/render_process_host_impl.h
@@ -592,7 +592,7 @@ class CONTENT_EXPORT RenderProcessHostIm
   // Sets this RenderProcessHost to be guest only. For Testing only.
   void SetForGuestsOnlyForTesting();
 
-#if BUILDFLAG(IS_POSIX) && !BUILDFLAG(IS_ANDROID) && !BUILDFLAG(IS_MAC)
+#if BUILDFLAG(IS_POSIX) && !BUILDFLAG(IS_ANDROID) && !BUILDFLAG(IS_MAC) && !BUILDFLAG(IS_BSD)
   // Launch the zygote early in the browser startup.
   static void EarlyZygoteLaunch();
 #endif  // BUILDFLAG(IS_POSIX) && !BUILDFLAG(IS_ANDROID) && !BUILDFLAG(IS_MAC)
