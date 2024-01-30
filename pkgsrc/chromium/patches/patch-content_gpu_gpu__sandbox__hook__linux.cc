$NetBSD$

--- content/gpu/gpu_sandbox_hook_linux.cc.orig	2020-07-24 02:37:55.000000000 +0000
+++ content/gpu/gpu_sandbox_hook_linux.cc
@@ -98,8 +98,13 @@ static const char kLibV4lEncPluginPath[]
     "/usr/lib/libv4l/plugins/libv4l-encplugin.so";
 #endif
 
+#if defined(OS_LINUX)
 constexpr int dlopen_flag = RTLD_NOW | RTLD_GLOBAL | RTLD_NODELETE;
+#else
+constexpr int dlopen_flag = RTLD_NOW | RTLD_GLOBAL;
+#endif
 
+#if !defined(OS_BSD)
 void AddV4L2GpuWhitelist(
     std::vector<BrokerFilePermission>* permissions,
     const service_manager::SandboxSeccompBPF::Options& options) {
@@ -356,8 +361,10 @@ std::vector<BrokerFilePermission> FilePe
   AddStandardGpuWhiteList(&permissions);
   return permissions;
 }
+#endif
 
 void LoadArmGpuLibraries() {
+#if !defined(OS_BSD)
   // Preload the Mali library.
   if (UseChromecastSandboxWhitelist()) {
     for (const char* path : kWhitelistedChromecastPaths) {
@@ -372,6 +379,7 @@ void LoadArmGpuLibraries() {
     // Preload the Tegra V4L2 (video decode acceleration) library.
     dlopen(kLibTegraPath, dlopen_flag);
   }
+#endif
 }
 
 bool LoadAmdGpuLibraries() {
@@ -411,12 +419,14 @@ void LoadV4L2Libraries(
 }
 
 void LoadChromecastV4L2Libraries() {
+#if !defined(OS_BSD)
   for (const char* path : kWhitelistedChromecastPaths) {
     const std::string library_path(std::string(path) +
                                    std::string("libvpcodec.so"));
     if (dlopen(library_path.c_str(), dlopen_flag))
       break;
   }
+#endif
 }
 
 bool LoadLibrariesForGpu(
@@ -438,6 +448,7 @@ bool LoadLibrariesForGpu(
   return true;
 }
 
+#if !defined(OS_BSD)
 sandbox::syscall_broker::BrokerCommandSet CommandSetForGPU(
     const service_manager::SandboxLinux::Options& options) {
   sandbox::syscall_broker::BrokerCommandSet command_set;
@@ -459,13 +470,18 @@ bool BrokerProcessPreSandboxHook(
   service_manager::SetProcessTitleFromCommandLine(nullptr);
   return true;
 }
+#endif
 
 }  // namespace
 
 bool GpuProcessPreSandboxHook(service_manager::SandboxLinux::Options options) {
+#if defined(OS_BSD)
+  NOTIMPLEMENTED();
+#else
   service_manager::SandboxLinux::GetInstance()->StartBrokerProcess(
       CommandSetForGPU(options), FilePermissionsForGpu(options),
       base::BindOnce(BrokerProcessPreSandboxHook), options);
+#endif
 
   if (!LoadLibrariesForGpu(options))
     return false;
