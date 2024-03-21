$NetBSD$

* Part of patchset to build on NetBSD

--- printing/print_settings_conversion.cc.orig	2024-03-06 00:14:57.315398700 +0000
+++ printing/print_settings_conversion.cc
@@ -287,7 +287,7 @@ std::unique_ptr<PrintSettings> PrintSett
     settings->set_is_modifiable(is_modifiable.value());
   }
 
-#if BUILDFLAG(IS_CHROMEOS) || (BUILDFLAG(IS_LINUX) && BUILDFLAG(USE_CUPS))
+#if BUILDFLAG(IS_CHROMEOS) || ((BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)) && BUILDFLAG(USE_CUPS))
   const base::Value::Dict* advanced_settings =
       job_settings.FindDict(kSettingAdvancedSettings);
   if (advanced_settings) {
