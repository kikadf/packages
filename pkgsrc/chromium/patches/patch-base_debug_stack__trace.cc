$NetBSD$

* Part of patchset to build on NetBSD

--- base/debug/stack_trace.cc.orig	2024-03-06 00:14:36.941630000 +0000
+++ base/debug/stack_trace.cc
@@ -266,7 +266,9 @@ void StackTrace::Print() const {
 }
 
 void StackTrace::OutputToStream(std::ostream* os) const {
+#if !BUILDFLAG(IS_BSD)
   OutputToStreamWithPrefix(os, nullptr);
+#endif
 }
 
 std::string StackTrace::ToString() const {
@@ -274,7 +276,7 @@ std::string StackTrace::ToString() const
 }
 std::string StackTrace::ToStringWithPrefix(const char* prefix_string) const {
   std::stringstream stream;
-#if !defined(__UCLIBC__) && !defined(_AIX)
+#if !defined(__UCLIBC__) && !defined(_AIX) && !BUILDFLAG(IS_BSD)
   OutputToStreamWithPrefix(&stream, prefix_string);
 #endif
   return stream.str();
