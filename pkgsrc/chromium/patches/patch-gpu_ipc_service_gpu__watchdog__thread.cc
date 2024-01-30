$NetBSD$

--- gpu/ipc/service/gpu_watchdog_thread.cc.orig	2020-07-08 21:41:48.000000000 +0000
+++ gpu/ipc/service/gpu_watchdog_thread.cc
@@ -54,7 +54,7 @@ const int kNewGpuTimeout = 17000;
 const int kNewGpuTimeout = 15000;
 #endif
 
-#if defined(USE_X11)
+#if defined(USE_X11) && !defined(OS_BSD)
 const base::FilePath::CharType kTtyFilePath[] =
     FILE_PATH_LITERAL("/sys/class/tty/tty0/active");
 #endif
@@ -72,7 +72,7 @@ GpuWatchdogThreadImplV1::GpuWatchdogThre
       arm_cpu_time_(),
 #endif
       suspension_counter_(this)
-#if defined(USE_X11)
+#if defined(USE_X11) && !defined(OS_BSD)
       ,
       host_tty_(-1)
 #endif
@@ -94,7 +94,7 @@ GpuWatchdogThreadImplV1::GpuWatchdogThre
   DCHECK(result);
 #endif
 
-#if defined(USE_X11)
+#if defined(USE_X11) && !defined(OS_BSD)
   tty_file_ = base::OpenFile(base::FilePath(kTtyFilePath), "r");
   UpdateActiveTTY();
   host_tty_ = active_tty_;
@@ -236,7 +236,7 @@ GpuWatchdogThreadImplV1::~GpuWatchdogThr
 
   base::PowerMonitor::RemoveObserver(this);
 
-#if defined(USE_X11)
+#if defined(USE_X11) && !defined(OS_BSD)
   if (tty_file_)
     fclose(tty_file_);
 #endif
@@ -385,7 +385,7 @@ void GpuWatchdogThreadImplV1::Deliberate
     return;
 #endif
 
-#if defined(USE_X11)
+#if defined(USE_X11) && !defined(OS_BSD)
   // Don't crash if we're not on the TTY of our host X11 server.
   UpdateActiveTTY();
   if (host_tty_ != -1 && active_tty_ != -1 && host_tty_ != active_tty_) {
@@ -541,7 +541,7 @@ base::ThreadTicks GpuWatchdogThreadImplV
 }
 #endif
 
-#if defined(USE_X11)
+#if defined(USE_X11) && !defined(OS_BSD)
 void GpuWatchdogThreadImplV1::UpdateActiveTTY() {
   last_active_tty_ = active_tty_;
 
