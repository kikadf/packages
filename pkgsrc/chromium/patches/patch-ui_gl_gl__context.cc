$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- ui/gl/gl_context.cc.orig	2024-04-10 21:25:25.335882400 +0000
+++ ui/gl/gl_context.cc
@@ -472,7 +472,7 @@ bool GLContext::MakeVirtuallyCurrent(
   DCHECK(virtual_context->IsCurrent(surface));
 
   if (switched_real_contexts || virtual_context != current_virtual_context_) {
-#if DCHECK_IS_ON()
+#if DCHECK_IS_ON() && !BUILDFLAG(IS_BSD)
     GLenum error = glGetError();
     // Accepting a context loss error here enables using debug mode to work on
     // context loss handling in virtual context mode.
