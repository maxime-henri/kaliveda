set(do_not_build KVOnlineReconDataAnalyser KVRTGIDManager)
if(WITH_FITLTG)
	list(REMOVE_ITEM do_not_build KVRTGIDManager)
endif()
if(WITH_DATAFLOW AND WITH_ZMQ)
    list(REMOVE_ITEM do_not_build KVOnlineReconDataAnalyser)
endif()

#---do we have ROOT with OpenGL support for KVMultiDetArray geometry/track viewing ?
if(ROOT_opengl_FOUND)
   set(extra_lib ${ROOT_RGL_LIBRARY})
endif(ROOT_opengl_FOUND)

BUILD_KALIVEDA_MODULE(exp_events
	PARENT ${KVSUBPROJECT}
	KVMOD_DEPENDS analysis globvars daq_cec identification base particles geometry stopping events data_management db
	LIB_EXCLUDE ${do_not_build}
   EXTRA_LIBS ${extra_lib}
)
