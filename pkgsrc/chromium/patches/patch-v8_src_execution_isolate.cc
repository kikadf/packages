$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- v8/src/execution/isolate.cc.orig	2024-04-10 21:26:20.436273300 +0000
+++ v8/src/execution/isolate.cc
@@ -153,6 +153,10 @@
 #include "src/execution/simulator-base.h"
 #endif
 
+#if defined(V8_OS_OPENBSD)
+#include <sys/mman.h>
+#endif
+
 extern "C" const uint8_t v8_Default_embedded_blob_code_[];
 extern "C" uint32_t v8_Default_embedded_blob_code_size_;
 extern "C" const uint8_t v8_Default_embedded_blob_data_[];
@@ -4232,6 +4236,11 @@ void Isolate::InitializeDefaultEmbeddedB
   const uint8_t* data = DefaultEmbeddedBlobData();
   uint32_t data_size = DefaultEmbeddedBlobDataSize();
 
+#if defined(V8_OS_OPENBSD) && !defined(V8_TARGET_ARCH_IA32)
+  mprotect(reinterpret_cast<void *>(const_cast<uint8_t *>(code)),
+          code_size, PROT_READ | PROT_EXEC);
+#endif
+
   if (StickyEmbeddedBlobCode() != nullptr) {
     base::MutexGuard guard(current_embedded_blob_refcount_mutex_.Pointer());
     // Check again now that we hold the lock.
