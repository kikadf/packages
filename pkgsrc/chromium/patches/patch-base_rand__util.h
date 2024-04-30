$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- base/rand_util.h.orig	2024-04-15 20:33:42.749021800 +0000
+++ base/rand_util.h
@@ -149,7 +149,7 @@ void RandomShuffle(Itr first, Itr last) 
   std::shuffle(first, last, RandomBitGenerator());
 }
 
-#if BUILDFLAG(IS_POSIX)
+#if BUILDFLAG(IS_POSIX) && !BUILDFLAG(IS_BSD)
 BASE_EXPORT int GetUrandomFD();
 #endif
 
