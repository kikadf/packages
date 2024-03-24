$NetBSD$

* Part of patchset to build on NetBSD

--- chrome/browser/ui/actions/chrome_action_id.h.orig	2024-03-19 22:14:33.358086800 +0000
+++ chrome/browser/ui/actions/chrome_action_id.h
@@ -526,7 +526,7 @@
     IDC_CONTENT_CONTEXT_QUICK_ANSWERS_INLINE_ANSWER) \
   E(kActionContentContextQuickAnswersInlineQuery, \
     IDC_CONTENT_CONTEXT_QUICK_ANSWERS_INLINE_QUERY)
-#elif BUILDFLAG(IS_LINUX)
+#elif BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 #define CHROME_PLATFORM_SPECIFIC_ACTION_IDS \
   E(kUseSystemTitleBar, IDC_USE_SYSTEM_TITLE_BAR) \
   E(kRestoreWindow, IDC_RESTORE_WINDOW)
