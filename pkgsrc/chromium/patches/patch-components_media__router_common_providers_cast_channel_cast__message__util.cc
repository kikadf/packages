$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- components/media_router/common/providers/cast/channel/cast_message_util.cc.orig	2024-04-10 21:24:48.876977000 +0000
+++ components/media_router/common/providers/cast/channel/cast_message_util.cc
@@ -169,7 +169,7 @@ int GetVirtualConnectPlatformValue() {
   return 4;
 #elif BUILDFLAG(IS_CHROMEOS_ASH)
   return 5;
-#elif BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS_LACROS)
+#elif BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS_LACROS) || BUILDFLAG(IS_BSD)
   return 6;
 #else
   return 0;
