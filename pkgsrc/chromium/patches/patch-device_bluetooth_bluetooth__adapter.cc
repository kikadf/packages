$NetBSD$

* Part of patchset to build on NetBSD

--- device/bluetooth/bluetooth_adapter.cc.orig	2024-03-19 22:14:44.483079400 +0000
+++ device/bluetooth/bluetooth_adapter.cc
@@ -32,7 +32,7 @@ namespace device {
 BluetoothAdapter::ServiceOptions::ServiceOptions() = default;
 BluetoothAdapter::ServiceOptions::~ServiceOptions() = default;
 
-#if !BUILDFLAG(IS_ANDROID) && !BUILDFLAG(IS_CHROMEOS) && \
+#if !BUILDFLAG(IS_ANDROID) && !BUILDFLAG(IS_CHROMEOS) && !BUILDFLAG(IS_BSD) && \
     !BUILDFLAG(IS_APPLE) && !BUILDFLAG(IS_WIN) && !BUILDFLAG(IS_LINUX)
 // static
 scoped_refptr<BluetoothAdapter> BluetoothAdapter::CreateAdapter() {
