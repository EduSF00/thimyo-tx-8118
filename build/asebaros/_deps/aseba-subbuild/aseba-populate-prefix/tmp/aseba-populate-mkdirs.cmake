# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/home/eduardo/TX/build/asebaros/_deps/aseba-src"
  "/home/eduardo/TX/build/asebaros/_deps/aseba-build"
  "/home/eduardo/TX/build/asebaros/_deps/aseba-subbuild/aseba-populate-prefix"
  "/home/eduardo/TX/build/asebaros/_deps/aseba-subbuild/aseba-populate-prefix/tmp"
  "/home/eduardo/TX/build/asebaros/_deps/aseba-subbuild/aseba-populate-prefix/src/aseba-populate-stamp"
  "/home/eduardo/TX/build/asebaros/_deps/aseba-subbuild/aseba-populate-prefix/src"
  "/home/eduardo/TX/build/asebaros/_deps/aseba-subbuild/aseba-populate-prefix/src/aseba-populate-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/home/eduardo/TX/build/asebaros/_deps/aseba-subbuild/aseba-populate-prefix/src/aseba-populate-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/home/eduardo/TX/build/asebaros/_deps/aseba-subbuild/aseba-populate-prefix/src/aseba-populate-stamp${cfgdir}") # cfgdir has leading slash
endif()
