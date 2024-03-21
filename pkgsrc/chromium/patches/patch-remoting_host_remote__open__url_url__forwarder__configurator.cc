$NetBSD$

* Part of patchset to build on NetBSD

--- remoting/host/remote_open_url/url_forwarder_configurator.cc.orig	2024-03-06 00:14:57.423408000 +0000
+++ remoting/host/remote_open_url/url_forwarder_configurator.cc
@@ -12,7 +12,7 @@ UrlForwarderConfigurator::UrlForwarderCo
 
 UrlForwarderConfigurator::~UrlForwarderConfigurator() = default;
 
-#if !BUILDFLAG(IS_LINUX) && !BUILDFLAG(IS_WIN)
+#if !BUILDFLAG(IS_LINUX) && !BUILDFLAG(IS_WIN) && !BUILDFLAG(IS_BSD)
 
 // static
 std::unique_ptr<UrlForwarderConfigurator> UrlForwarderConfigurator::Create() {
