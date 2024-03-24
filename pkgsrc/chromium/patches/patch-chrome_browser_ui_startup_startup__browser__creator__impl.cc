$NetBSD$

* Part of patchset to build on NetBSD

--- chrome/browser/ui/startup/startup_browser_creator_impl.cc.orig	2024-03-19 22:14:34.022146200 +0000
+++ chrome/browser/ui/startup/startup_browser_creator_impl.cc
@@ -261,7 +261,7 @@ Browser* StartupBrowserCreatorImpl::Open
     // at the state of the MessageLoop.
     Browser::CreateParams params = Browser::CreateParams(profile_, false);
     params.creation_source = Browser::CreationSource::kStartupCreator;
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
     params.startup_id =
         command_line_->GetSwitchValueASCII("desktop-startup-id");
 #endif
