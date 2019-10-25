BUILD_KALIVEDA_MODULE(calibration
	PARENT ${KVSUBPROJECT}
	KVMOD_DEPENDS base geometry particles stopping
        LIB_EXCLUDE KVLinCal
)
