$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- content/browser/media/media_keys_listener_manager_impl.cc.orig	2024-04-10 21:24:52.057230200 +0000
+++ content/browser/media/media_keys_listener_manager_impl.cc
@@ -334,7 +334,7 @@ void MediaKeysListenerManagerImpl::Start
   }
 
 #if (BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS_LACROS)) || \
-    BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC)
+    BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_BSD)
   // Create SystemMediaControls with the SingletonHwnd.
   browser_system_media_controls_ =
       system_media_controls::SystemMediaControls::Create(
