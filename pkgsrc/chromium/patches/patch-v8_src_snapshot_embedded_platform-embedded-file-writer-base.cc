$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- v8/src/snapshot/embedded/platform-embedded-file-writer-base.cc.orig	2024-03-26 21:39:30.419662700 +0000
+++ v8/src/snapshot/embedded/platform-embedded-file-writer-base.cc
@@ -143,6 +143,8 @@ EmbeddedTargetOs ToEmbeddedTargetOs(cons
     return EmbeddedTargetOs::kWin;
   } else if (string == "starboard") {
     return EmbeddedTargetOs::kStarboard;
+  } else if (string == "openbsd") {
+    return EmbeddedTargetOs::kOpenBSD;
   } else {
     return EmbeddedTargetOs::kGeneric;
   }
