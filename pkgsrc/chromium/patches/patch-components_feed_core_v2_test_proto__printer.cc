$NetBSD$

* Part of patchset to build on NetBSD

--- components/feed/core/v2/test/proto_printer.cc.orig	2024-03-19 22:14:38.834575400 +0000
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
