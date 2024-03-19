$NetBSD$

--- chrome/browser/web_applications/os_integration/web_app_shortcut_manager.cc.orig	2024-03-06 00:14:43.986241600 +0000
+++ chrome/browser/web_applications/os_integration/web_app_shortcut_manager.cc
@@ -434,7 +434,7 @@ std::unique_ptr<ShortcutInfo> WebAppShor
     }
   }
 
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   const std::vector<WebAppShortcutsMenuItemInfo>& shortcuts_menu_item_infos =
       app->shortcuts_menu_item_infos();
   DCHECK_LE(shortcuts_menu_item_infos.size(), kMaxApplicationDockMenuItems);
