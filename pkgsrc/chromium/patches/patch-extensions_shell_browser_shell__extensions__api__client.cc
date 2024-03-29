$NetBSD$

* Part of patchset to build on NetBSD

--- extensions/shell/browser/shell_extensions_api_client.cc.orig	2024-03-19 22:14:45.219145000 +0000
+++ extensions/shell/browser/shell_extensions_api_client.cc
@@ -58,7 +58,7 @@ ShellExtensionsAPIClient::CreateDisplayI
 
 // TODO(crbug.com/1052397): Revisit the macro expression once build flag switch
 // of lacros-chrome is complete.
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS_LACROS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS_LACROS) || BUILDFLAG(IS_BSD)
 FileSystemDelegate* ShellExtensionsAPIClient::GetFileSystemDelegate() {
   if (!file_system_delegate_)
     file_system_delegate_ = std::make_unique<ShellFileSystemDelegate>();
