$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- chrome/browser/supervised_user/supervised_user_extensions_delegate_impl.cc.orig	2024-05-09 21:46:37.533978500 +0000
+++ chrome/browser/supervised_user/supervised_user_extensions_delegate_impl.cc
@@ -180,7 +180,7 @@ void SupervisedUserExtensionsDelegateImp
       return;
     }
   }
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_WIN)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_WIN) || BUILDFLAG(IS_BSD)
   CHECK(contents.value());
   content::WebContents* web_contents = contents.value().get();
   if (CanInstallExtensions()) {
