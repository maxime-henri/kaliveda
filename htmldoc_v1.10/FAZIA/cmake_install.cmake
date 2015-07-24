# Install script for directory: /home/john/software/sources/kaliveda.git/FAZIA

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kaliveda" TYPE DIRECTORY FILES "/home/john/software/sources/kaliveda.git/FAZIA/etc")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kaliveda/data" TYPE DIRECTORY FILES "/home/john/software/sources/kaliveda.git/FAZIA/data/")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kaliveda/templates" TYPE DIRECTORY FILES "/home/john/software/sources/kaliveda.git/FAZIA/factory/")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kaliveda" TYPE DIRECTORY FILES "/home/john/software/sources/kaliveda.git/FAZIA/LNS_2014")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kaliveda/LNS_2014" TYPE FILE RENAME "Makefile" FILES "/home/john/software/build/kaliveda-build/1.10_R6/FAZIA/LNS_2014_Makefile")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kaliveda" TYPE DIRECTORY FILES "/home/john/software/sources/kaliveda.git/FAZIA/INDRAFAZIA")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kaliveda/INDRAFAZIA" TYPE FILE RENAME "Makefile" FILES "/home/john/software/build/kaliveda-build/1.10_R6/FAZIA/INDRAFAZIA_Makefile")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kaliveda" TYPE DIRECTORY FILES "/home/john/software/sources/kaliveda.git/FAZIA/ISOFAZIA")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kaliveda/ISOFAZIA" TYPE FILE RENAME "Makefile" FILES "/home/john/software/build/kaliveda-build/1.10_R6/FAZIA/ISOFAZIA_Makefile")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/john/software/build/kaliveda-build/1.10_R6/FAZIA/geometry/cmake_install.cmake")
  include("/home/john/software/build/kaliveda-build/1.10_R6/FAZIA/particles/cmake_install.cmake")
  include("/home/john/software/build/kaliveda-build/1.10_R6/FAZIA/analysis/cmake_install.cmake")
  include("/home/john/software/build/kaliveda-build/1.10_R6/FAZIA/db/cmake_install.cmake")
  include("/home/john/software/build/kaliveda-build/1.10_R6/FAZIA/identification/cmake_install.cmake")

endif()

