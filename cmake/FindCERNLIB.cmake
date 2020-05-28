# Try to find cernlib on system
# We look for the cernlib executable
# If found, CERN_LIBS will be set to the output
# and CERNLIB_FOUND will be set to true
#
# Usage: target_link_libraries([target] ${CERN_LIBS})

find_program(CERNLIB_EXEC cernlib)

if(CERNLIB_EXEC)
   
   execute_process(
      COMMAND ${CERNLIB_EXEC}
      OUTPUT_VARIABLE CERN_LIBS
      OUTPUT_STRIP_TRAILING_WHITESPACE
   )   
   
endif(CERNLIB_EXEC)

include ( FindPackageHandleStandardArgs )
# handle the QUIETLY and REQUIRED arguments and set ZMQ_FOUND to TRUE
# if all listed variables are TRUE
find_package_handle_standard_args ( CERNLIB DEFAULT_MSG CERN_LIBS )
