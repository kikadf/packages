$NetBSD$

* Part of patchset to build on NetBSD

--- chrome/browser/ui/omnibox/omnibox_pedal_implementations.cc.orig	2024-03-19 22:14:33.946139300 +0000
+++ chrome/browser/ui/omnibox/omnibox_pedal_implementations.cc
@@ -2005,7 +2005,7 @@ const gfx::VectorIcon& GetSharingHubVect
                  OmniboxFieldTrial::IsChromeRefreshActionChipIconsEnabled()
              ? omnibox::kShareWinChromeRefreshIcon
              : omnibox::kShareWinIcon;
-#elif BUILDFLAG(IS_LINUX)
+#elif BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   return OmniboxFieldTrial::IsChromeRefreshIconsEnabled() ||
                  OmniboxFieldTrial::IsChromeRefreshActionChipIconsEnabled()
              ? omnibox::kShareLinuxChromeRefreshIcon
