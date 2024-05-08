$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- ui/events/event_switches.cc.orig	2024-04-30 23:47:29.251294100 +0000
+++ ui/events/event_switches.cc
@@ -21,7 +21,7 @@ const char kCompensateForUnstablePinchZo
 // value is a floating point number that is interpreted as a distance in pixels.
 const char kTouchSlopDistance[] = "touch-slop-distance";
 
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
 // Tells chrome to interpret events from these devices as touch events. Only
 // available with XInput 2 (i.e. X server 1.8 or above). The id's of the
 // devices can be retrieved from 'xinput list'.
