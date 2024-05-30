$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- third_party/swiftshader/src/Reactor/Debug.cpp.orig	2024-05-21 22:48:12.061151700 +0000
+++ third_party/swiftshader/src/Reactor/Debug.cpp
@@ -46,7 +46,8 @@ namespace {
 
 bool IsUnderDebugger()
 {
-#if defined(PTRACE) && !defined(__APPLE__) && !defined(__MACH__)
+#if defined(PTRACE) && !defined(__APPLE__) && !defined(__MACH__) && !defined(__OpenBSD__) && !defined(__FreeBSD__) && \
+	!defined(__NetBSD__)
 	static bool checked = false;
 	static bool res = false;
 
