$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- components/crash/core/app/chrome_crashpad_handler.cc.orig	2024-05-21 22:42:57.569116800 +0000
+++ components/crash/core/app/chrome_crashpad_handler.cc
@@ -6,5 +6,9 @@
 extern "C" int CrashpadHandlerMain(int argc, char* argv[]);
 
 int main(int argc, char* argv[]) {
+#if defined(__OpenBSD__) || defined(__FreeBSD__) || defined(__NetBSD__)
+  return -1;
+#else
   return CrashpadHandlerMain(argc, argv);
+#endif
 }
