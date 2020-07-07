# - Run script to update local doxygen doc in html directory

DOXYFILE=Doxyfile

# reformat comments
kaliveda -b -q

export KALIVEDA_VERSION=$(kaliveda-config --version)
cp kaliveda.git/README.md kaliveda.doxygen/
# kludge
cp kaliveda.git/KVMultiDet/impact_parameter/ipde_fit_parameter.h kaliveda.doxygen/KVMultiDet/impact_parameter/
# download ROOT tag file to link ROOT documentation
if [ ! -f ./ROOT.tag ]; then
   wget https://root.cern/doc/master/ROOT.tag
fi

export INPUT_DIR=kaliveda.doxygen && doxygen $DOXYFILE
