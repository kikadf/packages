$NetBSD$

--- chrome/browser/extensions/api/image_writer_private/removable_storage_provider.cc.orig	2020-07-08 21:40:34.000000000 +0000
+++ chrome/browser/extensions/api/image_writer_private/removable_storage_provider.cc
@@ -22,6 +22,7 @@ static base::LazyInstance<scoped_refptr<
 
 void RemovableStorageProvider::GetAllDevices(DeviceListReadyCallback callback) {
   DCHECK_CURRENTLY_ON(content::BrowserThread::UI);
+#if !defined(OS_BSD)
   if (g_test_device_list.Get().get() != nullptr) {
     base::ThreadTaskRunnerHandle::Get()->PostTask(
         FROM_HERE,
@@ -35,6 +36,9 @@ void RemovableStorageProvider::GetAllDev
        base::TaskShutdownBehavior::SKIP_ON_SHUTDOWN},
       base::BindOnce(&RemovableStorageProvider::PopulateDeviceList),
       std::move(callback));
+#else
+  NOTIMPLEMENTED();
+#endif
 }
 
 // static
