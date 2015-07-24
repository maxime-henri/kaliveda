# Install script for directory: /home/john/software/sources/kaliveda.git/KVMultiDet

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kaliveda" TYPE DIRECTORY FILES "/home/john/software/sources/kaliveda.git/KVMultiDet/etc")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kaliveda/data" TYPE DIRECTORY FILES "/home/john/software/sources/kaliveda.git/KVMultiDet/data/")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kaliveda/examples/KVMultiDet" TYPE DIRECTORY FILES "/home/john/software/sources/kaliveda.git/KVMultiDet/examples/")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kaliveda/templates" TYPE DIRECTORY FILES "/home/john/software/sources/kaliveda.git/KVMultiDet/factory/")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/john/software/build/kaliveda-build/1.10_R6/KVMultiDet/events/cmake_install.cmake")
  include("/home/john/software/build/kaliveda-build/1.10_R6/KVMultiDet/geometry/cmake_install.cmake")
  include("/home/john/software/build/kaliveda-build/1.10_R6/KVMultiDet/calibration/cmake_install.cmake")
  include("/home/john/software/build/kaliveda-build/1.10_R6/KVMultiDet/stopping/cmake_install.cmake")
  include("/home/john/software/build/kaliveda-build/1.10_R6/KVMultiDet/globvars/cmake_install.cmake")
  include("/home/john/software/build/kaliveda-build/1.10_R6/KVMultiDet/daq_cec/cmake_install.cmake")
  include("/home/john/software/build/kaliveda-build/1.10_R6/KVMultiDet/exp_events/cmake_install.cmake")
  include("/home/john/software/build/kaliveda-build/1.10_R6/KVMultiDet/particles/cmake_install.cmake")
  include("/home/john/software/build/kaliveda-build/1.10_R6/KVMultiDet/trieur/cmake_install.cmake")
  include("/home/john/software/build/kaliveda-build/1.10_R6/KVMultiDet/analysis/cmake_install.cmake")
  include("/home/john/software/build/kaliveda-build/1.10_R6/KVMultiDet/base/cmake_install.cmake")
  include("/home/john/software/build/kaliveda-build/1.10_R6/KVMultiDet/db/cmake_install.cmake")
  include("/home/john/software/build/kaliveda-build/1.10_R6/KVMultiDet/gui/cmake_install.cmake")
  include("/home/john/software/build/kaliveda-build/1.10_R6/KVMultiDet/data_management/cmake_install.cmake")
  include("/home/john/software/build/kaliveda-build/1.10_R6/KVMultiDet/identification/cmake_install.cmake")

endif()

