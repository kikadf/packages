$NetBSD$

* Part of patchset to build on NetBSD

--- chrome/browser/diagnostics/diagnostics_writer.h.orig	2024-03-19 22:14:30.985875400 +0000
+++ chrome/browser/diagnostics/diagnostics_writer.h
@@ -14,6 +14,8 @@ namespace diagnostics {
 // Console base class used internally.
 class SimpleConsole;
 
+#undef MACHINE
+
 class DiagnosticsWriter : public DiagnosticsModel::Observer {
  public:
   // The type of formatting done by this writer.
