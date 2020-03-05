#---set paths to find all KVMultiDet headers
KALIVEDA_SET_INCLUDE_DIRS(KVMultiDet MODULES ${KVMultiDet_MOD_LIST})

# suppress excessive warnings for ROOT5 with recent compilers
if(${ROOT_VERSION} VERSION_LESS 6)
    ROOT_ADD_CXX_FLAG(CMAKE_CXX_FLAGS -Wno-deprecated-copy)
    message(STATUS "BackTrack with ROOT5: suppressing -Wdeprecated-copy warnings")
endif()

BUILD_KALIVEDA_SUBPROJECT()
