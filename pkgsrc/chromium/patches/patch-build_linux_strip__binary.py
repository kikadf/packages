$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- build/linux/strip_binary.py.orig	2024-03-26 21:36:30.539287300 +0000
+++ build/linux/strip_binary.py
@@ -10,6 +10,7 @@ import sys
 
 
 def main():
+  return 0
   argparser = argparse.ArgumentParser(description='eu-strip binary.')
 
   argparser.add_argument('--eu-strip-binary-path', help='eu-strip path.')
