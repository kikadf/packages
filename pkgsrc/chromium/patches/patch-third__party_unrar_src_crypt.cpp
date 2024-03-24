$NetBSD$

* Part of patchset to build on NetBSD

--- third_party/unrar/src/crypt.cpp.orig	2024-03-19 22:15:24.614659500 +0000
+++ third_party/unrar/src/crypt.cpp
@@ -120,6 +120,8 @@ void GetRnd(byte *RndBuf,size_t BufSize)
     Success=CryptGenRandom(hProvider, (DWORD)BufSize, RndBuf) == TRUE;
     CryptReleaseContext(hProvider, 0);
   }
+#elif defined(__OpenBSD__)
+  arc4random_buf(RndBuf, BufSize);
 #elif defined(_UNIX)
   FILE *rndf = fopen("/dev/urandom", "r");
   if (rndf!=NULL)
