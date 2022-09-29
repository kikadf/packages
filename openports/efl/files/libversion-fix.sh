#!/bin/sh

for _lib in libpulse libsndfile libcurl; do
       _fixedlib=$(basename $(ls /usr/local/lib/${_lib}.so*))
       print "Replace hardcoded libversion to $_fixedlib"
       sed -i "s/${_lib}.so.[0-9]/$_fixedlib/" \
              src/lib/ecore_audio/ecore_audio.c \
              src/lib/ecore_con/ecore_con_url_curl.c || exit 1
done

exit 0
