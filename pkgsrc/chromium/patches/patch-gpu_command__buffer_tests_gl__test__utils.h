$NetBSD$

--- gpu/command_buffer/tests/gl_test_utils.h.orig	2020-07-08 21:40:44.000000000 +0000
+++ gpu/command_buffer/tests/gl_test_utils.h
@@ -120,7 +120,7 @@ class GpuCommandBufferTestEGL {
     return gfx::HasExtension(gl_extensions_, extension);
   }
 
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
   // Create GLImageNativePixmap filled in with the given pixels.
   scoped_refptr<gl::GLImageNativePixmap> CreateGLImageNativePixmap(
       gfx::BufferFormat format,
