//Created by KVClassFactory on Thu Mar 19 12:53:22 2020
//Author: John Frankland,,,

#include "KVFAZIAMidRapExplorer.h"
#include "KVFAZIABeltConfig3x2.h"

ClassImp(KVFAZIAMidRapExplorer)

////////////////////////////////////////////////////////////////////////////////
// BEGIN_HTML <!--
/* -->
<h2>KVFAZIAMidRapExplorer</h2>
<h4>FAZIA setup with two belts of 6 blocks</h4>
<!-- */
// --> END_HTML
////////////////////////////////////////////////////////////////////////////////

void KVFAZIAMidRapExplorer::BuildFAZIA()
{
   // Two belts centred at \ŧheta=45\deg at \phi=+/-90\deg

   KVFAZIABeltConfig3x2* belt = new KVFAZIABeltConfig3x2;
   TGeoVolume* top = gGeoManager->GetTopVolume();
   top->AddNode(belt, 0, GetVolumePositioningMatrix(100.0, 45, -90));
   top->AddNode(belt, 1, GetVolumePositioningMatrix(100.0, 45, 90));
}

void KVFAZIAMidRapExplorer::GetGeometryParameters()
{
   SetGeometryImportParameters(0.1, 1, 30, 0, 60);
}

void KVFAZIAMidRapExplorer::SetNameOfDetectors(KVEnv& env)
{
   //define the format of detectors name
   // label-index
   // where index = belt*1000+block*100+quartet*10+telescope
   // example :
   // SI1-123 is the Silicon 1 of the block 1, the quartet 2 and the telescope 3
   //

   for (int belt = 0; belt <= 1; ++belt) {
      for (Int_t bb = 0; bb < 6; bb += 1) {
         for (Int_t qq = 1; qq <= 4; qq += 1) {
            for (Int_t tt = 1; tt <= 4; tt += 1) {
               fDetectorLabels.Begin(",");
               while (!fDetectorLabels.End()) {
                  KVString sdet = fDetectorLabels.Next();
                  env.SetValue(
                     Form("BELT_%d_BLOCK_%d_QUARTET_%d_%s-T%d", belt, bb, qq, sdet.Data(), tt),
                     Form("%s-%1d%1d%1d%1d", sdet.Data(), belt, bb, qq, tt)
                  );
               }
            }
         }
      }
   }
}

