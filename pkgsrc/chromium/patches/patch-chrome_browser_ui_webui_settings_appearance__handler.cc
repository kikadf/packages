$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- chrome/browser/ui/webui/settings/appearance_handler.cc.orig	2024-05-21 22:42:54.320827000 +0000
+++ chrome/browser/ui/webui/settings/appearance_handler.cc
@@ -28,7 +28,7 @@ void AppearanceHandler::RegisterMessages
       "useDefaultTheme",
       base::BindRepeating(&AppearanceHandler::HandleUseTheme,
                           base::Unretained(this), ui::SystemTheme::kDefault));
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   web_ui()->RegisterMessageCallback(
       "useGtkTheme",
       base::BindRepeating(&AppearanceHandler::HandleUseTheme,
