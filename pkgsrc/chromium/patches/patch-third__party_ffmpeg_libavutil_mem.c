$NetBSD$

* Part of patchset to build on NetBSD

--- third_party/ffmpeg/libavutil/mem.c.orig	2024-03-06 00:15:55.236426800 +0000
+++ third_party/ffmpeg/libavutil/mem.c
@@ -33,9 +33,6 @@
 #include <stdlib.h>
 #include <stdatomic.h>
 #include <string.h>
-#if HAVE_MALLOC_H
-#include <malloc.h>
-#endif
 
 #include "attributes.h"
 #include "avassert.h"
