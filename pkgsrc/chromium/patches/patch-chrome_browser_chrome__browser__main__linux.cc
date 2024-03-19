$NetBSD$

--- chrome/browser/chrome_browser_main_linux.cc.orig	2024-03-06 00:14:40.629950300 +0000
+++ chrome/browser/chrome_browser_main_linux.cc
@@ -67,7 +67,9 @@ void ChromeBrowserMainPartsLinux::PostCr
 #endif  // BUILDFLAG(IS_CHROMEOS)
 
 #if !BUILDFLAG(IS_CHROMEOS)
+#if !BUILDFLAG(IS_BSD)
   bluez::BluezDBusManager::Initialize(nullptr /* system_bus */);
+#endif
 
   // Set up crypt config. This needs to be done before anything starts the
   // network service, as the raw encryption key needs to be shared with the
@@ -124,7 +126,7 @@ void ChromeBrowserMainPartsLinux::PostBr
 #endif  // defined(USE_DBUS) && !BUILDFLAG(IS_CHROMEOS)
 
 void ChromeBrowserMainPartsLinux::PostDestroyThreads() {
-#if BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
   // No-op; per PostBrowserStart() comment, this is done elsewhere.
 #else
   bluez::BluezDBusManager::Shutdown();
