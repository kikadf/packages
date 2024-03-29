$NetBSD$

* Part of patchset to build on NetBSD

--- base/profiler/thread_delegate_posix.cc.orig	2024-03-19 22:14:27.165534500 +0000
+++ base/profiler/thread_delegate_posix.cc
@@ -13,7 +13,7 @@
 #include "build/build_config.h"
 #include "third_party/abseil-cpp/absl/types/optional.h"
 
-#if !(BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS))
+#if !(BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD))
 #include "base/profiler/stack_base_address_posix.h"
 #endif
 
@@ -22,7 +22,7 @@ namespace base {
 std::unique_ptr<ThreadDelegatePosix> ThreadDelegatePosix::Create(
     SamplingProfilerThreadToken thread_token) {
   absl::optional<uintptr_t> base_address;
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
   base_address = thread_token.stack_base_address;
 #else
   base_address =
