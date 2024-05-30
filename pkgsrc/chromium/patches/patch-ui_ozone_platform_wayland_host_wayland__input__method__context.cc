$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- ui/ozone/platform/wayland/host/wayland_input_method_context.cc.orig	2024-05-21 22:43:36.272568700 +0000
+++ ui/ozone/platform/wayland/host/wayland_input_method_context.cc
@@ -54,7 +54,7 @@ namespace {
 // Only enable the preedit string for sequence mode (i.e. when using dead keys
 // or the Compose key) on Linux ozone/wayland (see b/220370007).
 constexpr CharacterComposer::PreeditStringMode kPreeditStringMode =
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
     CharacterComposer::PreeditStringMode::kAlwaysEnabled;
 #else
     CharacterComposer::PreeditStringMode::kHexModeOnly;
