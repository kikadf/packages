$NetBSD$

* Part of patchset to build on NetBSD

--- extensions/common/command.cc.orig	2024-03-06 00:14:52.606989900 +0000
+++ extensions/common/command.cc
@@ -283,7 +283,7 @@ std::string Command::CommandPlatform() {
   return values::kKeybindingPlatformMac;
 #elif BUILDFLAG(IS_CHROMEOS)
   return values::kKeybindingPlatformChromeOs;
-#elif BUILDFLAG(IS_LINUX)
+#elif BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   return values::kKeybindingPlatformLinux;
 #elif BUILDFLAG(IS_FUCHSIA)
   // TODO(crbug.com/1312215): Change this once we decide what string should be
