$NetBSD$

* Part of patchset to build on NetBSD

--- remoting/host/base/switches.h.orig	2024-03-06 00:14:57.363402800 +0000
+++ remoting/host/base/switches.h
@@ -35,13 +35,13 @@ extern const char kProcessTypeRdpDesktop
 extern const char kProcessTypeEvaluateCapability[];
 extern const char kProcessTypeFileChooser[];
 extern const char kProcessTypeUrlForwarderConfigurator[];
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
 extern const char kProcessTypeXSessionChooser[];
 #endif  // BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
 
 extern const char kEvaluateCapabilitySwitchName[];
 
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 // Used to record client sessions to utmp/wtmp.
 extern const char kEnableUtempter[];
 #endif
