$NetBSD$

* Part of patchset to build on NetBSD

--- v8/src/sandbox/sandbox.cc.orig	2024-03-19 22:16:43.773721700 +0000
+++ v8/src/sandbox/sandbox.cc
@@ -46,7 +46,7 @@ static Address DetermineAddressSpaceLimi
   }
 #endif  // V8_TARGET_ARCH_X64
 
-#if defined(V8_TARGET_ARCH_ARM64) && defined(V8_TARGET_OS_ANDROID)
+#if defined(V8_TARGET_ARCH_ARM64) && (defined(V8_TARGET_OS_ANDROID) || defined(V8_TARGET_OS_OPENBSD))
   // On Arm64 Android assume a 40-bit virtual address space (39 bits for
   // userspace and kernel each) as that appears to be the most common
   // configuration and there seems to be no easy way to retrieve the actual
