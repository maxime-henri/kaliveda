#include "FC.h"
#include "TTree.h"
#include "TFile.h"

class ROOT_Fortran_Interface {
   TFile f;
   TTree t;
   int run_number;
   int npart_traite;
   int icou[500], imod[500], z[500], a[500], code[500];
   mutable int ipart;

public:
   ROOT_Fortran_Interface(int run)
      : f(Form("run%d.root", run), "recreate"),
        t("data", Form("INDRA  data run %d", run)),
        run_number(run)
   {
      t.Branch("npart_traite", &npart_traite, "npart_traite/I");
      t.Branch("code", code, "code[npart_traite]/I");
      t.Branch("icou", icou, "icou[npart_traite]/I");
      t.Branch("imod", imod, "imod[npart_traite]/I");
      t.Branch("z", z, "z[npart_traite]/I");
      t.Branch("a", a, "a[npart_traite]/I");
   }
   ~ROOT_Fortran_Interface()
   {
      f.Write();
   }

   void new_event(int M)
   {
      npart_traite = M;
      ipart = 0;
   }
   void new_particle(int cod, int cou, int mod, int Z, int A)
   {
      code[ipart] = cod;
      icou[ipart] = cou;
      imod[ipart] = mod;
      z[ipart] = Z;
      a[ipart] = A;

      ++ipart;
   }
   void fill_tree()
   {
      t.Fill();
   }
};

ROOT_Fortran_Interface* RFI = nullptr;

extern "C"
{
   void FC_GLOBAL_(init_rfi, INIT_RFI)(int* run)
   {
      // initialise tree for run

      RFI = new ROOT_Fortran_Interface(*run);
   }

   void FC_GLOBAL_(close_rfi, CLOSE_RFI)()
   {
      // save tree to file

      delete RFI;
   }

   void FC_GLOBAL_(new_event, NEW_EVENT)(int* npart)
   {
      RFI->new_event(*npart);
   }

   void FC_GLOBAL_(new_particle, NEW_PARTICLE)(int* code, int* cou, int* mod, int* z, int* a)
   {
      RFI->new_particle(*code, *cou, *mod, *z, *a);
   }

   void FC_GLOBAL_(fill_tree, FILL_TREE)()
   {
      RFI->fill_tree();
   }
}

