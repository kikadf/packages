$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- chrome/browser/web_applications/os_integration/os_integration_test_override.h.orig	2024-05-09 21:46:39.790127300 +0000
+++ chrome/browser/web_applications/os_integration/os_integration_test_override.h
@@ -92,7 +92,7 @@ class OsIntegrationTestOverride
   virtual const base::FilePath& chrome_apps_folder() = 0;
   virtual void EnableOrDisablePathOnLogin(const base::FilePath& file_path,
                                           bool enable_on_login) = 0;
-#elif BUILDFLAG(IS_LINUX)
+#elif BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   virtual const base::FilePath& desktop() = 0;
   virtual const base::FilePath& startup() = 0;
   virtual const base::FilePath& applications_dir() = 0;
