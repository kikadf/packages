$NetBSD$

--- third_party/swiftshader/src/Main/SwiftConfig.cpp.orig	2020-07-15 19:01:39.000000000 +0000
+++ third_party/swiftshader/src/Main/SwiftConfig.cpp
@@ -764,7 +764,11 @@ namespace sw
 		struct stat status;
 		int lastModified = ini.getInteger("LastModified", "Time", 0);
 
+#if defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__)
+		bool noConfig = false;
+#else
 		bool noConfig = stat("SwiftShader.ini", &status) != 0;
+#endif
 		newConfig = !noConfig && abs((int)status.st_mtime - lastModified) > 1;
 
 		if(disableServerOverride)
