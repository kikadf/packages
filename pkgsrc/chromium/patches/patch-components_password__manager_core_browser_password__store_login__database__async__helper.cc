$NetBSD$

* Part of patchset to build on NetBSD

--- components/password_manager/core/browser/password_store/login_database_async_helper.cc.orig	2024-03-06 00:14:47.906581900 +0000
+++ components/password_manager/core/browser/password_store/login_database_async_helper.cc
@@ -135,7 +135,7 @@ LoginsResultOrError LoginDatabaseAsyncHe
     std::vector<PasswordForm> matched_forms;
     if (!login_db_ ||
         !login_db_->GetLogins(form, include_psl, &matched_forms)) {
-#if BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
       return PasswordStoreBackendError(
           OSCrypt::IsEncryptionAvailable()
               ? PasswordStoreBackendErrorType::kUncategorized
