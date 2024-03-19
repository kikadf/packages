$NetBSD$

--- content/ppapi_plugin/ppapi_blink_platform_impl.h.orig	2024-03-06 00:14:51.206868400 +0000
+++ content/ppapi_plugin/ppapi_blink_platform_impl.h
@@ -34,7 +34,7 @@ class PpapiBlinkPlatformImpl : public Bl
   blink::WebString DefaultLocale() override;
 
  private:
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_MAC)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_BSD)
   std::unique_ptr<blink::WebSandboxSupport> sandbox_support_;
 #endif
 };
