//Created by KVClassFactory on Wed Mar 18 15:02:46 2020
//Author: John Frankland,,,

#ifndef __KVFAZIABELTCONFIG3X2_H
#define __KVFAZIABELTCONFIG3X2_H

#include "TGeoVolume.h"

class KVFAZIABeltConfig3x2 : public TGeoVolumeAssembly {

   Double_t fDist;  // distance of centre of belt from target
   Double_t fInterBlock; //spacing between blocks

   void BuildBelt();

public:
   KVFAZIABeltConfig3x2(Double_t dist = 100.0, Double_t inter_block = 0.5)
      : TGeoVolumeAssembly("STRUCT_BELT"),
        fDist(dist), fInterBlock(inter_block)
   {
      // Create a belt at the given position
      BuildBelt();
   }
   virtual ~KVFAZIABeltConfig3x2() {}

   ClassDef(KVFAZIABeltConfig3x2, 1) //6 blocks of FAZIA in a belt of 3x2 blocks
};

#endif
