$NetBSD$

* Part of patchset to build chromium on NetBSD
* Based on OpenBSD's chromium patches, and
  pkgsrc's qt5-qtwebengine patches

--- net/proxy_resolution/proxy_config_service_linux.cc.orig	2024-06-13 23:29:04.216519000 +0000
+++ net/proxy_resolution/proxy_config_service_linux.cc
@@ -6,7 +6,9 @@
 
 #include <errno.h>
 #include <limits.h>
+#if !BUILDFLAG(IS_BSD)
 #include <sys/inotify.h>
+#endif
 #include <unistd.h>
 
 #include <map>
@@ -505,6 +507,7 @@ bool SettingGetterImplGSettings::CheckVe
 }
 #endif  // defined(USE_GIO)
 
+#if !BUILDFLAG(IS_BSD)
 // Converts |value| from a decimal string to an int. If there was a failure
 // parsing, returns |default_value|.
 int StringToIntOrDefault(std::string_view value, int default_value) {
@@ -1033,6 +1036,7 @@ class SettingGetterImplKDE : public Prox
   // events on.
   scoped_refptr<base::SequencedTaskRunner> file_task_runner_;
 };
+#endif
 
 }  // namespace
 
@@ -1251,9 +1255,11 @@ ProxyConfigServiceLinux::Delegate::Deleg
     case base::nix::DESKTOP_ENVIRONMENT_KDE4:
     case base::nix::DESKTOP_ENVIRONMENT_KDE5:
     case base::nix::DESKTOP_ENVIRONMENT_KDE6:
+#if !BUILDFLAG(IS_BSD)
       setting_getter_ =
           std::make_unique<SettingGetterImplKDE>(env_var_getter_.get());
       break;
+#endif
     case base::nix::DESKTOP_ENVIRONMENT_XFCE:
     case base::nix::DESKTOP_ENVIRONMENT_LXQT:
     case base::nix::DESKTOP_ENVIRONMENT_OTHER:
