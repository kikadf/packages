$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- v8/src/base/strings.h.orig	2024-04-10 21:26:20.068244200 +0000
+++ v8/src/base/strings.h
@@ -8,6 +8,9 @@
 #include "src/base/base-export.h"
 #include "src/base/macros.h"
 #include "src/base/vector.h"
+#if defined(__NetBSD__)
+#include <stdarg.h>
+#endif
 
 namespace v8 {
 namespace base {