//Created by KVClassFactory on Thu May 30 10:13:17 2013
//Author: Eric Bonnet

#include "KVFAZIABlock.h"
#include "KVUnits.h"
#include "KVMaterial.h"
#include "TMath.h"
#include "TGeoManager.h"
#include "TGeoMedium.h"
#include "TGeoVolume.h"
#include "TGeoMatrix.h"

ClassImp(KVFAZIABlock)

////////////////////////////////////////////////////////////////////////////////
// BEGIN_HTML <!--
/* -->
<h2>KVFAZIABlock</h2>
<h4>Block of 16 telescopes FAZIA</h4>
<!-- */
// --> END_HTML
////////////////////////////////////////////////////////////////////////////////

KVFAZIABlock::KVFAZIABlock() : TGeoVolumeAssembly("STRUCT_BLOCK")
{
   // Default constructor

   SetMedium(gGeoManager->GetMedium("Vacuum"));//to avoid warnings about STRUCT_BLOCK has dummy medium

//Coordonnées extraite des côtes données par Yvan M.
//vecteur pointant le milieu d un quartet
//X=-2.231625
//Y=-2.230525
//Z=99.950350
// Mag=100.000139
// Theta=1.808104
// Phi = -135.014124
   TVector3 placement(-2.231625, -2.230525, 99.950350);
   TVector3 Centre;

   TGeoRotation rot1, rot2;
   TGeoTranslation trans;
   TGeoTranslation invZtrans(0, 0, -100);

   TGeoHMatrix h;
   TGeoHMatrix* ph = 0;

//Boucle sur les 4 quartets d un block
   Double_t tx[4] = {1, -1, -1, 1};
   Double_t ty[4] = {1, 1, -1, -1};

   Double_t theta = 0;
   Double_t phi = 0;
   Double_t trans_z = 0;

   for (Int_t nq = 1; nq <= 4; nq += 1) {

      Centre.SetXYZ(placement.X()*tx[nq - 1], placement.Y()*ty[nq - 1], placement.Z());

      theta = Centre.Theta() * TMath::RadToDeg();
      phi = Centre.Phi() * TMath::RadToDeg();

      trans_z = Centre.Mag() + thick_si1 / 2.;

      rot2.SetAngles(phi + 90., theta, 0.);
      rot1.SetAngles(-1.*phi, 0., 0.);
      trans.SetDz(trans_z);

      h = invZtrans * rot2 * trans * rot1;
      ph = new TGeoHMatrix(h);

      AddNode(quartet, nq, ph);
   }
}

KVFAZIABlock::~KVFAZIABlock()
{
   // Destructor
}

