#
#---Config file for KaliVeda framework to be used with find_package()
#

set(KALIVEDA_VERSION 1.10.02)


####### Expanded from @PACKAGE_INIT@ by configure_package_config_file() #######
####### Any changes to this file will be overwritten by the next CMake run ####
####### The input file was KaliVedaConfig.cmake.in                            ########

get_filename_component(PACKAGE_PREFIX_DIR "${CMAKE_CURRENT_LIST_DIR}/../../" ABSOLUTE)

macro(set_and_check _var _file)
  set(${_var} "${_file}")
  if(NOT EXISTS "${_file}")
    message(FATAL_ERROR "File or directory ${_file} referenced by variable ${_var} does not exist !")
  endif()
endmacro()

macro(check_required_components _NAME)
  foreach(comp ${${_NAME}_FIND_COMPONENTS})
    if(NOT ${_NAME}_${comp}_FOUND)
      if(${_NAME}_FIND_REQUIRED_${comp})
        set(${_NAME}_FOUND FALSE)
      endif()
    endif()
  endforeach()
endmacro()

####################################################################################

#---set some useful paths
set_and_check(KALIVEDA_INCLUDE_DIR "${PACKAGE_PREFIX_DIR}/include/kaliveda")
set_and_check(KALIVEDA_LIB_DIR "${PACKAGE_PREFIX_DIR}/lib")
set_and_check(KALIVEDA_BIN_DIR "${PACKAGE_PREFIX_DIR}/bin")
set_and_check(KALIVEDA_CMAKEPKG_DIR "${PACKAGE_PREFIX_DIR}/lib/kaliveda")

#---set list of all installed libraries using exported targets
include(${KALIVEDA_CMAKEPKG_DIR}/KaliVeda-targets.cmake)
set(KALIVEDA_LIBRARIES "BackTrackbase;BackTrackmodels;KVMultiDetidentification;KVMultiDetdata_management;KVMultiDetgui;KVMultiDetdb;KVMultiDetbase;KVMultiDetanalysis;KVMultiDettrieur;KVMultiDetparticles;KVMultiDetexp_events;KVMultiDetdaq_cec;KVMultiDetglobvars;KVMultiDetstopping;KVMultiDetcalibration;KVMultiDetgeometry;KVMultiDetevents")

#---set installed components
set(KALIVEDA_INDRA_FOUND OFF)
set(KALIVEDA_INDRAVAMOS_FOUND OFF)
set(KALIVEDA_FAZIA_FOUND OFF)

#---set path to 'use file'
set(KALIVEDA_USE_FILE ${KALIVEDA_CMAKEPKG_DIR}/KaliVedaUseFile.cmake)

check_required_components(KaliVeda)
