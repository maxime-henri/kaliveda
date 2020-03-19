//Created by KVClassFactory on Wed Mar 18 15:02:46 2020
//Author: John Frankland,,,

#include "KVFAZIABeltConfig3x2.h"
#include "KVFAZIABlock.h"
#include <TVector3.h>
#include "KVMultiDetArray.h"

ClassImp(KVFAZIABeltConfig3x2)

////////////////////////////////////////////////////////////////////////////////
// BEGIN_HTML <!--
/* -->
<h2>KVFAZIABeltConfig3x2</h2>
<h4>6 blocks of FAZIA in a belt of 3x2 blocks</h4>
<!-- */
// --> END_HTML
////////////////////////////////////////////////////////////////////////////////

void KVFAZIABeltConfig3x2::BuildBelt()
{
   // set up blocks in grid

   SetMedium(gGeoManager->GetMedium("Vacuum"));//to avoid warnings about STRUCT_BLOCK has dummy medium
   KVFAZIABlock* blocco = new KVFAZIABlock;
   TGeoTranslation invZ(0, 0, -fDist);
   Int_t block_no(0);
   for (int x = 1; x >= -1; x -= 2) {
      for (int y = -1; y <= 1; ++y) {
         TVector3 center(x * 0.5 * (blocco->GetTotalSideWithBlindage() + fInterBlock),
                         y * (blocco->GetTotalSideWithBlindage() + fInterBlock),
                         fDist);
         center.Print();
         AddNode(blocco, block_no,
                 KVMultiDetArray::GetVolumePositioningMatrix(blocco->GetNominalDistanceTargetBlockCentre(fDist),
                       TMath::RadToDeg()*center.Theta(),
                       TMath::RadToDeg()*center.Phi(), &invZ));
         ++block_no;
      }
   }
   // default visibility level (3) is not enough to see detectors
   gGeoManager->SetVisLevel(10);
}


