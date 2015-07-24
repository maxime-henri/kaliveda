# Install script for directory: /home/john/software/sources/kaliveda.git/FAZIA/geometry

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

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "libraries")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE FILE FILES
    "/home/john/software/build/kaliveda-build/1.10_R6/lib/libFAZIAgeometry_rdict.pcm"
    "/home/john/software/build/kaliveda-build/1.10_R6/lib/libFAZIAgeometry.rootmap"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "libraries")
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libFAZIAgeometry.so.1.10.02"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libFAZIAgeometry.so.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libFAZIAgeometry.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/john/software/build/kaliveda-build/1.10_R6/lib/libFAZIAgeometry.so.1.10.02"
    "/home/john/software/build/kaliveda-build/1.10_R6/lib/libFAZIAgeometry.so.1"
    "/home/john/software/build/kaliveda-build/1.10_R6/lib/libFAZIAgeometry.so"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libFAZIAgeometry.so.1.10.02"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libFAZIAgeometry.so.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libFAZIAgeometry.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_REMOVE
           FILE "${file}")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/usr/bin/strip" "${file}")
      endif()
    endif()
  endforeach()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "dev")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/kaliveda" TYPE FILE FILES
    "/home/john/software/sources/kaliveda.git/FAZIA/geometry/KVISOFAZIA.h"
    "/home/john/software/sources/kaliveda.git/FAZIA/geometry/KVSignal.h"
    "/home/john/software/sources/kaliveda.git/FAZIA/geometry/KVFAZIABlock.h"
    "/home/john/software/sources/kaliveda.git/FAZIA/geometry/KVPSAResult.h"
    "/home/john/software/sources/kaliveda.git/FAZIA/geometry/KVCurrentSignal.h"
    "/home/john/software/sources/kaliveda.git/FAZIA/geometry/KVDigitalFilter.h"
    "/home/john/software/sources/kaliveda.git/FAZIA/geometry/KVChargeSignal.h"
    "/home/john/software/sources/kaliveda.git/FAZIA/geometry/KVFAZIARawEvent.h"
    "/home/john/software/sources/kaliveda.git/FAZIA/geometry/KVINDRAFAZIA.h"
    "/home/john/software/sources/kaliveda.git/FAZIA/geometry/KVFAZIADetector.h"
    "/home/john/software/sources/kaliveda.git/FAZIA/geometry/KVFAZIA.h"
    "/home/john/software/sources/kaliveda.git/FAZIA/geometry/KVFAZIA_2B.h"
    "/home/john/software/sources/kaliveda.git/FAZIA/geometry/KVFAZIASYM.h"
    )
endif()

