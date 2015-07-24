# Install script for directory: /home/john/software/sources/kaliveda.git/KVIndra/identification

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
    "/home/john/software/build/kaliveda-build/1.10_R6/lib/libKVIndraidentification_rdict.pcm"
    "/home/john/software/build/kaliveda-build/1.10_R6/lib/libKVIndraidentification.rootmap"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "libraries")
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKVIndraidentification.so.1.10.02"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKVIndraidentification.so.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKVIndraidentification.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/john/software/build/kaliveda-build/1.10_R6/lib/libKVIndraidentification.so.1.10.02"
    "/home/john/software/build/kaliveda-build/1.10_R6/lib/libKVIndraidentification.so.1"
    "/home/john/software/build/kaliveda-build/1.10_R6/lib/libKVIndraidentification.so"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKVIndraidentification.so.1.10.02"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKVIndraidentification.so.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKVIndraidentification.so"
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
    "/home/john/software/sources/kaliveda.git/KVIndra/identification/KVIDChIoSiCorr.h"
    "/home/john/software/sources/kaliveda.git/KVIndra/identification/KVIDChIoSi75_camp5.h"
    "/home/john/software/sources/kaliveda.git/KVIndra/identification/KVIDSiCorrCsI.h"
    "/home/john/software/sources/kaliveda.git/KVIndra/identification/KVIDChIoCsI.h"
    "/home/john/software/sources/kaliveda.git/KVIndra/identification/KVIDChIoSi_e613.h"
    "/home/john/software/sources/kaliveda.git/KVIndra/identification/KVINDRACodeMask.h"
    "/home/john/software/sources/kaliveda.git/KVIndra/identification/KVIDGChIoSi_e494s.h"
    "/home/john/software/sources/kaliveda.git/KVIndra/identification/KVIDSiLiCsI_e494s.h"
    "/home/john/software/sources/kaliveda.git/KVIndra/identification/KVIDSi75SiLi_e494s.h"
    "/home/john/software/sources/kaliveda.git/KVIndra/identification/KVIDCsI.h"
    "/home/john/software/sources/kaliveda.git/KVIndra/identification/KVIDChIoSiLi.h"
    "/home/john/software/sources/kaliveda.git/KVIndra/identification/KVIDSiLiCsI_camp5.h"
    "/home/john/software/sources/kaliveda.git/KVIndra/identification/KVINDRAIDTelescope.h"
    "/home/john/software/sources/kaliveda.git/KVIndra/identification/KVIDChIoSi.h"
    "/home/john/software/sources/kaliveda.git/KVIndra/identification/KVIDSiCsI_e613.h"
    "/home/john/software/sources/kaliveda.git/KVIndra/identification/KVIDCsIRLLine.h"
    "/home/john/software/sources/kaliveda.git/KVIndra/identification/KVIDSiCsI5.h"
    "/home/john/software/sources/kaliveda.git/KVIndra/identification/KVIDSi75SiLi_camp5.h"
    "/home/john/software/sources/kaliveda.git/KVIndra/identification/KVIDSiCsI.h"
    "/home/john/software/sources/kaliveda.git/KVIndra/identification/KVDP2toCsIGridConvertor.h"
    "/home/john/software/sources/kaliveda.git/KVIndra/identification/KVIDChIoCorrCsI.h"
    "/home/john/software/sources/kaliveda.git/KVIndra/identification/KVIDGCsI.h"
    "/home/john/software/sources/kaliveda.git/KVIndra/identification/KVIDCsI_e475s.h"
    "/home/john/software/sources/kaliveda.git/KVIndra/identification/KVIDGChIoSi.h"
    "/home/john/software/sources/kaliveda.git/KVIndra/identification/KVIDChIoSi75_e494s.h"
    "/home/john/software/sources/kaliveda.git/KVIndra/identification/KVIDChIoCorrCsI_e494s.h"
    "/home/john/software/sources/kaliveda.git/KVIndra/identification/KVIDChIoSi_e475s.h"
    "/home/john/software/sources/kaliveda.git/KVIndra/identification/KVIDSi75SiLi.h"
    "/home/john/software/sources/kaliveda.git/KVIndra/identification/KVINDRACodes.h"
    "/home/john/software/sources/kaliveda.git/KVIndra/identification/KVIDChIoCsI_camp5.h"
    "/home/john/software/sources/kaliveda.git/KVIndra/identification/KVIDSiLiCsI.h"
    "/home/john/software/sources/kaliveda.git/KVIndra/identification/KVIDSi150CsI_camp5.h"
    "/home/john/software/sources/kaliveda.git/KVIndra/identification/KVIDChIoSi75.h"
    "/home/john/software/sources/kaliveda.git/KVIndra/identification/KVIDPhoswich.h"
    "/home/john/software/sources/kaliveda.git/KVIndra/identification/KVIDChIoCsI_e475s.h"
    "/home/john/software/sources/kaliveda.git/KVIndra/identification/KVINDRARRMValidator.h"
    "/home/john/software/sources/kaliveda.git/KVIndra/identification/KVIDChIoSi5.h"
    "/home/john/software/sources/kaliveda.git/KVIndra/identification/KVIDSiCsI_e475s.h"
    "/home/john/software/sources/kaliveda.git/KVIndra/identification/KVIDBlocking.h"
    )
endif()

