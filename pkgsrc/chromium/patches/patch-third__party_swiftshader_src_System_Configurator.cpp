$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- third_party/swiftshader/src/System/Configurator.cpp.orig	2024-05-21 22:48:12.069152400 +0000
+++ third_party/swiftshader/src/System/Configurator.cpp
@@ -38,6 +38,9 @@ namespace sw {
 
 Configurator::Configurator(const std::string &filePath)
 {
+#if defined(__OpenBSD__) || defined(__FreeBSD__) || defined(__NetBSD__)
+	return;
+#endif
 	std::fstream file(filePath, std::ios::in);
 	if(file.fail())
 	{
