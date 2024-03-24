$NetBSD$

* Part of patchset to build on NetBSD

--- third_party/angle/src/libANGLE/renderer/gl/glx/FunctionsGLX.cpp.orig	2024-03-19 22:16:21.111700000 +0000
+++ third_party/angle/src/libANGLE/renderer/gl/glx/FunctionsGLX.cpp
@@ -144,10 +144,10 @@ bool FunctionsGLX::initialize(Display *x
     // which a GLXWindow was ever created.
     if (!sLibHandle)
     {
-        sLibHandle = dlopen("libGL.so.1", RTLD_NOW);
+        sLibHandle = dlopen("libGL.so", RTLD_NOW);
         if (!sLibHandle)
         {
-            *errorString = std::string("Could not dlopen libGL.so.1: ") + dlerror();
+            *errorString = std::string("Could not dlopen libGL.so: ") + dlerror();
             return false;
         }
     }
