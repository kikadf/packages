$NetBSD$

--- third_party/protobuf/src/google/protobuf/arenastring.cc.orig	2024-03-06 00:15:16.765087100 +0000
+++ third_party/protobuf/src/google/protobuf/arenastring.cc
@@ -64,7 +64,9 @@ constexpr size_t kNewAlign = alignof(std
 #endif
 constexpr size_t kStringAlign = alignof(std::string);
 
+#if !(defined(__FreeBSD__) && defined(__i386__))
 static_assert((kStringAlign > kNewAlign ? kStringAlign : kNewAlign) >= 8, "");
+#endif
 static_assert(alignof(ExplicitlyConstructedArenaString) >= 8, "");
 
 }  // namespace
