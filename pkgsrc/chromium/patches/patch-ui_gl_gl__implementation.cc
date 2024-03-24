$NetBSD$

* Part of patchset to build on NetBSD

--- ui/gl/gl_implementation.cc.orig	2024-03-19 22:15:27.402908300 +0000
+++ ui/gl/gl_implementation.cc
@@ -276,7 +276,7 @@ GetRequestedGLImplementationFromCommandL
   *fallback_to_software_gl = false;
   bool overrideUseSoftwareGL =
       command_line->HasSwitch(switches::kOverrideUseSoftwareGLForTests);
-#if BUILDFLAG(IS_LINUX) || \
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD) || \
     (BUILDFLAG(IS_CHROMEOS) && !BUILDFLAG(IS_CHROMEOS_DEVICE))
   if (std::getenv("RUNNING_UNDER_RR")) {
     // https://rr-project.org/ is a Linux-only record-and-replay debugger that
