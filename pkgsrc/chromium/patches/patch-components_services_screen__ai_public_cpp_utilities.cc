$NetBSD$

* Part of patchset to build on NetBSD

--- components/services/screen_ai/public/cpp/utilities.cc.orig	2024-03-19 22:14:40.542728000 +0000
+++ components/services/screen_ai/public/cpp/utilities.cc
@@ -34,7 +34,7 @@ constexpr char kScreenAIDlcRootPath[] =
 #endif
 
 #if BUILDFLAG(ENABLE_SCREEN_AI_BROWSERTESTS)
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 constexpr base::FilePath::CharType kScreenAIResourcePathForTests[] =
     FILE_PATH_LITERAL("third_party/screen-ai/linux/resources");
 #elif BUILDFLAG(IS_MAC)
