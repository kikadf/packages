$NetBSD$

--- chrome/browser/memory_details.cc.orig	2020-07-08 21:40:34.000000000 +0000
+++ chrome/browser/memory_details.cc
@@ -38,7 +38,7 @@
 #include "services/resource_coordinator/public/cpp/memory_instrumentation/memory_instrumentation.h"
 #include "ui/base/l10n/l10n_util.h"
 
-#if defined(OS_POSIX) && !defined(OS_MACOSX) && !defined(OS_ANDROID)
+#if defined(OS_POSIX) && !defined(OS_MACOSX) && !defined(OS_ANDROID) && !defined(OS_BSD)
 #include "content/public/browser/zygote_host/zygote_host_linux.h"
 #endif
 
@@ -339,7 +339,7 @@ void MemoryDetails::CollectChildInfoOnUI
       process.titles.push_back(title);
     }
 
-#if defined(OS_POSIX) && !defined(OS_MACOSX) && !defined(OS_ANDROID)
+#if defined(OS_POSIX) && !defined(OS_MACOSX) && !defined(OS_ANDROID) && !defined(OS_BSD)
     if (content::ZygoteHost::GetInstance()->IsZygotePid(process.pid)) {
       process.process_type = content::PROCESS_TYPE_ZYGOTE;
     }
