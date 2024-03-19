$NetBSD$

--- content/app/content_main.cc.orig	2024-03-06 00:14:50.342793500 +0000
+++ content/app/content_main.cc
@@ -207,7 +207,7 @@ RunContentProcess(ContentMainParams para
 #endif
     base::EnableTerminationOnOutOfMemory();
 
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
     // The various desktop environments set this environment variable that
     // allows the dbus client library to connect directly to the bus. When this
     // variable is not set (test environments like xvfb-run), the dbus client
