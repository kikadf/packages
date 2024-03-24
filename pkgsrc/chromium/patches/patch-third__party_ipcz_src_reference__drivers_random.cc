$NetBSD$

* Part of patchset to build on NetBSD

--- third_party/ipcz/src/reference_drivers/random.cc.orig	2024-03-19 22:15:15.009802800 +0000
+++ third_party/ipcz/src/reference_drivers/random.cc
@@ -14,7 +14,7 @@
 #include <windows.h>
 #elif BUILDFLAG(IS_FUCHSIA)
 #include <zircon/syscalls.h>
-#elif BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_ANDROID)
+#elif BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_ANDROID) || BUILDFLAG(IS_BSD)
 #include <asm/unistd.h>
 #include <sys/syscall.h>
 #include <unistd.h>
@@ -86,7 +86,7 @@ void RandomBytes(absl::Span<uint8_t> des
   process_prng_fn(destination.data(), destination.size());
 #elif BUILDFLAG(IS_FUCHSIA)
   zx_cprng_draw(destination.data(), destination.size());
-#elif BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_ANDROID)
+#elif BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_ANDROID) || BUILDFLAG(IS_BSD)
   while (!destination.empty()) {
     ssize_t result =
         syscall(__NR_getrandom, destination.data(), destination.size(), 0);
