#---build fortran for old veda programmes

add_custom_command( 
   OUTPUT ${CMAKE_CURRENT_BINARY_DIR}/veda2root_kali
   COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/fortran_lecture_dst/compil_kali
   ${CMAKE_CURRENT_SOURCE_DIR} ${CMAKE_CURRENT_BINARY_DIR} ${CMAKE_Fortran_COMPILER}
   WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
   )
add_custom_target(INDRA2ROOT DEPENDS ${CMAKE_CURRENT_BINARY_DIR}/veda2root_kali)
