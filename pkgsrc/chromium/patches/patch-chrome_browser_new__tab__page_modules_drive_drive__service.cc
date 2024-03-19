$NetBSD$

--- chrome/browser/new_tab_page/modules/drive/drive_service.cc.orig	2024-03-06 00:14:41.426019200 +0000
+++ chrome/browser/new_tab_page/modules/drive/drive_service.cc
@@ -32,7 +32,7 @@
 #include "services/network/public/cpp/resource_request.h"
 
 namespace {
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 constexpr char kPlatform[] = "LINUX";
 #elif BUILDFLAG(IS_WIN)
 constexpr char kPlatform[] = "WINDOWS";
