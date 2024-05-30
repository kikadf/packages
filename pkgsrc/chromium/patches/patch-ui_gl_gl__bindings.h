$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- ui/gl/gl_bindings.h.orig	2024-05-21 22:43:36.184560800 +0000
+++ ui/gl/gl_bindings.h
@@ -36,7 +36,7 @@
 #include <GL/wglext.h>
 #elif BUILDFLAG(IS_MAC)
 #include <OpenGL/OpenGL.h>
-#elif BUILDFLAG(IS_LINUX)
+#elif BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 using Display = struct _XDisplay;
 using Bool = int;
 using Status = int;
