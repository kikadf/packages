$NetBSD$

* Part of patchset to build on NetBSD

--- third_party/protobuf/src/google/protobuf/stubs/platform_macros.h.orig	2024-03-06 00:15:17.093115600 +0000
+++ third_party/protobuf/src/google/protobuf/stubs/platform_macros.h
@@ -122,7 +122,7 @@ GOOGLE_PROTOBUF_PLATFORM_ERROR
 
 #undef GOOGLE_PROTOBUF_PLATFORM_ERROR
 
-#if defined(GOOGLE_PROTOBUF_OS_ANDROID) || defined(GOOGLE_PROTOBUF_OS_IPHONE) || defined(__OpenBSD__)
+#if defined(GOOGLE_PROTOBUF_OS_ANDROID) || defined(GOOGLE_PROTOBUF_OS_IPHONE)
 // Android ndk does not support the __thread keyword very well yet. Here
 // we use pthread_key_create()/pthread_getspecific()/... methods for
 // TLS support on android.
