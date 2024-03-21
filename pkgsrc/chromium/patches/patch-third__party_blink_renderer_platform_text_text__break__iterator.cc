$NetBSD$

* Part of patchset to build on NetBSD

--- third_party/blink/renderer/platform/text/text_break_iterator.cc.orig	2024-03-06 00:15:00.567681000 +0000
+++ third_party/blink/renderer/platform/text/text_break_iterator.cc
@@ -161,7 +161,9 @@ static const unsigned char kAsciiLineBre
 };
 // clang-format on
 
-#if U_ICU_VERSION_MAJOR_NUM >= 58
+#if U_ICU_VERSION_MAJOR_NUM >= 74
+#define BA_LB_COUNT (U_LB_COUNT - 8)
+#elif U_ICU_VERSION_MAJOR_NUM >= 58
 #define BA_LB_COUNT (U_LB_COUNT - 3)
 #else
 #define BA_LB_COUNT U_LB_COUNT
