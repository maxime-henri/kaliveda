# Install script for directory: /home/john/software/sources/kaliveda.git/KVMultiDet/base

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE FILE FILES "/home/john/software/build/kaliveda-build/1.10_R5/lib/libKVMultiDetbase.rootmap")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "libraries")
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKVMultiDetbase.so.1.10.03"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKVMultiDetbase.so.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKVMultiDetbase.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/john/software/build/kaliveda-build/1.10_R5/lib/libKVMultiDetbase.so.1.10.03"
    "/home/john/software/build/kaliveda-build/1.10_R5/lib/libKVMultiDetbase.so.1"
    "/home/john/software/build/kaliveda-build/1.10_R5/lib/libKVMultiDetbase.so"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKVMultiDetbase.so.1.10.03"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKVMultiDetbase.so.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKVMultiDetbase.so"
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
    "/home/john/software/sources/kaliveda.git/KVMultiDet/base/KVRungeKutta.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/base/KVDatime.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/base/KVPartition.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/base/KVNamedParameter.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/base/KVCouple.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/base/KVSystemDirectory.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/base/KVPartitionList.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/base/KVRList.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/base/KVDatedFileManager.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/base/KVClassMonitor.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/base/KVCVSUpdateChecker.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/base/KVBase.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/base/KVBQSLogReader.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/base/KVTarArchive.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/base/KVGELogReader.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/base/KVHistogram.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/base/KVMemoryChunk.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/base/KVLockfile.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/base/KVPartitionFunction.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/base/Hexa_t.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/base/KVValues.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/base/KVNameValueList.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/base/KVHistoManipulator.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/base/KVPosition.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/base/KVUnits.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/base/KVString.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/base/KVSeqCollection.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/base/Binary_t.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/base/KVColouredBase.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/base/KVUniqueNameList.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/base/KVUpdateChecker.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/base/KVDataBranchHandler.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/base/KVEnv.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/base/KVNumberList.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/base/KVIntegerList.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/base/KVEventListMaker.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/base/KVList.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/base/KVSystemFile.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/base/KVHashList.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/base/KVLogReader.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/base/KVFileReader.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/base/KVPartitionFromLeaf.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/base/KVMemoryPool.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/base/KVClassFactory.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/base/KVPartitionGenerator.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/base/KVError.h"
    )
endif()

