#-- Tweaks required for KaliVeda build
#

#-- UseFile provided by ROOT installation
include(${ROOT_USE_FILE})

message(STATUS "Found ROOT version ${ROOT_VERSION}")
#-- fill list with just the required core ROOT libraries
#   all KaliVeda .so libs will be linked with this list (plus any additional
#   libs specifically requested)
#   we use this list instead of the full list ROOT_LIBRARIES which may
#   contain e.g. libRooFit.so leading to RooFit printing its splash screen
#   as soon as the first KV object is created!
set(ROOT_CORE_LIBRARIES)
if(NOT ROOT_root-config_CMD)
    if(NOT ROOT_BINDIR)
        set(ROOT_BINDIR ${ROOT_BINARY_DIR})
    endif(NOT ROOT_BINDIR)
    find_program(ROOT_root-config_CMD root-config HINTS ${ROOT_BINDIR})
    if(NOT ROOT_root-config_CMD)
        message(FATAL_ERROR "Cannot find root-config utility")
    endif(NOT ROOT_root-config_CMD)
endif(NOT ROOT_root-config_CMD)
execute_process(
    COMMAND ${ROOT_root-config_CMD} --libs
    OUTPUT_VARIABLE ROOT_CORE_LIBS
    OUTPUT_STRIP_TRAILING_WHITESPACE)
string(REGEX MATCHALL [-]l[A-Z][0-9A-Za-z]* corelibs ${ROOT_CORE_LIBS})
foreach(lib ${corelibs})
   string(REGEX REPLACE ^[-l] "" llib ${lib})
   list(APPEND ROOT_CORE_LIBRARIES ${ROOT_${llib}_LIBRARY})
endforeach()

# suppress excessive warnings for ROOT5 with recent compilers
if(${ROOT_VERSION} VERSION_LESS 6)
    ROOT_ADD_CXX_FLAG(CMAKE_CXX_FLAGS -Wno-ignored-qualifiers)
    ROOT_ADD_CXX_FLAG(CMAKE_CXX_FLAGS -Wno-misleading-indentation)
    ROOT_ADD_CXX_FLAG(CMAKE_CXX_FLAGS -Wno-deprecated-declarations)
    ROOT_ADD_CXX_FLAG(CMAKE_CXX_FLAGS -Wno-deprecated-copy)
    ROOT_ADD_CXX_FLAG(CMAKE_CXX_FLAGS -Wno-implicit-fallthrough)
    ROOT_ADD_CXX_FLAG(CMAKE_CXX_FLAGS -Wformat-truncation=0)
    message(STATUS "Certain compiler warnings have been suppressed due to excessive warnings from ROOT5")
endif()

message(STATUS "SetUpROOTBuild : CMAKE_CXX_FLAGS = ${CMAKE_CXX_FLAGS}")

# variables used in ROOT macros
# if not set, libraries do not get installed/rootmaps can't be generated
if(NOT DEFINED CMAKE_LIBRARY_OUTPUT_DIRECTORY)
  set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
  set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
  set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
endif()
