$NetBSD$

* Part of patchset to build on NetBSD

--- components/qr_code_generator/features.h.orig	2024-03-06 00:14:48.782657900 +0000
+++ components/qr_code_generator/features.h
@@ -26,7 +26,11 @@ BASE_DECLARE_FEATURE(kRustyQrCodeGenerat
 // See https://crbug.com/1431991 for more details about the feature and the
 // Rust QR Code Generator project.
 inline bool IsRustyQrCodeGeneratorFeatureEnabled() {
+#ifdef notyet
   return base::FeatureList::IsEnabled(kRustyQrCodeGeneratorFeature);
+#else
+  return false;
+#endif
 }
 
 }  // namespace qr_code_generator