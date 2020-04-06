set(excluded_classes KVReconIdent_e475s)

if(NOT WITH_BUILTIN_GRU)
        set(excluded_classes ${excluded_classes} KVINDRADstToRootTransfert)
endif()

BUILD_KALIVEDA_MODULE(analysis
	PARENT ${KVSUBPROJECT}
        KVMOD_DEPENDS exp_events daq_cec geometry identification db
        LIB_EXCLUDE ${excluded_classes}
   DICT_EXCLUDE KVSelector.h
	EXTRA_LIBS KVMultiDetgui
)
