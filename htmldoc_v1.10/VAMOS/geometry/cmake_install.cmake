# Install script for directory: /home/john/software/sources/kaliveda.git/VAMOS/geometry

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/john/.kvroot-1.10_gcc-4.9.1_x86_64_root-5.34")
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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE FILE FILES "/home/john/software/build/kaliveda-build/1.10_R5/lib/libVAMOSgeometry.rootmap")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "libraries")
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libVAMOSgeometry.so.1.10.03"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libVAMOSgeometry.so.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libVAMOSgeometry.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/john/software/build/kaliveda-build/1.10_R5/lib/libVAMOSgeometry.so.1.10.03"
    "/home/john/software/build/kaliveda-build/1.10_R5/lib/libVAMOSgeometry.so.1"
    "/home/john/software/build/kaliveda-build/1.10_R5/lib/libVAMOSgeometry.so"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libVAMOSgeometry.so.1.10.03"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libVAMOSgeometry.so.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libVAMOSgeometry.so"
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
    "/home/john/software/sources/kaliveda.git/VAMOS/geometry/KVSiliconVamos.h"
    "/home/john/software/sources/kaliveda.git/VAMOS/geometry/DriftChamber.h"
    "/home/john/software/sources/kaliveda.git/VAMOS/geometry/KVSpectroDetector.h"
    "/home/john/software/sources/kaliveda.git/VAMOS/geometry/IonisationChamber.h"
    "/home/john/software/sources/kaliveda.git/VAMOS/geometry/KVCsIVamos.h"
    "/home/john/software/sources/kaliveda.git/VAMOS/geometry/Sive503.h"
    "/home/john/software/sources/kaliveda.git/VAMOS/geometry/IonisationChamberv.h"
    "/home/john/software/sources/kaliveda.git/VAMOS/geometry/DriftChamberv.h"
    "/home/john/software/sources/kaliveda.git/VAMOS/geometry/SeD12v.h"
    "/home/john/software/sources/kaliveda.git/VAMOS/geometry/PlaneAbsorber.h"
    "/home/john/software/sources/kaliveda.git/VAMOS/geometry/Siv.h"
    "/home/john/software/sources/kaliveda.git/VAMOS/geometry/SeDv.h"
    "/home/john/software/sources/kaliveda.git/VAMOS/geometry/CsIv.h"
    )
endif()

