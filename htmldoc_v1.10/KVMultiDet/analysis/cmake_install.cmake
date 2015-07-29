# Install script for directory: /home/john/software/sources/kaliveda.git/KVMultiDet/analysis

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE FILE FILES "/home/john/software/build/kaliveda-build/1.10_R5/lib/libKVMultiDetanalysis.rootmap")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "libraries")
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKVMultiDetanalysis.so.1.10.03"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKVMultiDetanalysis.so.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKVMultiDetanalysis.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/john/software/build/kaliveda-build/1.10_R5/lib/libKVMultiDetanalysis.so.1.10.03"
    "/home/john/software/build/kaliveda-build/1.10_R5/lib/libKVMultiDetanalysis.so.1"
    "/home/john/software/build/kaliveda-build/1.10_R5/lib/libKVMultiDetanalysis.so"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKVMultiDetanalysis.so.1.10.03"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKVMultiDetanalysis.so.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKVMultiDetanalysis.so"
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
    "/home/john/software/sources/kaliveda.git/KVMultiDet/analysis/KVGaus1D.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/analysis/KVLinuxBatch.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/analysis/KV_CCIN2P3_BQS.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/analysis/KVSimReader_SMF_asym.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/analysis/KVEventSelector.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/analysis/KVSimReader_HIPSE_asym.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/analysis/KVDataAnalyser.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/analysis/KVSimReader_HIPSE.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/analysis/KVSimReader_ELIE.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/analysis/KVBatchSystem.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/analysis/KVDataTransfer.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/analysis/KVAutoFit.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/analysis/KVDataTransferSFTP.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/analysis/KVSimReader_MMM.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/analysis/KVBatchJob.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/analysis/KVDataTransferBBFTP.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/analysis/KVSimReader_SMF.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/analysis/KVDataPatch.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/analysis/KV_CCIN2P3_GE.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/analysis/KVGaxis.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/analysis/KVSimReader_MMM_asym.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/analysis/KVGraph.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/analysis/KVDataTransferXRD.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/analysis/KVBatchSystemManager.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/analysis/KVRootBatch.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/analysis/KVSimReader.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/analysis/KVGaus2D.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/analysis/KVGumGumDistribution.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/analysis/KVGEBatchJob.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/analysis/KVDataPatchList.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/analysis/KVGausGumDistribution.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/analysis/KVGumbelDistribution.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/analysis/KVImpactParameter.h"
    )
endif()

