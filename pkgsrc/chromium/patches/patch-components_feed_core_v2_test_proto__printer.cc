$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- components/feed/core/v2/test/proto_printer.cc.orig	2024-04-10 21:24:48.676961000 +0000
+++ components/feed/core/v2/test/proto_printer.cc
@@ -158,8 +158,8 @@ class TextProtoPrinter {
   }
   TextProtoPrinter& operator<<(const feedwire::Version& v) {
     BeginMessage();
-    PRINT_FIELD(major);
-    PRINT_FIELD(minor);
+    PRINT_FIELD(gmajor);
+    PRINT_FIELD(gminor);
     PRINT_FIELD(build);
     PRINT_FIELD(revision);
     PRINT_FIELD(architecture);
