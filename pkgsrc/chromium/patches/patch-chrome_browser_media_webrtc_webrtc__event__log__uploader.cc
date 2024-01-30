$NetBSD$

--- chrome/browser/media/webrtc/webrtc_event_log_uploader.cc.orig	2020-07-08 21:41:47.000000000 +0000
+++ chrome/browser/media/webrtc/webrtc_event_log_uploader.cc
@@ -36,7 +36,7 @@ constexpr size_t kExpectedMimeOverheadBy
 const char kProduct[] = "Chrome";
 #elif defined(OS_MACOSX)
 const char kProduct[] = "Chrome_Mac";
-#elif defined(OS_LINUX)
+#elif defined(OS_LINUX) || defined(OS_BSD)
 const char kProduct[] = "Chrome_Linux";
 #elif defined(OS_ANDROID)
 const char kProduct[] = "Chrome_Android";
