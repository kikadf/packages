$NetBSD$

* Part of patchset to build on NetBSD

--- ui/native_theme/native_theme_features.cc.orig	2024-03-19 22:15:27.438911700 +0000
+++ ui/native_theme/native_theme_features.cc
@@ -54,7 +54,7 @@ bool IsOverlayScrollbarEnabled() {
 
 bool IsFluentScrollbarEnabled() {
 // Fluent scrollbars are only used for some OSes due to UI design guidelines.
-#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   return base::FeatureList::IsEnabled(features::kFluentScrollbar) ||
          IsFluentOverlayScrollbarEnabled();
 #else
@@ -63,7 +63,7 @@ bool IsFluentScrollbarEnabled() {
 }
 bool IsFluentOverlayScrollbarEnabled() {
 // Fluent scrollbars are only used for some OSes due to UI design guidelines.
-#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   return base::FeatureList::IsEnabled(features::kFluentOverlayScrollbar);
 #else
   return false;
