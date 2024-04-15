$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- third_party/sqlite/src/amalgamation/sqlite3.c.orig	2024-04-10 21:26:05.643094500 +0000
+++ third_party/sqlite/src/amalgamation/sqlite3.c
@@ -20447,6 +20447,9 @@ SQLITE_PRIVATE int sqlite3HeapNearlyFull
 ** The alloca() routine never returns NULL.  This will cause code paths
 ** that deal with sqlite3StackAlloc() failures to be unreachable.
 */
+#if defined(__NetBSD__)
+# undef SQLITE_USE_ALLOCA
+#endif
 #ifdef SQLITE_USE_ALLOCA
 # define sqlite3StackAllocRaw(D,N)   alloca(N)
 # define sqlite3StackAllocRawNN(D,N) alloca(N)
@@ -44510,6 +44513,11 @@ static int unixRandomness(sqlite3_vfs *N
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
@@ -44526,6 +44534,7 @@ static int unixRandomness(sqlite3_vfs *N
     }
   }
 #endif
+#endif
   return nBuf;
 }
 
