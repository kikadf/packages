$NetBSD$

--- chrome/browser/extensions/api/webstore_private/webstore_private_api.cc.orig	2024-03-06 00:14:41.021984300 +0000
+++ chrome/browser/extensions/api/webstore_private/webstore_private_api.cc
@@ -904,7 +904,7 @@ void WebstorePrivateBeginInstallWithMani
         RequestExtensionApproval(contents);
         return;
       }
-#elif BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_WIN)
+#elif BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_WIN) || BUILDFLAG(IS_BSD)
       // Shows a parental permission dialog directly bypassing the extension
       // install dialog view. The parental permission dialog contains a superset
       // of data from the extension install dialog: requested extension
