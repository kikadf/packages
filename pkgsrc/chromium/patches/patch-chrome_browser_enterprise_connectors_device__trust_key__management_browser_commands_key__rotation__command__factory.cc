$NetBSD$

* Part of patchset to build chromium on NetBSD
* Based on OpenBSD's chromium patches, and
  pkgsrc's qt5-qtwebengine patches

--- chrome/browser/enterprise/connectors/device_trust/key_management/browser/commands/key_rotation_command_factory.cc.orig	2024-07-24 02:44:27.103858000 +0000
+++ chrome/browser/enterprise/connectors/device_trust/key_management/browser/commands/key_rotation_command_factory.cc
@@ -14,7 +14,7 @@
 
 #if BUILDFLAG(IS_WIN)
 #include "chrome/browser/enterprise/connectors/device_trust/key_management/browser/commands/win_key_rotation_command.h"
-#elif BUILDFLAG(IS_LINUX)
+#elif BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 #include "chrome/browser/enterprise/connectors/device_trust/key_management/browser/commands/linux_key_rotation_command.h"
 #elif BUILDFLAG(IS_MAC)
 #include "chrome/browser/enterprise/connectors/device_trust/key_management/browser/commands/mac_key_rotation_command.h"
@@ -47,7 +47,7 @@ std::unique_ptr<KeyRotationCommand> KeyR
     scoped_refptr<network::SharedURLLoaderFactory> url_loader_factory) {
 #if BUILDFLAG(IS_WIN)
   return std::make_unique<WinKeyRotationCommand>();
-#elif BUILDFLAG(IS_LINUX)
+#elif BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   return std::make_unique<LinuxKeyRotationCommand>(url_loader_factory);
 #elif BUILDFLAG(IS_MAC)
   return std::make_unique<MacKeyRotationCommand>(url_loader_factory);
