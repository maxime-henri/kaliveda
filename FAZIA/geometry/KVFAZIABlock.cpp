//Created by KVClassFactory on Thu May 30 10:13:17 2013
//Author: Eric Bonnet

#include "KVFAZIABlock.h"
#include "KVUnits.h"
#include "KVMaterial.h"
#include "TMath.h"
#include "KVMultiDetArray.h"
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

   // Set default dimensions for all parts of geometry
   frame_side = 4.415;
   centre_cross_thick = 0.12;
   side_thick = 0.0475;
   si_holder_side = 2.1;
   si_centre = 0.5 * centre_cross_thick + 0.5 * si_holder_side;
   front_frame_depth = 0.3;
   frame_depth_300 = 0.273;
   frame_depth_500 = 0.24;
   frame_edge_depth = 0.16;
   si300_position = -0.5 * frame_depth_300 + frame_edge_depth;
   si500_position = -0.5 * frame_depth_500 + frame_edge_depth;
   full_width = front_frame_depth + frame_depth_300 + frame_depth_500;
   dist_si2_csi = 0.;// should be ~1mm between si2 ergal edge and csi
   csi_depth = 10;
   full_length_quartet = full_width + dist_si2_csi + csi_depth;
   thick_si1 = 300 * KVUnits::um;
   thick_si2 = 500 * KVUnits::um;
   dist_csi_sarco = 3.86;
   sarco_length = 49.7;
   sarco_width = 9.6;
   sarco_height = 10.4;
   sarco_epaisseur = 0.4;
   sarco_uplift = 0.5; //how much the sarco sides overlap the copper plate

   SetMedium(gGeoManager->GetMedium("Vacuum"));//to avoid warnings about STRUCT_BLOCK has dummy medium

//Coordonnées extraite des côtes données par Yvan M.
//vecteur pointant le milieu d un quartet
//X=-2.231625
//Y=-2.230525
//Z=99.950350
// Mag=100.000139
// Theta=1.808104
// Phi = -135.014124
   TVector3 placement(2.231625, 2.230525, 99.950350);
   TVector3 Centre;

   // what distance does the centre of the quartet have to be at so that its SI1
   // is 100 cm from the target ?
   double trans_z = GetNominalDistanceTargetBlockCentre();

   // calculate linear dimensions of block
   TVector3 Q1 = placement;
   TVector3 Q2(-placement.X(), placement.Y(), placement.Z());
   // adjust for depth of si1
   Q1.SetMag(100 - front_frame_depth - frame_edge_depth);
   Q2.SetMag(100 - front_frame_depth - frame_edge_depth);
   fTotSidWBld = frame_side + (Q1 - Q2).Mag();

   // Order of placement of quartets in block:
   // clockwise starting at top left corner
   // (=>X +ve, Y -ve) (remember KV geo convention)
   Double_t tx[4] = {1, 1, -1, -1};
   Double_t ty[4] = {-1, 1, 1, -1};

   TGeoVolume* quartet = MakeQuartet();

   TGeoTranslation invTrans(0, 0, -trans_z);

   for (Int_t nq = 1; nq <= 4; nq += 1) {

      Centre.SetXYZ(placement.X()*tx[nq - 1], placement.Y()*ty[nq - 1], placement.Z());

      double theta = Centre.Theta() * TMath::RadToDeg();
      double phi = Centre.Phi() * TMath::RadToDeg();

      AddNode(quartet, nq,
              KVMultiDetArray::GetVolumePositioningMatrix(trans_z, theta, phi, &invTrans));
   }

   AddNode(MakeSarco(), 1, new TGeoTranslation(0, 0, 0.5 * (full_length_quartet + sarco_length) + dist_csi_sarco));
}


TGeoVolume* KVFAZIABlock::MakeCrossPieceCSI(double front_side, double separation, double distPlane, double depth)
{
   // Part of aluminium frame which holds the CsI

   Projector proj(distPlane, depth);
   std::vector<TVector3> coins;
   double sep = separation / 2.;

#ifdef WITH_CPP11
   coins.emplace_back(-sep, sep + front_side, -depth / 2);
   coins.emplace_back(sep, sep + front_side, -depth / 2);
   coins.emplace_back(sep, -sep - front_side, -depth / 2);
   coins.emplace_back(-sep, -sep - front_side, -depth / 2);
#else
   coins.push_back(TVector3(-sep, sep + front_side, -depth / 2));
   coins.push_back(TVector3(sep, sep + front_side, -depth / 2));
   coins.push_back(TVector3(sep, -sep - front_side, -depth / 2));
   coins.push_back(TVector3(-sep, -sep - front_side, -depth / 2));
#endif
   for (int i = 0; i < 4; ++i) coins.push_back(proj(coins[i]));
   std::vector<double> coords;
#ifdef WITH_CPP11
   for (auto& vec : coins) {
      coords.push_back(vec.X());
      coords.push_back(vec.Y());
#else
   for (std::vector<TVector3>::iterator vec; vec != coins.end(); ++vec) {
      coords.push_back(vec->X());
      coords.push_back(vec->Y());
#endif
   }
   KVMaterial alu("Al");
   return gGeoManager->MakeArb8("CROSS_CSI", alu.GetGeoMedium(), depth / 2,
#ifdef WITH_CPP11
                                coords.data()
#else
                                & coords[0]
#endif
                               );
}

TGeoVolume* KVFAZIABlock::MakeLeftCrossPieceCSI(double front_side, double separation, double distPlane, double depth)
{
   // Part of aluminium frame which holds the CsI
   Projector proj(distPlane, depth);
   std::vector<TVector3> coins;
   double sep = separation / 2.;

#ifdef WITH_CPP11
   coins.emplace_back(-sep - front_side, sep, -depth / 2);
   coins.emplace_back(-sep, sep, -depth / 2);
   coins.emplace_back(-sep, -sep, -depth / 2);
   coins.emplace_back(-sep - front_side, -sep, -depth / 2);
#else
   coins.push_back(TVector3(-sep - front_side, sep, -depth / 2));
   coins.push_back(TVector3(-sep, sep, -depth / 2));
   coins.push_back(TVector3(-sep, -sep, -depth / 2));
   coins.push_back(TVector3(-sep - front_side, -sep, -depth / 2));
#endif
   for (int i = 0; i < 4; ++i) coins.push_back(proj(coins[i]));
   std::vector<double> coords;
#ifdef WITH_CPP11
   for (auto& vec : coins) {
      coords.push_back(vec.X());
      coords.push_back(vec.Y());
#else
   for (std::vector<TVector3>::iterator vec; vec != coins.end(); ++vec) {
      coords.push_back(vec->X());
      coords.push_back(vec->Y());
#endif
   }
   KVMaterial alu("Al");
   return gGeoManager->MakeArb8("CROSS_CSI_LEFT", alu.GetGeoMedium(), depth / 2,
#ifdef WITH_CPP11
                                coords.data()
#else
                                & coords[0]
#endif
                               );
}

TGeoVolume* KVFAZIABlock::MakeRightCrossPieceCSI(double front_side, double separation, double distPlane, double depth)
{
   // Part of aluminium frame which holds the CsI
   Projector proj(distPlane, depth);
   std::vector<TVector3> coins;
   double sep = separation / 2.;

#ifdef WITH_CPP11
   coins.emplace_back(sep, sep, -depth / 2);
   coins.emplace_back(sep + front_side, sep, -depth / 2);
   coins.emplace_back(sep + front_side, -sep, -depth / 2);
   coins.emplace_back(sep, -sep, -depth / 2);
#else
   coins.push_back(TVector3(sep, sep, -depth / 2));
   coins.push_back(TVector3(sep + front_side, sep, -depth / 2));
   coins.push_back(TVector3(sep + front_side, -sep, -depth / 2));
   coins.push_back(TVector3(sep, -sep, -depth / 2));
#endif
   for (int i = 0; i < 4; ++i) coins.push_back(proj(coins[i]));
   std::vector<double> coords;
#ifdef WITH_CPP11
   for (auto& vec : coins) {
      coords.push_back(vec.X());
      coords.push_back(vec.Y());
#else
   for (std::vector<TVector3>::iterator vec; vec != coins.end(); ++vec) {
      coords.push_back(vec->X());
      coords.push_back(vec->Y());
#endif
   }
   KVMaterial alu("Al");
   return gGeoManager->MakeArb8("CROSS_CSI_RIGHT", alu.GetGeoMedium(), depth / 2,
#ifdef WITH_CPP11
                                coords.data()
#else
                                & coords[0]
#endif
                               );
}

std::vector<double> KVFAZIABlock::GetCoordsCSI(int tel_num, double front_side, double separation, double distPlane, double depth)
{
   Projector proj(distPlane, depth);
   std::vector<TVector3> coins;
   double sep = separation / 2.;
   switch (tel_num) {
      case 3:
         //tel_num=3 phi=135
#ifdef WITH_CPP11
         coins.emplace_back(-sep - front_side, sep + front_side, -depth / 2);
         coins.emplace_back(-sep, sep + front_side, -depth / 2);
         coins.emplace_back(-sep, sep, -depth / 2);
         coins.emplace_back(-sep - front_side, sep, -depth / 2);
#else
         coins.push_back(TVector3(-sep - front_side, sep + front_side, -depth / 2));
         coins.push_back(TVector3(-sep, sep + front_side, -depth / 2));
         coins.push_back(TVector3(-sep, sep, -depth / 2));
         coins.push_back(TVector3(-sep - front_side, sep, -depth / 2));
#endif
         break;
      case 2:
         //tel_num=2 phi=45
#ifdef WITH_CPP11
         coins.emplace_back(sep, sep + front_side, -depth / 2);
         coins.emplace_back(sep + front_side, sep + front_side, -depth / 2);
         coins.emplace_back(sep + front_side, sep, -depth / 2);
         coins.emplace_back(sep, sep, -depth / 2);
#else
         coins.push_back(TVector3(sep, sep + front_side, -depth / 2));
         coins.push_back(TVector3(sep + front_side, sep + front_side, -depth / 2));
         coins.push_back(TVector3(sep + front_side, sep, -depth / 2));
         coins.push_back(TVector3(sep, sep, -depth / 2));
#endif
         break;
      case 1:
         //tel_num=1 phi=315
#ifdef WITH_CPP11
         coins.emplace_back(sep, -sep, -depth / 2);
         coins.emplace_back(sep + front_side, -sep, -depth / 2);
         coins.emplace_back(sep + front_side, -sep - front_side, -depth / 2);
         coins.emplace_back(sep, -sep - front_side, -depth / 2);
#else
         coins.push_back(TVector3(sep, -sep, -depth / 2));
         coins.push_back(TVector3(sep + front_side, -sep, -depth / 2));
         coins.push_back(TVector3(sep + front_side, -sep - front_side, -depth / 2));
         coins.push_back(TVector3(sep, -sep - front_side, -depth / 2));
#endif
         break;
      case 4:
         //tel_num=4 phi=225
#ifdef WITH_CPP11
         coins.emplace_back(-sep - front_side, -sep, -depth / 2);
         coins.emplace_back(-sep, -sep, -depth / 2);
         coins.emplace_back(-sep, -sep - front_side, -depth / 2);
         coins.emplace_back(-sep - front_side, -sep - front_side, -depth / 2);
#else
         coins.push_back(TVector3(-sep - front_side, -sep, -depth / 2));
         coins.push_back(TVector3(-sep, -sep, -depth / 2));
         coins.push_back(TVector3(-sep, -sep - front_side, -depth / 2));
         coins.push_back(TVector3(-sep - front_side, -sep - front_side, -depth / 2));
#endif
   }
   for (int i = 0; i < 4; ++i) coins.push_back(proj(coins[i]));
   std::vector<double> coords;
#ifdef WITH_CPP11
   for (auto& vec : coins) {
      coords.push_back(vec.X());
      coords.push_back(vec.Y());
#else
   for (std::vector<TVector3>::iterator vec; vec != coins.end(); ++vec) {
      coords.push_back(vec->X());
      coords.push_back(vec->Y());
#endif
   }
   return coords;
}

TGeoVolume* KVFAZIABlock::MakeErgalFrame(double frame_depth, double ergal_edge_depth)
{
   KVMaterial alu("Cu");

   TGeoVolume* erg_a =
      gGeoManager->MakeBox("ERG_A", alu.GetGeoMedium(),
                           0.5 * frame_side, 0.5 * side_thick, 0.5 * ergal_edge_depth);
   TGeoVolume* erg_b =
      gGeoManager->MakeBox("ERG_B", alu.GetGeoMedium(), 0.5 * frame_side, 0.5 * centre_cross_thick, 0.5 * frame_depth);
   TGeoVolume* erg_c =
      gGeoManager->MakeBox("ERG_C", alu.GetGeoMedium(), 0.5 * side_thick,
                           0.5 * (frame_side - 2 * side_thick - centre_cross_thick) / 2.,
                           0.5 * ergal_edge_depth);
   TGeoVolume* erg_d =
      gGeoManager->MakeBox("ERG_D", alu.GetGeoMedium(), 0.5 * centre_cross_thick,
                           0.5 * (frame_side - 2 * side_thick - centre_cross_thick) / 2.,
                           0.5 * frame_depth);
   TGeoVolumeAssembly* ergal_frame
      = new TGeoVolumeAssembly("ergal_frame");
   ergal_frame->AddNode(erg_a, 1, new TGeoTranslation(0, frame_side / 2. - side_thick / 2., -0.5 * frame_depth + 0.5 * ergal_edge_depth));
   ergal_frame->AddNode(erg_a, 2, new TGeoTranslation(0, -(frame_side / 2. - side_thick / 2.), -0.5 * frame_depth + 0.5 * ergal_edge_depth));
   ergal_frame->AddNode(erg_b, 1);
   ergal_frame->AddNode(erg_c, 1,
                        new TGeoTranslation(-(frame_side / 2. - side_thick / 2.),
                              centre_cross_thick / 2.
                              + 0.5 * (frame_side - 2 * side_thick - centre_cross_thick) / 2., -0.5 * frame_depth + 0.5 * ergal_edge_depth));
   ergal_frame->AddNode(erg_c, 2,
                        new TGeoTranslation((frame_side / 2. - side_thick / 2.),
                              centre_cross_thick / 2.
                              + 0.5 * (frame_side - 2 * side_thick - centre_cross_thick) / 2., -0.5 * frame_depth + 0.5 * ergal_edge_depth));
   ergal_frame->AddNode(erg_c, 3,
                        new TGeoTranslation((frame_side / 2. - side_thick / 2.),
                              -(centre_cross_thick / 2.
                                + 0.5 * (frame_side - 2 * side_thick - centre_cross_thick) / 2.), -0.5 * frame_depth + 0.5 * ergal_edge_depth));
   ergal_frame->AddNode(erg_c, 4,
                        new TGeoTranslation(-(frame_side / 2. - side_thick / 2.),
                              -(centre_cross_thick / 2.
                                + 0.5 * (frame_side - 2 * side_thick - centre_cross_thick) / 2.), -0.5 * frame_depth + 0.5 * ergal_edge_depth));
   ergal_frame->AddNode(erg_d, 1,
                        new TGeoTranslation(0,
                              (centre_cross_thick / 2.
                               + 0.5 * (frame_side - 2 * side_thick - centre_cross_thick) / 2.), 0));
   ergal_frame->AddNode(erg_d, 2,
                        new TGeoTranslation(0,
                              -(centre_cross_thick / 2.
                                + 0.5 * (frame_side - 2 * side_thick - centre_cross_thick) / 2.), 0));

   return ergal_frame;
}

TGeoVolume* KVFAZIABlock::MakeQuartet()
{
   // Create geometry of one quartet (quartetto) of a FAZIA block

   // make volumes for 300um frame
   TGeoVolume* ergal_frame_300 = MakeErgalFrame(frame_depth_300, frame_edge_depth);

   KVMaterial silicon("Si");
   TGeoVolume* si300vol = gGeoManager->MakeBox("DET_SI1", silicon.GetGeoMedium(), 0.5 * si_holder_side, 0.5 * si_holder_side, thick_si1 / 2.);
   TGeoVolumeAssembly* si300frame = new TGeoVolumeAssembly("QUARTETTO_SI300");
   si300frame->AddNode(ergal_frame_300, 1);
   si300frame->AddNode(si300vol, 1, new TGeoTranslation(si_centre, -si_centre, si300_position));
   dynamic_cast<TNamed*>(si300frame->GetNodes()->Last())->SetName("DET_SI1-T1");
   si300frame->AddNode(si300vol, 2, new TGeoTranslation(si_centre, si_centre, si300_position));
   dynamic_cast<TNamed*>(si300frame->GetNodes()->Last())->SetName("DET_SI1-T2");
   si300frame->AddNode(si300vol, 3, new TGeoTranslation(-si_centre, si_centre, si300_position));
   dynamic_cast<TNamed*>(si300frame->GetNodes()->Last())->SetName("DET_SI1-T3");
   si300frame->AddNode(si300vol, 4, new TGeoTranslation(-si_centre, -si_centre, si300_position));
   dynamic_cast<TNamed*>(si300frame->GetNodes()->Last())->SetName("DET_SI1-T4");

   // make volumes for 500um frame
   TGeoVolume* ergal_frame_500 = MakeErgalFrame(frame_depth_500, frame_edge_depth);
   TGeoVolume* si500vol = gGeoManager->MakeBox("DET_SI2", silicon.GetGeoMedium(), 0.5 * si_holder_side, 0.5 * si_holder_side, thick_si2 / 2.);
   TGeoVolumeAssembly* si500frame = new TGeoVolumeAssembly("QUARTETTO_SI500");
   si500frame->AddNode(ergal_frame_500, 1);
   si500frame->AddNode(si500vol, 1, new TGeoTranslation(si_centre, -si_centre, si500_position));
   dynamic_cast<TNamed*>(si500frame->GetNodes()->Last())->SetName("DET_SI2-T1");
   si500frame->AddNode(si500vol, 2, new TGeoTranslation(si_centre, si_centre, si500_position));
   dynamic_cast<TNamed*>(si500frame->GetNodes()->Last())->SetName("DET_SI2-T2");
   si500frame->AddNode(si500vol, 3, new TGeoTranslation(-si_centre, si_centre, si500_position));
   dynamic_cast<TNamed*>(si500frame->GetNodes()->Last())->SetName("DET_SI2-T3");
   si500frame->AddNode(si500vol, 4, new TGeoTranslation(-si_centre, -si_centre, si500_position));
   dynamic_cast<TNamed*>(si500frame->GetNodes()->Last())->SetName("DET_SI2-T4");

   TGeoVolumeAssembly* full_silicons = new TGeoVolumeAssembly("FULL_SILICONS");
   // make front cache
   TGeoVolume* ergal_frame_front = MakeErgalFrame(front_frame_depth, front_frame_depth);

   // add CsI
   TGeoVolumeAssembly* quartet = new TGeoVolumeAssembly("STRUCT_QUARTET");

   quartet->AddNode(ergal_frame_front, 1, new TGeoTranslation(0, 0, -0.5 * full_length_quartet + 0.5 * front_frame_depth));
   quartet->AddNode(si300frame, 1, new TGeoTranslation(0, 0, -0.5 * full_length_quartet + front_frame_depth + 0.5 * frame_depth_300));
   quartet->AddNode(si500frame, 1, new TGeoTranslation(0, 0, -0.5 * full_length_quartet + front_frame_depth + frame_depth_300 + .5 * frame_depth_500));
   KVMaterial csi("CsI");
   // to make the CsI we need the distance from the target to the front of the CsI
   // the SI1 is supposed to be 100cm from the target
   // it is placed at (front_frame_depth+frame_edge_depth) behind the front frame
   double dist_targ_csi = 100 - (front_frame_depth + frame_edge_depth) + full_width + dist_si2_csi;
   for (int tel_num = 1; tel_num <= 4; ++tel_num) {
      TGeoVolume* csi_vol =
         gGeoManager->MakeArb8(Form("DET_CSI-T%d", tel_num), csi.GetGeoMedium(), csi_depth / 2,
                               GetCoordsCSI(tel_num, si_holder_side, centre_cross_thick, dist_targ_csi, csi_depth).data());
      quartet->AddNode(csi_vol, tel_num, new TGeoTranslation(0, 0, 0.5 * full_length_quartet - 0.5 * csi_depth));
      dynamic_cast<TNamed*>(quartet->GetNodes()->Last())->SetName(Form("DET_CSI-T%d", tel_num));
   }
   quartet->AddNode(MakeCrossPieceCSI(si_holder_side, centre_cross_thick, dist_targ_csi, csi_depth),
                    1, new TGeoTranslation(0, 0, 0.5 * full_length_quartet - 0.5 * csi_depth));
   quartet->AddNode(MakeLeftCrossPieceCSI(si_holder_side, centre_cross_thick, dist_targ_csi, csi_depth),
                    1, new TGeoTranslation(0, 0, 0.5 * full_length_quartet - 0.5 * csi_depth));
   quartet->AddNode(MakeRightCrossPieceCSI(si_holder_side, centre_cross_thick, dist_targ_csi, csi_depth),
                    1, new TGeoTranslation(0, 0, 0.5 * full_length_quartet - 0.5 * csi_depth));

   return quartet;
}

TGeoVolume* KVFAZIABlock::MakeSarco()
{
   KVMaterial al("Al"), cu("Cu");

   TGeoVolume* side = gGeoManager->MakeBox("SARCO_SIDE", al.GetGeoMedium(), .5 * sarco_height, .5 * sarco_epaisseur, .5 * sarco_length);
   TGeoVolume* top = gGeoManager->MakeBox("SARCO_TOP", al.GetGeoMedium(), .5 * sarco_epaisseur, .5 * (sarco_width - 2 * sarco_epaisseur), .5 * sarco_length);
   TGeoVolume* bottom = gGeoManager->MakeBox("SARCO_BOT", cu.GetGeoMedium(), sarco_epaisseur, .5 * (sarco_width - 2 * sarco_epaisseur), .5 * sarco_length);
   TGeoVolume* back = gGeoManager->MakeBox("SARCO_BACK", al.GetGeoMedium(), 0.5 * (sarco_height - 3 * sarco_epaisseur - sarco_uplift),
                                           0.5 * (sarco_width - 2 * sarco_epaisseur), 0.5 * sarco_epaisseur);

   TGeoVolumeAssembly* sarco = new TGeoVolumeAssembly("ASCO_SARCO");
   sarco->AddNode(side, 1, new TGeoTranslation(0, -0.5 * sarco_width + 0.5 * sarco_epaisseur, 0));
   sarco->AddNode(side, 2, new TGeoTranslation(0, 0.5 * sarco_width - 0.5 * sarco_epaisseur, 0));
   sarco->AddNode(top, 1, new TGeoTranslation(0.5 * sarco_height - 0.5 * sarco_epaisseur, 0, 0));
   sarco->AddNode(bottom, 1, new TGeoTranslation(-.5 * sarco_height + sarco_uplift + sarco_epaisseur, 0, 0));
   sarco->AddNode(back, 1, new TGeoTranslation(0.5 * (sarco_epaisseur + sarco_uplift), 0, 0.5 * sarco_length - 0.5 * sarco_epaisseur));

   return sarco;
}
