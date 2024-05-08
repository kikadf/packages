$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- printing/print_settings_conversion.cc.orig	2024-04-30 23:47:01.340280300 +0000
+++ printing/print_settings_conversion.cc
@@ -285,7 +285,7 @@ std::unique_ptr<PrintSettings> PrintSett
     settings->set_is_modifiable(is_modifiable.value());
   }
 
-#if BUILDFLAG(IS_CHROMEOS) || (BUILDFLAG(IS_LINUX) && BUILDFLAG(USE_CUPS))
+#if BUILDFLAG(IS_CHROMEOS) || ((BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)) && BUILDFLAG(USE_CUPS))
   const base::Value::Dict* advanced_settings =
       job_settings.FindDict(kSettingAdvancedSettings);
   if (advanced_settings) {
