$NetBSD$

* Part of patchset to build on NetBSD

--- chrome/browser/ui/views/hung_renderer_view.cc.orig	2024-03-06 00:14:43.514200700 +0000
+++ chrome/browser/ui/views/hung_renderer_view.cc
@@ -406,7 +406,7 @@ void HungRendererDialogView::ForceCrashH
   content::RenderProcessHost* rph =
       hung_pages_table_model_->GetRenderWidgetHost()->GetProcess();
   if (rph) {
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
     // A generic |CrashDumpHungChildProcess()| is not implemented for Linux.
     // Instead we send an explicit IPC to crash on the renderer's IO thread.
     rph->ForceCrash();