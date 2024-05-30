$NetBSD$

* Part of patchset to build on NetBSD
* Based on OpenBSD's chromium patches

--- components/password_manager/core/browser/password_store/login_database_unittest.cc.orig	2024-05-21 22:42:58.533202600 +0000
+++ components/password_manager/core/browser/password_store/login_database_unittest.cc
@@ -2105,7 +2105,7 @@ INSTANTIATE_TEST_SUITE_P(MigrationToVCur
                          LoginDatabaseMigrationTestBroken,
                          testing::Values(1, 2, 3, 24));
 
-#if BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_IOS)
+#if BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_IOS) || BUILDFLAG(IS_BSD)
 class LoginDatabaseUndecryptableLoginsTest : public testing::Test {
  protected:
   LoginDatabaseUndecryptableLoginsTest() = default;
