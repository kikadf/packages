$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- third_party/protobuf/src/google/protobuf/arenastring.cc.orig	2024-04-10 21:25:20.991536100 +0000
+++ third_party/protobuf/src/google/protobuf/arenastring.cc
@@ -64,7 +64,9 @@ constexpr size_t kNewAlign = alignof(std
 #endif
 constexpr size_t kStringAlign = alignof(std::string);
 
+#if !(defined(__FreeBSD__) && defined(__i386__))
 static_assert((kStringAlign > kNewAlign ? kStringAlign : kNewAlign) >= 8, "");
+#endif
 static_assert(alignof(ExplicitlyConstructedArenaString) >= 8, "");
 
 }  // namespace
