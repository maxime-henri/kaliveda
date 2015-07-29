# Install script for directory: /home/john/software/sources/kaliveda.git/KVMultiDet/gui

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE FILE FILES "/home/john/software/build/kaliveda-build/1.10_R5/lib/libKVMultiDetgui.rootmap")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "libraries")
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKVMultiDetgui.so.1.10.03"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKVMultiDetgui.so.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKVMultiDetgui.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/john/software/build/kaliveda-build/1.10_R5/lib/libKVMultiDetgui.so.1.10.03"
    "/home/john/software/build/kaliveda-build/1.10_R5/lib/libKVMultiDetgui.so.1"
    "/home/john/software/build/kaliveda-build/1.10_R5/lib/libKVMultiDetgui.so"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKVMultiDetgui.so.1.10.03"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKVMultiDetgui.so.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKVMultiDetgui.so"
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
    "/home/john/software/sources/kaliveda.git/KVMultiDet/gui/KVZAFinderDialog.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/gui/KVKeyHandler.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/gui/KVTextEntry.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/gui/KVZALineFinder.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/gui/KVNuclearChart.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/gui/KVInputDialog.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/gui/KVNewGridDialog.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/gui/KVIDGridEditor.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/gui/KVIDGUITelescopeChooserDialog.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/gui/KVTextDialog.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/gui/KVLVContainer.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/gui/KVBrowser.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/gui/KVWidgetList.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/gui/KVNucleusBox.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/gui/KVCalculateChIoSiGridDialog.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/gui/KVLVEntry.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/gui/KVDropDownDialog.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/gui/KVSimDirGUI.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/gui/KVIDGridManagerGUI.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/gui/KVListView.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/gui/KVWidget.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/gui/KVSpiderIdentificator.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/gui/KVTestListView.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/gui/KVLauncherGUI.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/gui/KVMergeGridsDialog.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/gui/KVFileDialog.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/gui/KVDBSystemDialog.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/gui/KVDataBaseBrowser.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/gui/KVTestIDGridDialog.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/gui/KVIDGridEditorCanvas.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/gui/KVDalitzPlot.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/gui/KVBatchSystemGUI.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/gui/KVSpIdGUI.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/gui/KVTreeAnalyzer.h"
    "/home/john/software/sources/kaliveda.git/KVMultiDet/gui/KVCanvas.h"
    )
endif()

