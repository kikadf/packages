$NetBSD$

* Part of patchset to build on NetBSD

--- ui/base/x/x11_util.cc.orig	2024-03-19 22:15:27.006873100 +0000
+++ ui/base/x/x11_util.cc
@@ -699,4 +699,20 @@ gfx::ImageSkia GetNativeWindowIcon(intpt
   return gfx::ImageSkia::CreateFrom1xBitmap(result);
 }
 
+gfx::ICCProfile GetICCProfileForMonitor(int monitor) {
+  gfx::ICCProfile icc_profile;
+  if (base::CommandLine::ForCurrentProcess()->HasSwitch(switches::kHeadless)) {
+    return icc_profile;
+  }
+  std::string atom_name = monitor == 0
+                              ? "_ICC_PROFILE"
+                              : base::StringPrintf("_ICC_PROFILE_%d", monitor);
+  scoped_refptr<base::RefCountedMemory> data;
+  if (GetRawBytesOfProperty(GetX11RootWindow(), x11::GetAtom(atom_name.c_str()),
+                            &data, nullptr)) {
+    icc_profile = gfx::ICCProfile::FromData(data->data(), data->size());
+  }
+  return icc_profile;
+}
+
 }  // namespace ui
