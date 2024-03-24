$NetBSD$

* Part of patchset to build on NetBSD

--- ui/views/examples/widget_example.cc.orig	2024-03-19 22:15:27.690934200 +0000
+++ ui/views/examples/widget_example.cc
@@ -49,7 +49,7 @@ void WidgetExample::CreateExampleView(Vi
   modal_button->SetCallback(
       base::BindRepeating(&WidgetExample::CreateDialogWidget,
                           base::Unretained(this), modal_button, true));
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
   // Windows does not support TYPE_CONTROL top-level widgets.
   LabelButton* control_button = BuildButton(
       container, GetStringUTF16(IDS_WIDGET_CHILD_WIDGET_BUTTON_LABEL));
