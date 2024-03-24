$NetBSD$

* Part of patchset to build on NetBSD

--- content/renderer/render_process_impl.cc.orig	2024-03-19 22:14:43.691008800 +0000
+++ content/renderer/render_process_impl.cc
@@ -44,7 +44,7 @@
 #include "third_party/blink/public/web/web_frame.h"
 #include "v8/include/v8-initialization.h"
 
-#if (BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)) && \
+#if (BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)) && \
     (defined(ARCH_CPU_X86_64) || defined(ARCH_CPU_ARM64))
 #define ENABLE_WEB_ASSEMBLY_TRAP_HANDLER_LINUX
 #endif
