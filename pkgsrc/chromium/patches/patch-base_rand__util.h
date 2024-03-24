$NetBSD$

* Part of patchset to build on NetBSD

--- base/rand_util.h.orig	2024-03-19 22:14:27.165534500 +0000
+++ base/rand_util.h
@@ -149,7 +149,7 @@ void RandomShuffle(Itr first, Itr last) 
   std::shuffle(first, last, RandomBitGenerator());
 }
 
-#if BUILDFLAG(IS_POSIX)
+#if BUILDFLAG(IS_POSIX) && !BUILDFLAG(IS_BSD)
 BASE_EXPORT int GetUrandomFD();
 #endif
 
