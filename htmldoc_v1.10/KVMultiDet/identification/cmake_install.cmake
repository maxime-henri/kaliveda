# Install script for directory: /home/john/software/sources/kaliveda.git/KVMultiDet/identification

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE FILE FILES "/home/john/software/build/kaliveda-build/1.10_R5/lib/libKVMultiDetidentification.rootmap")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "libraries")
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKVMultiDetidentification.so.1.10.02"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKVMultiDetidentification.so.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKVMultiDetidentification.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/john/software/build/kaliveda-build/1.10_R5/lib/libKVMultiDetidentification.so.1.10.02"
    "/home/john/software/build/kaliveda-build/1.10_R5/lib/libKVMultiDetidentification.so.1"
    "/home/john/software/build/kaliveda-build/1.10_R5/lib/libKVMultiDetidentification.so"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKVMultiDetidentification.so.1.10.02"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKVMultiDetidentification.so.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKVMultiDetidentification.so"
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
    "/home/john/software/sources/kaliveda.git/KVMultiDet/identification/KVTGIDFunctions.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/identification/KVIDLine.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/identification/KVSpiderPSALine.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/identification/KVSpiderLine.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/identification/KVIdentificationResult.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/identification/KVIDContour.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/identification/KVTGIDZA.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/identification/KVTGIDFitter.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/identification/KVIDCutContour.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/identification/KVIDGrid.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/identification/KVTGIDManager.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/identification/KVIDZAGrid.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/identification/KVIDentifier.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/identification/KVTGIDZ.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/identification/KVVirtualIDFitter.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/identification/KVIDZALine.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/identification/KVDroite.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/identification/KVDP2toIDGridConvertor.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/identification/KVIDZAContour.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/identification/KVIDMap.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/identification/KVTGID.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/identification/KVTGIDGrid.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/identification/KVIDGraph.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/identification/KVIDSubCodeManager.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/identification/KVIDGridManager.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/identification/KVIDCutLine.h"
    )
endif()

