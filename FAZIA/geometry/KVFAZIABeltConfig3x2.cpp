//Created by KVClassFactory on Wed Mar 18 15:02:46 2020
//Author: John Frankland,,,

#include "KVFAZIABeltConfig3x2.h"
#include "KVFAZIABlock.h"
#include <TVector3.h>

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

   KVFAZIABlock* blocco(new KVFAZIABlock);
   Int_t block_no(0);
   for (int x = 1; x >= -1; x -= 2) {
      for (int y = -1; y <= 1; ++y) {
         TVector3 center(x * 0.5 * (blocco->GetTotalSideWithBlindage() + fInterBlock),
                         y * (blocco->GetTotalSideWithBlindage() + fInterBlock),
                         fDist);
         AddNode(blocco, block_no,
                 blocco->Get)
      }
   }
}


