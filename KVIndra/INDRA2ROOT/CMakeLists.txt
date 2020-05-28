#---build fortran for old veda programmes
message(STATUS "   ...module INDRA2ROOT")

enable_language(Fortran)
include(FortranCInterface)
FortranCInterface_VERIFY()
FortranCInterface_HEADER(FC.h MACRO_NAMESPACE "FC_")

add_library(RFI SHARED ROOT_Fortran_Interface.cpp)
target_link_libraries(RFI ${ROOT_LIBRARIES})
target_include_directories(RFI PRIVATE ${CMAKE_CURRENT_BINARY_DIR})
install(TARGETS RFI LIBRARY DESTINATION lib)

# the following compiler options are valid for gfortran/f95 i.e. gcc-4.8.5
# at CCIN2P3 under CentOS7. JDF#28/5/2020
set(CMAKE_Fortran_FLAGS "-ffixed-line-length-none -fno-range-check ${CMAKE_Fortran_FLAGS}")

add_executable(faire_arbre_c1 faire_arbre_c1.f kali_lecture_dst_camp1.f
    supp_camp1/calib_c1017.f supp_camp1/coresi.f supp_camp1/vedaloss.f)
target_include_directories(faire_arbre_c1 PRIVATE $ENV{THRONG_DIR}/veda1/for)
target_link_libraries(faire_arbre_c1 ${CERN_LIBS})

add_executable(faire_arbre_c2 faire_arbre_c2.f kali_lecture_dst_camp2.f)
target_include_directories(faire_arbre_c2 PRIVATE $ENV{THRONG_DIR}/veda2/for2)
target_link_libraries(faire_arbre_c2 RFI ${CERN_LIBS})

add_executable(faire_arbre_c4 faire_arbre_c4.f kali_lecture_dst_camp4.f)
target_include_directories(faire_arbre_c4 PRIVATE $ENV{THRONG_DIR}/veda4/for/include)
target_link_libraries(faire_arbre_c4 ${CERN_LIBS})

install(TARGETS faire_arbre_c1 faire_arbre_c2 faire_arbre_c4 RUNTIME DESTINATION bin) 
