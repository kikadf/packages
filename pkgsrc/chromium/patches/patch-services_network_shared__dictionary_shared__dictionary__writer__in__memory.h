$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- services/network/shared_dictionary/shared_dictionary_writer_in_memory.h.orig	2024-04-10 21:24:58.829770000 +0000
+++ services/network/shared_dictionary/shared_dictionary_writer_in_memory.h
@@ -9,6 +9,8 @@
 #include <string>
 #include <vector>
 
+#include <vector>
+
 #include "base/component_export.h"
 #include "base/functional/callback.h"
 #include "crypto/secure_hash.h"
