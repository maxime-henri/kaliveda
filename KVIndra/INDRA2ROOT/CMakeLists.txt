#---build fortran for old veda programmes

include_directories($ENV{THRONG_DIR}/veda1/for)
add_executable(faire_arbre_c1 faire_arbre_c1.f kali_lecture_dst_camp1.f
    supp_camp1/calib_c1017.f supp_camp1/coresi.f supp_camp1/vedaloss.f)
#target_link_libraries(faire_arbre_c1 cernlib)

include_directories($ENV{THRONG_DIR}/veda2/for2)
add_executable(faire_arbre_c2 faire_arbre_c2.f kali_lecture_dst_camp2.f)
#target_link_libraries(faire_arbre_c2 cernlib)

include_directories($ENV{THRONG_DIR}/veda4/for/include)
add_executable(faire_arbre_c4 faire_arbre_c4.f kali_lecture_dst_camp4.f)
#target_link_libraries(faire_arbre_c2 cernlib)
