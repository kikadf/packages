$NetBSD$

--- components/qr_code_generator/features.cc.orig	2024-03-06 00:14:48.782657900 +0000
+++ components/qr_code_generator/features.cc
@@ -11,6 +11,10 @@ namespace qr_code_generator {
 
 BASE_FEATURE(kRustyQrCodeGeneratorFeature,
              "RustyQrCodeGenerator",
+#if BUILDFLAG(IS_BSD)
+             base::FEATURE_DISABLED_BY_DEFAULT);
+#else
              base::FEATURE_ENABLED_BY_DEFAULT);
+#endif
 
 }  // namespace qr_code_generator
