$NetBSD$

* Part of patchset to build on NetBSD

--- build/linux/strip_binary.py.orig	2024-03-19 22:14:27.437558700 +0000
+++ build/linux/strip_binary.py
@@ -10,6 +10,7 @@ import sys
 
 
 def main():
+  return 0
   argparser = argparse.ArgumentParser(description='eu-strip binary.')
 
   argparser.add_argument('--eu-strip-binary-path', help='eu-strip path.')
