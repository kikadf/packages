$NetBSD$

* Part of patchset to build on NetBSD

--- chrome/common/channel_info.h.orig	2024-03-19 22:14:34.794215000 +0000
+++ chrome/common/channel_info.h
@@ -104,13 +104,13 @@ void ClearChannelForTesting();
 std::string GetChannelSuffixForDataDir();
 #endif
 
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 std::string GetChannelSuffixForExtraFlagsEnvVarName();
 #endif
 
 // TODO(crbug.com/1052397): Revisit the macro expression once build flag switch
 // of lacros-chrome is complete.
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS_LACROS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS_LACROS) || BUILDFLAG(IS_BSD)
 // Returns the channel-specific filename of the desktop shortcut used to launch
 // the browser.
 std::string GetDesktopName(base::Environment* env);
