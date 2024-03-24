$NetBSD$

* Part of patchset to build on NetBSD

--- third_party/sqlite/src/amalgamation/sqlite3.c.orig	2024-03-19 22:16:12.430925600 +0000
+++ third_party/sqlite/src/amalgamation/sqlite3.c
@@ -44510,6 +44510,11 @@ static int unixRandomness(sqlite3_vfs *N
   memset(zBuf, 0, nBuf);
   randomnessPid = osGetpid(0);
 #if !defined(SQLITE_TEST) && !defined(SQLITE_OMIT_RANDOMNESS)
+#if defined(__OpenBSD__)
+  {
+    arc4random_buf(zBuf, nBuf);
+  }
+#else
   {
     int fd, got;
     fd = robust_open("/dev/urandom", O_RDONLY, 0);
@@ -44526,6 +44531,7 @@ static int unixRandomness(sqlite3_vfs *N
     }
   }
 #endif
+#endif
   return nBuf;
 }
 
