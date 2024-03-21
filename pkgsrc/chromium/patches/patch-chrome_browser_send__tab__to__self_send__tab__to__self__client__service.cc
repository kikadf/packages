$NetBSD$

* Part of patchset to build on NetBSD

--- chrome/browser/send_tab_to_self/send_tab_to_self_client_service.cc.orig	2024-03-06 00:14:42.462109300 +0000
+++ chrome/browser/send_tab_to_self/send_tab_to_self_client_service.cc
@@ -17,7 +17,7 @@
 #include "components/send_tab_to_self/send_tab_to_self_model.h"
 
 #if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_MAC) || \
-    BUILDFLAG(IS_WIN)
+    BUILDFLAG(IS_WIN) || BUILDFLAG(IS_BSD)
 #include "chrome/browser/ui/send_tab_to_self/send_tab_to_self_toolbar_icon_controller.h"
 #endif
 
@@ -51,7 +51,7 @@ void SendTabToSelfClientService::Entries
     const std::vector<const SendTabToSelfEntry*>& new_entries) {
   for (const std::unique_ptr<ReceivingUiHandler>& handler : GetHandlers()) {
 #if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_MAC) || \
-    BUILDFLAG(IS_WIN)
+    BUILDFLAG(IS_WIN) || BUILDFLAG(IS_BSD)
     // Only respond to notifications corresponding to this service's profile
     // for these OSes; mobile does not have a Profile.
     // Cast note: on desktop, handlers are guaranteed to be the derived class
