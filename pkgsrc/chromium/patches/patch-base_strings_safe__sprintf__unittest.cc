$NetBSD$

* Part of patchset to build on NetBSD

--- base/strings/safe_sprintf_unittest.cc.orig	2024-03-19 22:14:27.173535000 +0000
+++ base/strings/safe_sprintf_unittest.cc
@@ -733,6 +733,7 @@ TEST(SafeSPrintfTest, EmbeddedNul) {
 #endif
 }
 
+#if !BUILDFLAG(IS_BSD)
 TEST(SafeSPrintfTest, EmitNULL) {
   char buf[40];
 #if defined(__GNUC__)
@@ -749,6 +750,7 @@ TEST(SafeSPrintfTest, EmitNULL) {
 #pragma GCC diagnostic pop
 #endif
 }
+#endif
 
 TEST(SafeSPrintfTest, PointerSize) {
   // The internal data representation is a 64bit value, independent of the
