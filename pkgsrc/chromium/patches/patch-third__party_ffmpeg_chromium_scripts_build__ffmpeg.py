$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- third_party/ffmpeg/chromium/scripts/build_ffmpeg.py.orig	2024-04-30 23:47:39.092356700 +0000
+++ third_party/ffmpeg/chromium/scripts/build_ffmpeg.py
@@ -32,7 +32,7 @@ NDK_ROOT_DIR = os.path.abspath(
 SUCCESS_TOKEN = 'THIS_BUILD_WORKED'
 
 sys.path.append(os.path.join(CHROMIUM_ROOT_DIR, 'build'))
-import gn_helpers
+#import gn_helpers
 
 BRANDINGS = [
     'Chrome',
@@ -43,6 +43,9 @@ BRANDINGS = [
 ARCH_MAP = {
     'android': ['ia32', 'x64', 'arm-neon', 'arm64'],
     'linux': ['ia32', 'x64', 'noasm-x64', 'arm', 'arm-neon', 'arm64'],
+    'openbsd': ['x64', 'arm64', 'ia32'],
+    'freebsd': ['x64', 'arm64', 'ia32'],
+    'netbsd': ['x64', 'arm64', 'ia32'],
     'mac': ['x64', 'arm64'],
     'win': ['ia32', 'x64', 'arm64'],
 }
@@ -122,7 +125,7 @@ def PrintAndCheckCall(argv, *args, **kwa
 
 
 def GetDsoName(target_os, dso_name, dso_version):
-    if target_os in ('linux', 'linux-noasm', 'android'):
+    if target_os in ('linux', 'linux-noasm', 'android', 'openbsd', 'freebsd', 'netbsd'):
         return 'lib%s.so.%s' % (dso_name, dso_version)
     elif target_os == 'mac':
         return 'lib%s.%s.dylib' % (dso_name, dso_version)
@@ -474,7 +477,7 @@ def BuildFFmpeg(target_os, target_arch, 
     # removing <sys/sysctl.h> soon, so this is needed to silence a deprecation
     # #warning which will be converted to an error via -Werror.
     # There is also no prctl.h
-    if target_os in ['linux', 'linux-noasm']:
+    if target_os in ['linux', 'linux-noasm', 'openbsd', 'freebsd', 'netbsd']:
         pre_make_rewrites += [
             (r'(#define HAVE_SYSCTL [01])',
              r'#define HAVE_SYSCTL 0 /* \1 -- forced to 0 for Fuchsia */'),
@@ -597,7 +600,7 @@ def main(argv):
     configure_args = args[2:]
 
     if target_os not in ('android', 'linux', 'linux-noasm', 'mac', 'win',
-                         'all'):
+                         'all', 'openbsd', 'freebsd', 'netbsd'):
         parser.print_help()
         return 1
 
@@ -710,7 +713,7 @@ def ConfigureAndBuild(target_arch, targe
             '--optflags="-O2"',
         ])
 
-    if target_os in ('linux', 'linux-noasm', 'android'):
+    if target_os in ('linux', 'linux-noasm', 'android', 'openbsd', 'freebsd', 'netbsd'):
         if target_arch == 'x64':
             if target_os == 'android':
                 configure_flags['Common'].extend([
@@ -825,9 +828,6 @@ def ConfigureAndBuild(target_arch, targe
 
                 configure_flags['Common'].extend([
                     '--target-os=linux',
-                    '--sysroot=' +
-                    os.path.join(CHROMIUM_ROOT_DIR,
-                                 'build/linux/debian_bullseye_arm64-sysroot'),
                     # See crbug.com/1467681. These could be removed eventually
                     '--disable-dotprod',
                     '--disable-i8mm',
@@ -919,7 +919,7 @@ def ConfigureAndBuild(target_arch, targe
         # typically be the system one, so explicitly configure use of Clang's
         # ld.lld, to ensure that things like cross-compilation and LTO work.
         # This does not work for ia32 and is always used on mac.
-        if target_arch != 'ia32' and target_os != 'mac':
+        if target_arch != 'ia32' and target_os != 'mac' and target_os != 'netbsd':
             configure_flags['Common'].append('--extra-ldflags=-fuse-ld=lld')
 
     # Should be run on Mac, unless we're cross-compiling on Linux.
@@ -1031,7 +1031,7 @@ def ConfigureAndBuild(target_arch, targe
             'Chrome', configure_flags['Common'] +
             configure_flags['ChromeAndroid'] + configure_args)
 
-    if target_os in ['linux', 'linux-noasm']:
+    if target_os in ['linux', 'linux-noasm', 'openbsd', 'freebsd', 'netbsd']:
         # ChromeOS enables MPEG4 which requires error resilience :(
         chrome_os_flags = (configure_flags['Common'] +
                            configure_flags['Chrome'] +
