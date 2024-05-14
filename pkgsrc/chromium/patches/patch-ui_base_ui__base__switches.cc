$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- ui/base/ui_base_switches.cc.orig	2024-05-09 21:47:31.097515800 +0000
+++ ui/base/ui_base_switches.cc
@@ -31,13 +31,13 @@ const char kShowMacOverlayBorders[] = "s
 const char kEnableResourcesFileSharing[] = "enable-resources-file-sharing";
 #endif
 
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
 // Specifies system font family name. Improves determenism when rendering
 // pages in headless mode.
 const char kSystemFontFamily[] = "system-font-family";
 #endif
 
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 // Specify the toolkit used to construct the Linux GUI.
 const char kUiToolkitFlag[] = "ui-toolkit";
 #endif
