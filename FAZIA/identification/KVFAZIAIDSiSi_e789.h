//Created by KVClassFactory on Mon Mar 16 11:45:14 2015
//Author: ,,,

#ifndef __KVFAZIAIDSiSi_e789_H
#define __KVFAZIAIDSiSi_e789_H

#include "KVFAZIAIDSiSi.h"
#include "KVFAZIADetector.h"
#include "KVIDZAGrid.h"

class KVFAZIAIDSiSi_e789 : public KVFAZIAIDSiSi {

protected:
   KVIDZAGrid* fSiSiGrid;//! telescope's grid
   KVIDZAGrid* fSiSiGridQL1;//! telescope's grid low range

public:
   KVFAZIAIDSiSi_e789() {}
   virtual ~KVFAZIAIDSiSi_e789() {}

   Double_t GetIDMapX(Option_t* /*opt*/ = "")
   {
      //X-coordinate is SI2 Q2 amplitude from FPGA
      return fSi2->GetQ2FPGAEnergy();
   }
   Double_t GetIDMapY(Option_t* opt = "")
   {
      //Y-coordinate is SI1 QH1 amplitude from FPGA
      if (!strcmp(opt, "QL1")) return fSi1->GetQL1Amplitude();
      else                   return fSi1->GetQH1FPGAEnergy();
   }
   void Initialize();
   Bool_t Identify(KVIdentificationResult* idr, Double_t /*x*/ = -1., Double_t /*y*/ = -1.);

   ClassDef(KVFAZIAIDSiSi_e789, 1) //identification telescope for E789 FAZIA Si-Si idcards
};

#endif
