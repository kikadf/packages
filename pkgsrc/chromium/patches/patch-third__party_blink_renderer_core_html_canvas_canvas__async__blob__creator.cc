$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- third_party/blink/renderer/core/html/canvas/canvas_async_blob_creator.cc.orig	2024-05-09 21:47:05.775843600 +0000
+++ third_party/blink/renderer/core/html/canvas/canvas_async_blob_creator.cc
@@ -50,7 +50,7 @@ constexpr base::TimeDelta kEncodeRowSlac
 
 /* The value is based on user statistics on Nov 2017. */
 #if (BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_MAC) || \
-     BUILDFLAG(IS_WIN))
+     BUILDFLAG(IS_WIN)) || BUILDFLAG(IS_BSD)
 const double kIdleTaskStartTimeoutDelayMs = 1000.0;
 #else
 const double kIdleTaskStartTimeoutDelayMs = 4000.0;  // For ChromeOS, Mobile
