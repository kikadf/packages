$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- device/bluetooth/bluetooth_adapter.cc.orig	2024-04-30 23:46:56.663775400 +0000
+++ device/bluetooth/bluetooth_adapter.cc
@@ -32,7 +32,7 @@ namespace device {
 BluetoothAdapter::ServiceOptions::ServiceOptions() = default;
 BluetoothAdapter::ServiceOptions::~ServiceOptions() = default;
 
-#if !BUILDFLAG(IS_ANDROID) && !BUILDFLAG(IS_CHROMEOS) && \
+#if !BUILDFLAG(IS_ANDROID) && !BUILDFLAG(IS_CHROMEOS) && !BUILDFLAG(IS_BSD) && \
     !BUILDFLAG(IS_APPLE) && !BUILDFLAG(IS_WIN) && !BUILDFLAG(IS_LINUX)
 // static
 scoped_refptr<BluetoothAdapter> BluetoothAdapter::CreateAdapter() {
