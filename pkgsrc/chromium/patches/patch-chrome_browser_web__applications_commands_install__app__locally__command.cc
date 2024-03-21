$NetBSD$

* Part of patchset to build on NetBSD

--- chrome/browser/web_applications/commands/install_app_locally_command.cc.orig	2024-03-06 00:14:43.950238500 +0000
+++ chrome/browser/web_applications/commands/install_app_locally_command.cc
@@ -75,7 +75,7 @@ void InstallAppLocallyCommand::StartWith
   options.os_hooks[OsHookType::kUninstallationViaOsSettings] =
       web_app->CanUserUninstallWebApp();
 
-#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || \
+#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_BSD) || \
     (BUILDFLAG(IS_LINUX) && !BUILDFLAG(IS_CHROMEOS_LACROS))
   options.os_hooks[web_app::OsHookType::kUrlHandlers] = true;
 #else
