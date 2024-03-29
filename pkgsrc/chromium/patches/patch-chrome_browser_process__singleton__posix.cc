$NetBSD$

* Part of patchset to build on NetBSD

--- chrome/browser/process_singleton_posix.cc.orig	2024-03-19 22:14:32.005966200 +0000
+++ chrome/browser/process_singleton_posix.cc
@@ -97,7 +97,7 @@
 #include "ui/base/l10n/l10n_util.h"
 #include "ui/base/resource/scoped_startup_resource_bundle.h"
 
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
 #include "chrome/browser/ui/process_singleton_dialog_linux.h"
 #endif
 
@@ -355,7 +355,7 @@ bool DisplayProfileInUseError(const base
   if (g_disable_prompt)
     return g_user_opted_unlock_in_use_profile;
 
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
   std::u16string relaunch_button_text =
       l10n_util::GetStringUTF16(IDS_PROFILE_IN_USE_LINUX_RELAUNCH);
   return ShowProcessSingletonDialog(error, relaunch_button_text);
