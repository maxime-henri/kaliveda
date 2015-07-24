# Install script for directory: /home/john/software/sources/kaliveda.git

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/john/.kvroot-1.10_gcc-4.9.2_x86_64_root-6.04")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "RelWithDebInfo")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/kaliveda" TYPE FILE FILES "/home/john/software/build/kaliveda-build/1.10_R6/KVVersion.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "headers")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/kaliveda" TYPE FILE FILES "/home/john/software/build/kaliveda-build/1.10_R6/KVConfig.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kaliveda/etc" TYPE FILE FILES "/home/john/software/sources/kaliveda.git/etc/standard.rootrc")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kaliveda/etc" TYPE FILE FILES "/home/john/software/build/kaliveda-build/1.10_R6/etc/config.files")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE PROGRAM FILES "/home/john/software/build/kaliveda-build/1.10_R6/kaliveda-config")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE PROGRAM FILES
    "/home/john/software/sources/kaliveda.git/tools/SetUpKaliVeda.sh"
    "/home/john/software/sources/kaliveda.git/tools/SetUpROOT.sh"
    "/home/john/software/sources/kaliveda.git/tools/WhichROOT"
    "/home/john/software/sources/kaliveda.git/tools/SetUpKaliVeda.csh"
    "/home/john/software/sources/kaliveda.git/tools/SetUpROOT.csh"
    "/home/john/software/sources/kaliveda.git/tools/SetUpKaliVedaDirectories.sh"
    "/home/john/software/sources/kaliveda.git/tools/SetUpROOTDirectories.sh"
    "/home/john/software/sources/kaliveda.git/tools/WhichKaliVeda"
    "/home/john/software/sources/kaliveda.git/tools/thiskaliveda.sh"
    "/home/john/software/sources/kaliveda.git/tools/thiskaliveda.csh"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kaliveda/etc" TYPE FILE RENAME "nedit.cf" FILES "/home/john/software/sources/kaliveda.git/tools/.nedit")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kaliveda/etc" TYPE FILE FILES "/home/john/software/sources/kaliveda.git/tools/kaliveda.m4")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/kaliveda/KaliVeda-targets.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/kaliveda/KaliVeda-targets.cmake"
         "/home/john/software/build/kaliveda-build/1.10_R6/CMakeFiles/Export/lib/kaliveda/KaliVeda-targets.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/kaliveda/KaliVeda-targets-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/kaliveda/KaliVeda-targets.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/kaliveda" TYPE FILE FILES "/home/john/software/build/kaliveda-build/1.10_R6/CMakeFiles/Export/lib/kaliveda/KaliVeda-targets.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/kaliveda" TYPE FILE FILES "/home/john/software/build/kaliveda-build/1.10_R6/CMakeFiles/Export/lib/kaliveda/KaliVeda-targets-relwithdebinfo.cmake")
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/kaliveda" TYPE FILE FILES
    "/home/john/software/build/kaliveda-build/1.10_R6/KaliVedaConfig.cmake"
    "/home/john/software/build/kaliveda-build/1.10_R6/KaliVedaConfigVersion.cmake"
    "/home/john/software/sources/kaliveda.git/cmake/KaliVedaUseFile.cmake"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man" TYPE DIRECTORY FILES "/home/john/software/sources/kaliveda.git/man/")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/john/software/build/kaliveda-build/1.10_R6/GanTape/cmake_install.cmake")
  include("/home/john/software/build/kaliveda-build/1.10_R6/fitltg-0.1/cmake_install.cmake")
  include("/home/john/software/build/kaliveda-build/1.10_R6/KVMultiDet/cmake_install.cmake")
  include("/home/john/software/build/kaliveda-build/1.10_R6/BackTrack/cmake_install.cmake")
  include("/home/john/software/build/kaliveda-build/1.10_R6/execs/cmake_install.cmake")
  include("/home/john/software/build/kaliveda-build/1.10_R6/etc/proof/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

file(WRITE "/home/john/software/build/kaliveda-build/1.10_R6/${CMAKE_INSTALL_MANIFEST}" "")
foreach(file ${CMAKE_INSTALL_MANIFEST_FILES})
  file(APPEND "/home/john/software/build/kaliveda-build/1.10_R6/${CMAKE_INSTALL_MANIFEST}" "${file}\n")
endforeach()
