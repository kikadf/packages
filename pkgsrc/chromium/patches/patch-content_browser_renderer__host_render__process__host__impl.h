$NetBSD$

* Part of patchset to build on NetBSD

--- content/browser/renderer_host/render_process_host_impl.h.orig	2024-03-19 22:14:43.014948400 +0000
+++ content/browser/renderer_host/render_process_host_impl.h
@@ -548,7 +548,7 @@ class CONTENT_EXPORT RenderProcessHostIm
   // Sets this RenderProcessHost to be guest only. For Testing only.
   void SetForGuestsOnlyForTesting();
 
-#if BUILDFLAG(IS_POSIX) && !BUILDFLAG(IS_ANDROID) && !BUILDFLAG(IS_MAC)
+#if BUILDFLAG(IS_POSIX) && !BUILDFLAG(IS_ANDROID) && !BUILDFLAG(IS_MAC) && !BUILDFLAG(IS_BSD)
   // Launch the zygote early in the browser startup.
   static void EarlyZygoteLaunch();
 #endif  // BUILDFLAG(IS_POSIX) && !BUILDFLAG(IS_ANDROID) && !BUILDFLAG(IS_MAC)
