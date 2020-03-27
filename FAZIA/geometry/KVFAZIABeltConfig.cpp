//Created by KVClassFactory on Wed Mar 18 15:02:46 2020
//Author: John Frankland,,,

#include "KVFAZIABeltConfig.h"
#include "KVFAZIABlock.h"
#include <TVector3.h>
#include "KVMultiDetArray.h"

ClassImp(KVFAZIABeltConfig)

////////////////////////////////////////////////////////////////////////////////
// BEGIN_HTML <!--
/* -->
<h2>KVFAZIABeltConfig</h2>
<h4>blocks of FAZIA in a belt of NxM blocks</h4>
<!-- */
// --> END_HTML
////////////////////////////////////////////////////////////////////////////////

void KVFAZIABeltConfig::BuildBelt(int nblocsX, int nblocsY, double distance_correction)
{
   // set up blocks in grid

   SetMedium(gGeoManager->GetMedium("Vacuum"));//to avoid warnings about STRUCT_BLOCK has dummy medium
   KVFAZIABlock* blocco = new KVFAZIABlock;
   Int_t block_no(0);
   double ymin = -(nblocsY - 1.) / 2.;
   double ymax = -ymin;
   for (int x = nblocsX - 1; x >= -(nblocsX - 1); x -= 2) {
      for (double y = ymin; y <= ymax; ++y) {
         double distance_to_block = fDist + y * distance_correction;
         double inter_block_Y = fInterBlock + (10 * (fDist - distance_to_block) / fDist) * fInterBlock;
         //std::cout << "distance = " << fDist-distance_to_block << " inter_block = " << inter_block_Y << std::endl;
         TVector3 center(x * 0.5 * (blocco->GetTotalSideWithBlindage() + fInterBlock),
                         y * (blocco->GetTotalSideWithBlindage() + inter_block_Y),
                         fDist);
         //center.Print();
         TGeoTranslation invZ(0, 0, -distance_to_block);
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


