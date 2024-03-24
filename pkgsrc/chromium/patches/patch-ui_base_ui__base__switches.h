$NetBSD$

* Part of patchset to build on NetBSD

--- ui/base/ui_base_switches.h.orig	2024-03-19 22:15:26.994872000 +0000
+++ ui/base/ui_base_switches.h
@@ -27,11 +27,11 @@ COMPONENT_EXPORT(UI_BASE) extern const c
 COMPONENT_EXPORT(UI_BASE) extern const char kEnableResourcesFileSharing[];
 #endif
 
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
 COMPONENT_EXPORT(UI_BASE) extern const char kSystemFontFamily[];
 #endif
 
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 COMPONENT_EXPORT(UI_BASE) extern const char kUiToolkitFlag[];
 #endif
 
