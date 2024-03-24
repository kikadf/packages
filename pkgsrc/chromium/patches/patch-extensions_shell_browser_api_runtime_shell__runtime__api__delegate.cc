$NetBSD$

* Part of patchset to build on NetBSD

--- extensions/shell/browser/api/runtime/shell_runtime_api_delegate.cc.orig	2024-03-19 22:14:45.215144600 +0000
+++ extensions/shell/browser/api/runtime/shell_runtime_api_delegate.cc
@@ -44,7 +44,7 @@ void ShellRuntimeAPIDelegate::OpenURL(co
 bool ShellRuntimeAPIDelegate::GetPlatformInfo(PlatformInfo* info) {
 #if BUILDFLAG(IS_CHROMEOS_ASH)
   info->os = api::runtime::PlatformOs::kCros;
-#elif BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS_LACROS)
+#elif BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS_LACROS) || BUILDFLAG(IS_BSD)
   info->os = api::runtime::PlatformOs::kLinux;
 #endif
   return true;
