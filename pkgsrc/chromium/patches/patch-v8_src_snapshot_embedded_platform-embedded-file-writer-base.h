$NetBSD$

* Part of patchset to build on NetBSD

--- v8/src/snapshot/embedded/platform-embedded-file-writer-base.h.orig	2024-03-19 22:16:43.897732700 +0000
+++ v8/src/snapshot/embedded/platform-embedded-file-writer-base.h
@@ -31,6 +31,7 @@ enum class EmbeddedTargetOs {
   kMac,
   kWin,
   kStarboard,
+  kOpenBSD,
   kGeneric,  // Everything not covered above falls in here.
 };
 
