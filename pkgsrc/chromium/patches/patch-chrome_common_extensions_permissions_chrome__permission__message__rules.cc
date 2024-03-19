$NetBSD$

--- chrome/common/extensions/permissions/chrome_permission_message_rules.cc.orig	2024-03-06 00:14:44.082249900 +0000
+++ chrome/common/extensions/permissions/chrome_permission_message_rules.cc
@@ -285,7 +285,7 @@ int GetEnterpriseReportingPrivatePermiss
   }
 #if BUILDFLAG(IS_WIN)
   return IDS_EXTENSION_PROMPT_WARNING_ENTERPRISE_REPORTING_PRIVATE_ENABLED_WIN;
-#elif BUILDFLAG(IS_LINUX) or BUILDFLAG(IS_MAC)
+#elif BUILDFLAG(IS_LINUX) or BUILDFLAG(IS_MAC) or BUILDFLAG(IS_BSD)
   return IDS_EXTENSION_PROMPT_WARNING_ENTERPRISE_REPORTING_PRIVATE_ENABLED_LINUX_AND_MACOS;
 #else
   return IDS_EXTENSION_PROMPT_WARNING_ENTERPRISE_REPORTING_PRIVATE;
