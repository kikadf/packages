$NetBSD$

* Part of patchset to build on NetBSD

--- third_party/blink/renderer/core/xml/xslt_processor_libxslt.cc.orig	2024-03-19 22:14:55.424055600 +0000
+++ third_party/blink/renderer/core/xml/xslt_processor_libxslt.cc
@@ -66,7 +66,11 @@ void XSLTProcessor::GenericErrorFunc(voi
   // It would be nice to do something with this error message.
 }
 
+#if (LIBXML_VERSION >= 21200)
 void XSLTProcessor::ParseErrorFunc(void* user_data, const xmlError* error) {
+#else
+void XSLTProcessor::ParseErrorFunc(void* user_data, xmlError* error) {
+#endif
   FrameConsole* console = static_cast<FrameConsole*>(user_data);
   if (!console)
     return;
