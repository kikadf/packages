$NetBSD$

* Part of patchset to build on NetBSD

--- v8/src/snapshot/embedded/platform-embedded-file-writer-base.h.orig	2024-03-06 00:16:16.050233800 +0000
+++ v8/src/snapshot/embedded/platform-embedded-file-writer-base.h
@@ -31,6 +31,7 @@ enum class EmbeddedTargetOs {
   kMac,
   kWin,
   kStarboard,
+  kOpenBSD,
   kGeneric,  // Everything not covered above falls in here.
 };
 
