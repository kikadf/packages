$NetBSD$

* Part of patchset to build on NetBSD

--- net/traffic_annotation/network_traffic_annotation.h.orig	2024-03-19 22:14:51.407697200 +0000
+++ net/traffic_annotation/network_traffic_annotation.h
@@ -373,7 +373,7 @@ struct MutablePartialNetworkTrafficAnnot
 }  // namespace net
 
 // Placeholder for unannotated usages.
-#if !BUILDFLAG(IS_WIN) && !BUILDFLAG(IS_LINUX) && !BUILDFLAG(IS_CHROMEOS)
+#if !BUILDFLAG(IS_WIN) && !BUILDFLAG(IS_LINUX) && !BUILDFLAG(IS_CHROMEOS) && !BUILDFLAG(IS_BSD)
 #define TRAFFIC_ANNOTATION_WITHOUT_PROTO(ANNOTATION_ID) \
   net::DefineNetworkTrafficAnnotation(ANNOTATION_ID, "No proto yet.")
 #endif
@@ -387,7 +387,7 @@ struct MutablePartialNetworkTrafficAnnot
 // TODO(crbug.com/1052397): Revisit once build flag switch of lacros-chrome is
 // complete.
 #if !BUILDFLAG(IS_WIN) && \
-    !(BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS_LACROS))
+    !(BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS_LACROS) || BUILDFLAG(IS_BSD))
 
 #define NO_TRAFFIC_ANNOTATION_YET \
   net::DefineNetworkTrafficAnnotation("undefined", "Nothing here yet.")
