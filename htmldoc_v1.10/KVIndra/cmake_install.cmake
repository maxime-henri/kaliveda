# Install script for directory: /home/john/software/sources/kaliveda.git/KVIndra

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kaliveda" TYPE DIRECTORY FILES "/home/john/software/sources/kaliveda.git/KVIndra/etc")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kaliveda/data" TYPE DIRECTORY FILES "/home/john/software/sources/kaliveda.git/KVIndra/data/")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kaliveda/templates" TYPE DIRECTORY FILES "/home/john/software/sources/kaliveda.git/KVIndra/factory/")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kaliveda" TYPE DIRECTORY FILES "/home/john/software/sources/kaliveda.git/KVIndra/INDRA_camp4")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kaliveda/INDRA_camp4" TYPE FILE RENAME "Makefile" FILES "/home/john/software/build/kaliveda-build/1.10_R6/KVIndra/INDRA_camp4_Makefile")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kaliveda" TYPE DIRECTORY FILES "/home/john/software/sources/kaliveda.git/KVIndra/INDRA_e416a")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kaliveda/INDRA_e416a" TYPE FILE RENAME "Makefile" FILES "/home/john/software/build/kaliveda-build/1.10_R6/KVIndra/INDRA_e416a_Makefile")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kaliveda" TYPE DIRECTORY FILES "/home/john/software/sources/kaliveda.git/KVIndra/INDRA_camp2")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kaliveda/INDRA_camp2" TYPE FILE RENAME "Makefile" FILES "/home/john/software/build/kaliveda-build/1.10_R6/KVIndra/INDRA_camp2_Makefile")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kaliveda" TYPE DIRECTORY FILES "/home/john/software/sources/kaliveda.git/KVIndra/INDRA_camp5")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kaliveda/INDRA_camp5" TYPE FILE RENAME "Makefile" FILES "/home/john/software/build/kaliveda-build/1.10_R6/KVIndra/INDRA_camp5_Makefile")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kaliveda" TYPE DIRECTORY FILES "/home/john/software/sources/kaliveda.git/KVIndra/INDRA_e503")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kaliveda/INDRA_e503" TYPE FILE RENAME "Makefile" FILES "/home/john/software/build/kaliveda-build/1.10_R6/KVIndra/INDRA_e503_Makefile")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kaliveda" TYPE DIRECTORY FILES "/home/john/software/sources/kaliveda.git/KVIndra/INDRA_e494s")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kaliveda/INDRA_e494s" TYPE FILE RENAME "Makefile" FILES "/home/john/software/build/kaliveda-build/1.10_R6/KVIndra/INDRA_e494s_Makefile")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kaliveda" TYPE DIRECTORY FILES "/home/john/software/sources/kaliveda.git/KVIndra/INDRA_e613")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kaliveda/INDRA_e613" TYPE FILE RENAME "Makefile" FILES "/home/john/software/build/kaliveda-build/1.10_R6/KVIndra/INDRA_e613_Makefile")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kaliveda" TYPE DIRECTORY FILES "/home/john/software/sources/kaliveda.git/KVIndra/INDRA_camp1")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kaliveda/INDRA_camp1" TYPE FILE RENAME "Makefile" FILES "/home/john/software/build/kaliveda-build/1.10_R6/KVIndra/INDRA_camp1_Makefile")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kaliveda" TYPE DIRECTORY FILES "/home/john/software/sources/kaliveda.git/KVIndra/INDRA_e475s")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kaliveda/INDRA_e475s" TYPE FILE RENAME "Makefile" FILES "/home/john/software/build/kaliveda-build/1.10_R6/KVIndra/INDRA_e475s_Makefile")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kaliveda" TYPE DIRECTORY FILES "/home/john/software/sources/kaliveda.git/KVIndra/t10_02")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kaliveda/t10_02" TYPE FILE RENAME "Makefile" FILES "/home/john/software/build/kaliveda-build/1.10_R6/KVIndra/t10_02_Makefile")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/john/software/build/kaliveda-build/1.10_R6/KVIndra/geometry/cmake_install.cmake")
  include("/home/john/software/build/kaliveda-build/1.10_R6/KVIndra/calibration/cmake_install.cmake")
  include("/home/john/software/build/kaliveda-build/1.10_R6/KVIndra/daq_cec/cmake_install.cmake")
  include("/home/john/software/build/kaliveda-build/1.10_R6/KVIndra/exp_events/cmake_install.cmake")
  include("/home/john/software/build/kaliveda-build/1.10_R6/KVIndra/analysis/cmake_install.cmake")
  include("/home/john/software/build/kaliveda-build/1.10_R6/KVIndra/db/cmake_install.cmake")
  include("/home/john/software/build/kaliveda-build/1.10_R6/KVIndra/gui/cmake_install.cmake")
  include("/home/john/software/build/kaliveda-build/1.10_R6/KVIndra/identification/cmake_install.cmake")

endif()

