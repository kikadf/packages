$NetBSD$

* Part of patchset to build on NetBSD

--- content/browser/scheduler/responsiveness/native_event_observer.cc.orig	2024-03-19 22:14:43.086954800 +0000
+++ content/browser/scheduler/responsiveness/native_event_observer.cc
@@ -15,7 +15,7 @@
 
 #include "ui/events/platform/platform_event_source.h"
 
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
 #include "ui/aura/env.h"
 #include "ui/events/event.h"
 #endif
@@ -39,7 +39,7 @@ NativeEventObserver::~NativeEventObserve
   DeregisterObserver();
 }
 
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
 void NativeEventObserver::RegisterObserver() {
   aura::Env::GetInstance()->AddWindowEventDispatcherObserver(this);
 }
