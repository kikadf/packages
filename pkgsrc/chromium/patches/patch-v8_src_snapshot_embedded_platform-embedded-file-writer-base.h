$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- v8/src/snapshot/embedded/platform-embedded-file-writer-base.h.orig	2024-05-21 22:47:35.949931900 +0000
+++ v8/src/snapshot/embedded/platform-embedded-file-writer-base.h
@@ -31,6 +31,7 @@ enum class EmbeddedTargetOs {
   kMac,
   kWin,
   kStarboard,
+  kOpenBSD,
   kGeneric,  // Everything not covered above falls in here.
 };
 
