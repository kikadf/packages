$NetBSD$

--- ui/events/event_switches.h.orig	2024-03-06 00:15:20.541415000 +0000
+++ ui/events/event_switches.h
@@ -13,7 +13,7 @@ namespace switches {
 EVENTS_BASE_EXPORT extern const char kCompensateForUnstablePinchZoom[];
 EVENTS_BASE_EXPORT extern const char kTouchSlopDistance[];
 
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
 EVENTS_BASE_EXPORT extern const char kTouchDevices[];
 EVENTS_BASE_EXPORT extern const char kPenDevices[];
 #endif
