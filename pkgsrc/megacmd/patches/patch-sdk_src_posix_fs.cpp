$NetBSD$

* Add NetBSD support

--- sdk/src/posix/fs.cpp.orig	2023-05-02 16:07:05.000000000 +0000
+++ sdk/src/posix/fs.cpp
@@ -1924,10 +1924,16 @@ ScanResult PosixFileSystemAccess::direct
 #ifdef ENABLE_SYNC
 fsfp_t PosixFileSystemAccess::fsFingerprint(const LocalPath& path) const
 {
+#if defined(__NetBSD__)
+    struct statvfs statfsbuf;
+
+    if (statvfs(path.localpath.c_str(), &statfsbuf))
+#else
     struct statfs statfsbuf;
 
     // FIXME: statfs() does not really do what we want.
     if (statfs(path.localpath.c_str(), &statfsbuf))
+#endif
     {
         int e = errno;
         LOG_err << "statfs() failed, errno " << e << " while processing path " << path;
@@ -2255,10 +2261,18 @@ bool isReservedName(const string&, nodet
 // saturating that quota.
 m_off_t PosixFileSystemAccess::availableDiskSpace(const LocalPath& drivePath)
 {
+#if defined(__NetBSD__)
+    struct statvfs buffer;
+#else
     struct statfs buffer;
+#endif
     m_off_t constexpr maximumBytes = std::numeric_limits<m_off_t>::max();
 
+#if defined(__NetBSD__)
+    if (statvfs(adjustBasePath(drivePath).c_str(), &buffer) < 0)
+#else
     if (statfs(adjustBasePath(drivePath).c_str(), &buffer) < 0)
+#endif
     {
         auto result = errno;
 
@@ -2270,7 +2284,11 @@ m_off_t PosixFileSystemAccess::available
         return maximumBytes;
     }
 
+#if defined(__NetBSD__)
+    uint64_t availableBytes = buffer.f_bavail * (uint64_t)buffer.f_frsize;
+#else
     uint64_t availableBytes = buffer.f_bavail * (uint64_t)buffer.f_bsize;
+#endif
 
     if (availableBytes >= (uint64_t)maximumBytes)
         return maximumBytes;
