$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- remoting/client/display/sys_opengl.h.orig	2024-05-09 21:47:01.515562000 +0000
+++ remoting/client/display/sys_opengl.h
@@ -9,7 +9,7 @@
 
 #if BUILDFLAG(IS_IOS)
 #include <OpenGLES/ES3/gl.h>
-#elif BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#elif BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
 #define GL_GLEXT_PROTOTYPES
 #include <GL/gl.h>
 #include <GL/glext.h>
