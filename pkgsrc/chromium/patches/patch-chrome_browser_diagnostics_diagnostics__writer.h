$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- chrome/browser/diagnostics/diagnostics_writer.h.orig	2024-04-10 21:24:41.316374300 +0000
+++ chrome/browser/diagnostics/diagnostics_writer.h
@@ -14,6 +14,8 @@ namespace diagnostics {
 // Console base class used internally.
 class SimpleConsole;
 
+#undef MACHINE
+
 class DiagnosticsWriter : public DiagnosticsModel::Observer {
  public:
   // The type of formatting done by this writer.
