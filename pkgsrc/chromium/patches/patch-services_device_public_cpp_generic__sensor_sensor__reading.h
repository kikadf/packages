$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- services/device/public/cpp/generic_sensor/sensor_reading.h.orig	2024-05-21 22:43:07.273982300 +0000
+++ services/device/public/cpp/generic_sensor/sensor_reading.h
@@ -8,6 +8,8 @@
 #include <stddef.h>
 #include <stdint.h>
 
+#include <cstdint>
+
 #include <type_traits>
 
 namespace device {
