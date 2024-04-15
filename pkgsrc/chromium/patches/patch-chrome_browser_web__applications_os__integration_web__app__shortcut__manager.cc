$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- chrome/browser/web_applications/os_integration/web_app_shortcut_manager.cc.orig	2024-04-10 21:24:44.788651000 +0000
+++ chrome/browser/web_applications/os_integration/web_app_shortcut_manager.cc
@@ -440,7 +440,7 @@ std::unique_ptr<ShortcutInfo> WebAppShor
     }
   }
 
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   const std::vector<WebAppShortcutsMenuItemInfo>& shortcuts_menu_item_infos =
       app->shortcuts_menu_item_infos();
   DCHECK_LE(shortcuts_menu_item_infos.size(), kMaxApplicationDockMenuItems);
