$NetBSD$

* Part of patchset to build on NetBSD

--- base/atomicops.h.orig	2024-03-19 22:14:27.037523000 +0000
+++ base/atomicops.h
@@ -71,7 +71,11 @@ typedef intptr_t Atomic64;
 
 // Use AtomicWord for a machine-sized pointer.  It will use the Atomic32 or
 // Atomic64 routines below, depending on your architecture.
+#if !defined(OS_OPENBSD) && defined(__i386__)
+typedef Atomic32 AtomicWord;
+#else
 typedef intptr_t AtomicWord;
+#endif
 
 // Atomically execute:
 //      result = *ptr;
