$NetBSD$

* Part of patchset to build on NetBSD

--- services/device/serial/serial_io_handler_posix.cc.orig	2024-03-19 22:14:51.971747400 +0000
+++ services/device/serial/serial_io_handler_posix.cc
@@ -68,7 +68,7 @@ bool BitrateToSpeedConstant(int bitrate,
     BITRATE_TO_SPEED_CASE(9600)
     BITRATE_TO_SPEED_CASE(19200)
     BITRATE_TO_SPEED_CASE(38400)
-#if !BUILDFLAG(IS_MAC)
+#if !BUILDFLAG(IS_MAC) && !BUILDFLAG(IS_BSD)
     BITRATE_TO_SPEED_CASE(57600)
     BITRATE_TO_SPEED_CASE(115200)
     BITRATE_TO_SPEED_CASE(230400)
