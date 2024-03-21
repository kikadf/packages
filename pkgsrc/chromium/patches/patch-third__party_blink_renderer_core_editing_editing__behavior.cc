$NetBSD$

* Part of patchset to build on NetBSD

--- third_party/blink/renderer/core/editing/editing_behavior.cc.orig	2024-03-06 00:14:59.315572300 +0000
+++ third_party/blink/renderer/core/editing/editing_behavior.cc
@@ -324,7 +324,7 @@ bool EditingBehavior::ShouldInsertCharac
   // unexpected behaviour
   if (ch < ' ')
     return false;
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
   // According to XKB map no keyboard combinations with ctrl key are mapped to
   // printable characters, however we need the filter as the DomKey/text could
   // contain printable characters.
