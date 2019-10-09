//Created by KVClassFactory on Mon Mar 16 11:45:14 2015
//Author: ,,,

#include "KVFAZIAIDSiSi_e789.h"
#include "KVIDZAGrid.h"

ClassImp(KVFAZIAIDSiSi_e789)

////////////////////////////////////////////////////////////////////////////////
// BEGIN_HTML <!--
/* -->
<h2>KVFAZIAIDSiSi_e789</h2>
<h4>identification telescope for E789 FAZIA Si-Si idcards</h4>
<!-- */
// --> END_HTML
////////////////////////////////////////////////////////////////////////////////


KVFAZIAIDSiSi_e789::KVFAZIAIDSiSi_e789()
{
   fSiSiGrid = 0;
   fSiSiGridQL1 = 0;
   SetType("Si-Si");
   SetHasMassID(kTRUE);
}

void KVFAZIAIDSiSi_e789::Initialize()
{
   // Initialize telescope for current run.
   // If there is at least 1 grid, we set fCanIdentify = kTRUE

   fSiSiGrid    = nullptr;
   fSiSiGridQL1 = nullptr;

   KVFAZIAIDSiSi::Initialize();

   if (GetIDGrid()) {
      TIter it(GetListOfIDGrids());
      KVIDGraph* gr;
      while ((gr = (KVIDGraph*)it())) {
         if (TString(gr->GetVarY()) == "QH1.FPGAEnergy") fSiSiGrid = gr;
      }
   }
   if (!fSiSiGrid) fSiSiGrid = GetIDGrid();
}


//________________________________________________________________
Bool_t KVFAZIAIDSiSi_e789::Identify(KVIdentificationResult* idr, Double_t x, Double_t y)
{
   // Particle identification and code setting using identification grids.
   // For the moment: only perform identification in QH1-Q2 map

   idr->SetIDType(GetType());
   idr->IDattempted = kTRUE;

   Double_t si1, si2;
   GetIDGridCoords(si2, si1, fSiSiGrid, x, y);

   if (fSiSiGrid->IsIdentifiable(si2, si1)) {
      fSiSiGrid->Identify(si2, si1, idr);
   }
   else {
      idr->IDOK = kFALSE;
      idr->IDquality = KVIDZAGrid::kICODE8;
   }

   idr->IDcode = GetIDCode();

   return kTRUE;

}
