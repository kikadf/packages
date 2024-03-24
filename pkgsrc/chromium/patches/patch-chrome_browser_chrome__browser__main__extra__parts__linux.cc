$NetBSD$

* Part of patchset to build on NetBSD

--- chrome/browser/chrome_browser_main_extra_parts_linux.cc.orig	2024-03-19 22:14:30.837862000 +0000
+++ chrome/browser/chrome_browser_main_extra_parts_linux.cc
@@ -117,7 +117,7 @@ ChromeBrowserMainExtraPartsLinux::Chrome
 ChromeBrowserMainExtraPartsLinux::~ChromeBrowserMainExtraPartsLinux() = default;
 
 void ChromeBrowserMainExtraPartsLinux::PreEarlyInitialization() {
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   // On the desktop, we fix the platform name if necessary.
   // See https://crbug.com/1246928.
   auto* const command_line = base::CommandLine::ForCurrentProcess();
