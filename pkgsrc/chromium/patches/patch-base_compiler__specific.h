$NetBSD$

* Part of patchset to build on NetBSD

--- base/compiler_specific.h.orig	2024-03-19 22:14:27.045523600 +0000
+++ base/compiler_specific.h
@@ -316,7 +316,7 @@
 //
 // In some cases it's desirable to remove this, e.g. on hot functions, or if
 // we have purposely changed the reference canary.
-#if defined(COMPILER_GCC) || defined(__clang__)
+#if (defined(COMPILER_GCC) || defined(__clang__)) && !defined(__OpenBSD__) && !defined(__FreeBSD__)
 #if HAS_ATTRIBUTE(__no_stack_protector__)
 #define NO_STACK_PROTECTOR __attribute__((__no_stack_protector__))
 #else
