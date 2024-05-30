$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- extensions/shell/browser/shell_browser_main_parts.cc.orig	2024-05-21 22:43:02.793582700 +0000
+++ extensions/shell/browser/shell_browser_main_parts.cc
@@ -150,7 +150,7 @@ void ShellBrowserMainParts::PostCreateMa
       switches::kAppShellAllowRoaming)) {
     network_controller_->SetCellularAllowRoaming(true);
   }
-#elif BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS_LACROS)
+#elif BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS_LACROS) || BUILDFLAG(IS_BSD)
   // app_shell doesn't need GTK, so the fake input method context can work.
   // See crbug.com/381852 and revision fb69f142.
   // TODO(michaelpg): Verify this works for target environments.
