//Created by KVClassFactory on Fri Jan 23 18:44:27 2015
//Author: ,,,

#include "KVFAZIADetector.h"
#include "KVFAZIACalibrator.h"
#include "KVIDTelescope.h"
#include "KVFAZIA.h"
#include "KVSignal.h"
#include "KVPSAResult.h"
#include "TClass.h"
#include "KVLightEnergyCsIFull.h"
#include "KVDataSet.h"
#include "KVFAZIADetectorSignal.h"

ClassImp(KVFAZIADetector)

////////////////////////////////////////////////////////////////////////////////
// BEGIN_HTML <!--
/* -->
<h2>KVFAZIADetector</h2>
<h4>Base class for FAZIA detector</h4>
<!-- */
// --> END_HTML
//
// DETECTOR NAMES
// ==============
// Detector names are assumed to be defined as
// label-xxx
// where xxx is computed as follows (see KVFAZIADetector::GetIndex) :
// 100*block number+10*quartet number+telescope number
// and label can be SI1, SI2 or CSI
// For example SI1-123 is the Silicon Si1 of the block 1, the quartet 2 and the telescope 3

////////////////////////////////////////////////////////////////////////////////

//________________________________________________________________
void KVFAZIADetector::init()
{
   //default initialisations
   fSignals.SetOwner();

   fBlock = -1;
   fIdentifier = kOTHER;
   fQuartet = -1;
   fTelescope = -1;
   fIndex = -1;
   fIsRutherford = kFALSE;

   fChannelToEnergy = 0;
   fChannelToVolt = 0;
   fVoltToEnergy = 0;
   fLabel = -1;
   fChannel = 0;
   fVolt = 0;

}

//________________________________________________________________
Double_t KVFAZIADetector::GetSetupParameter(const Char_t* parname)
{

   Double_t lval = -1;
   if (gDataSet)  lval = gDataSet->GetDataSetEnv(parname, 0.0);
   else           lval = gEnv->GetValue(parname, 0.0);
   return lval;

}

void KVFAZIADetector::RefreshCalibratorPointers()
{
   fChannelToEnergy = GetCalibrator("Channel-Energy");
   fChannelToVolt = GetCalibrator("Channel-Volt");
   fVoltToEnergy = GetCalibrator("Volt-Energy");
}

//________________________________________________________________
KVFAZIADetector::KVFAZIADetector()
{
   // Default constructor
   init();
}

//________________________________________________________________
KVFAZIADetector::KVFAZIADetector(const Char_t* type, const Float_t thick) : KVDetector(type, thick)
{
   // Create detector of given material type and thickness (in centimetres)
   init();
}

//________________________________________________________________
KVFAZIADetector::~KVFAZIADetector()
{
   // Destructor
}

//________________________________________________________________
//KVList* KVFAZIADetector::PrepareIDTelescopeList()
//{

//   KVList* lsub = new KVList();
//   lsub->SetOwner(kFALSE);

//   KVList* ltel = GetAlignedIDTelescopes();
//   TList* ldet = GetAlignedDetectors();
//   KVNumberList nl;
//   nl.SetMinMax(0, ltel->GetEntries() - 1);
//   for (Int_t ii = 0; ii < ldet->GetEntries(); ii += 1) {
//      KVDetector* det = (KVDetector*)ldet->At(ii);
//      for (Int_t jj = 0; jj < ltel->GetEntries(); jj += 1) {
//         KVIDTelescope* tel = (KVIDTelescope*)ltel->At(jj);
//         if (tel->GetDetector(1) == det || (tel->GetSize() == 2 && tel->GetDetector(2) == det)) {
//            if (nl.Contains(jj)) {
//               lsub->Add(tel);
//               nl.Remove(jj);
//            }
//         }
//      }
//   }
//   return lsub;

//}

////________________________________________________________________
//void KVFAZIADetector::SortIDTelescopes()
//{

//   KVList* lsub = PrepareIDTelescopeList();
//   KVList* ltel = GetAlignedIDTelescopes();
//   Int_t nn = ltel->GetEntries();
//   for (Int_t ii = 0; ii < nn; ii += 1)
//      ltel->RemoveAt(0);
//   for (Int_t ii = 0; ii < nn; ii += 1)
//      ltel->Add(lsub->At(ii));
//   delete lsub;

//}

//________________________________________________________________
void KVFAZIADetector::SetCalibrators()
{
   //Set up calibrators for this detector. Call once name has been set.
   //test to check that there is not already defined calibrators
   //
   if (GetListOfCalibrators())
      return;

   TString sf = "";
   KVCalibrator* fzcal;

   if (fIdentifier == kCSI) {
      fzcal = new KVLightEnergyCsIFull(GetName(), "Channel-Energy", this, KVLightEnergyCsIFull::kExact);
   }
   else {
      fzcal = new KVFAZIACalibrator(GetName(), "Channel-Energy");
      sf = gEnv->GetValue("FAZIADetector.Calib.Channel-Energy", "");
      if (sf == "") {
         Warning("SetCalibrators", "No formula defined for Calibration Channel-Energy");
      }
      else {
         ((KVFAZIACalibrator*)fzcal)->SetFunction(sf.Data());
      }
   }
   if (!AddCalibrator(fzcal)) delete fzcal;

   fzcal = new KVFAZIACalibrator(GetName(), "Channel-Volt");
   sf = gEnv->GetValue("FAZIADetector.Calib.Channel-Volt", "");
   if (sf == "") {
      Warning("SetCalibrators", "No formula defined for Calibration Channel-Volt");
   }
   else {
      ((KVFAZIACalibrator*)fzcal)->SetFunction(sf.Data());
   }
   if (!AddCalibrator(fzcal)) delete fzcal;

   fzcal = new KVFAZIACalibrator(GetName(), "Volt-Energy");
   sf = gEnv->GetValue("FAZIADetector.Calib.Volt-Energy", "");
   if (sf == "") {
      Warning("SetCalibrators", "No formula defined for Calibration Volt-Energy");
   }
   else {
      ((KVFAZIACalibrator*)fzcal)->SetFunction(sf.Data());
   }

   if (!AddCalibrator(fzcal)) delete fzcal;
}

//________________________________________________________________
void KVFAZIADetector::Copy(TObject& obj) const
{
   // This method copies the current state of 'this' object into 'obj'
   // You should add here any member variables, for example:
   //    (supposing a member variable KVFAZIADetector::fToto)
   //    CastedObj.fToto = fToto;
   // or
   //    CastedObj.SetToto( GetToto() );

   KVDetector::Copy(obj);
   //KVFAZIADetector& CastedObj = (KVFAZIADetector&)obj;
}

//________________________________________________________________
void  KVFAZIADetector::Clear(Option_t*)
{

   KVDetector::Clear("");
   fSignals.Execute("Set", "0");

}

//________________________________________________________________
void KVFAZIADetector::SetName(const char* name)
{
   TNamed::SetName(name);
   SetProperties();
}

//________________________________________________________________
Bool_t KVFAZIADetector::SetProperties()
{
   // detector name are assumed to be defined as
   // label-xxx
   // where xxx is computed as follow :
   // 100*block number+10*quartet number+telescope number
   // and label can be SI1, SI2 or CSI
   // For example SI1-123 is the Silicon Si1 of the block 1, the quartet 2 and the telescope 3
   //
   //

   KVString tmp;
   KVString sname(GetName());

   sname.Begin("-");
   SetLabel(sname.Next());
   if (!strcmp(GetLabel(), "SI1")) fIdentifier = kSI1;
   else if (!strcmp(GetLabel(), "SI2")) fIdentifier = kSI2;
   else if (!strcmp(GetLabel(), "CSI")) fIdentifier = kCSI;

   gFazia->AddDetectorLabel(GetLabel());

   // read thresholds to be applied on FPGA energies to decide if detector is fired
   fQH1Threshold = GetSetupParameter("QH1.MinimumAmplitude");
   fQ2Threshold = GetSetupParameter("Q2.MinimumAmplitude");
   fQ3Threshold = GetSetupParameter("Q3.MinimumAmplitude");

   // if f[DET]FiredFromSignals = true, use the signal to decide if detector is fired
   // instead of FPGA energies (old fashion)
   fIsFiredFromSignals = GetSetupParameter(Form("%s.IsFiredFromSignal", GetLabel())) > 0.5;

   tmp = sname.Next();
   if (tmp == "RUTH") {
      fIsRutherford = kTRUE;
      fIndex = fTelescope = fQuartet = fBlock = 0;
   }
   else if (tmp.IsDigit()) {
      fIndex = tmp.Atoi();
      fBlock = fIndex / 100;
      fQuartet = (fIndex - fBlock * 100) / 10;
      fTelescope = fIndex - fBlock * 100 - fQuartet * 10;
   }
   else {
      Info("SetProperties", "Unkown format for the detector %s", GetName());
   }

   KVSignal* sig = 0;
   //"QH1", "I1", "QL1", "Q2", "I2", "Q3
   fSignals.Clear();
   KVString lsignals = "";
   if (!strcmp(GetLabel(), "SI1")) {
      lsignals = "QH1,I1,QL1";

      AddDetectorSignal(new KVFAZIADetectorSignal("QH1FPGAEnergy", this, &KVFAZIADetector::GetQH1FPGAEnergy));
      AddDetectorSignal(new KVFAZIADetectorSignal("QH1RiseTime", this, &KVFAZIADetector::GetQH1RiseTime));
      AddDetectorSignal(new KVFAZIADetectorSignal("QH1Amplitude", this, &KVFAZIADetector::GetQH1Amplitude));
      AddDetectorSignal(new KVFAZIADetectorSignal("QL1Amplitude", this, &KVFAZIADetector::GetQL1Amplitude));
      AddDetectorSignal(new KVFAZIADetectorSignal("QL1RiseTime", this, &KVFAZIADetector::GetQL1RiseTime));
      AddDetectorSignal(new KVFAZIADetectorSignal("I1Amplitude", this, &KVFAZIADetector::GetI1Amplitude));
   }
   else if (!strcmp(GetLabel(), "SI2")) {
      lsignals = "Q2,I2";
      AddDetectorSignal(new KVFAZIADetectorSignal("Q2FPGAEnergy", this, &KVFAZIADetector::GetQ2FPGAEnergy));
      AddDetectorSignal(new KVFAZIADetectorSignal("Q2RiseTime", this, &KVFAZIADetector::GetQ2RiseTime));
      AddDetectorSignal(new KVFAZIADetectorSignal("Q2Amplitude", this, &KVFAZIADetector::GetQ2Amplitude));
      AddDetectorSignal(new KVFAZIADetectorSignal("I2Amplitude", this, &KVFAZIADetector::GetI2Amplitude));
   }
   else if (!strcmp(GetLabel(), "CSI")) {
      lsignals = "Q3";
      AddDetectorSignal(new KVFAZIADetectorSignal("Q3FPGAEnergy", this, &KVFAZIADetector::GetQ3FPGAEnergy));
      AddDetectorSignal(new KVFAZIADetectorSignal("Q3FastFPGAEnergy", this, &KVFAZIADetector::GetQ3FastFPGAEnergy));
      AddDetectorSignal(new KVFAZIADetectorSignal("Q3Amplitude", this, &KVFAZIADetector::GetQ3Amplitude));
      AddDetectorSignal(new KVFAZIADetectorSignal("Q3FastAmplitude", this, &KVFAZIADetector::GetQ3FastAmplitude));
      AddDetectorSignal(new KVFAZIADetectorSignal("Q3SlowAmplitude", this, &KVFAZIADetector::GetQ3SlowAmplitude));
      AddDetectorSignal(new KVFAZIADetectorSignal("Q3RiseTime", this, &KVFAZIADetector::GetQ3RiseTime));
   }
   else {
      Warning("SetProperties", "Unknown label \"%s\" for this detector : %s\n", GetLabel(), GetName());
      lsignals = "";
   }
   lsignals.Begin(",");
   while (!lsignals.End()) {

      KVString ssig = lsignals.Next();
      sig = KVSignal::MakeSignal(ssig);

      sig->SetName(Form("%s-%s", ssig.Data(), tmp.Data()));
      sig->SetType(ssig.Data());

      sig->LoadPSAParameters();
      sig->SetDetectorName(GetName());

      fSignals.Add(sig);
   }

   //SetCalibrators();

   return kTRUE;
}
//________________________________________________________________
const Char_t* KVFAZIADetector::GetNewName(KVString oldname)
{
   // Translate an old-style FAZIA detector name (e.g. "SI1-T1-Q2-B001")
   // to the new format ("SI1-121")

   Int_t tt = 0, qq = 0, bb = 0;
   KVString tmp = "";
   KVString lab = "";
   oldname.Begin("-");

   if (!oldname.End()) {
      lab = oldname.Next();
   }
   if (!oldname.End()) {
      tmp = oldname.Next();
      tmp.ReplaceAll("T", "");
      tt = tmp.Atoi();
   }
   if (!oldname.End()) {
      tmp = oldname.Next();
      tmp.ReplaceAll("Q", "");
      qq = tmp.Atoi();
   }
   if (!oldname.End()) {
      tmp = oldname.Next();
      tmp.ReplaceAll("B", "");
      bb = tmp.Atoi();
   }
   static KVString newname;
   newname.Form("%s-%d", lab.Data(), bb * 100 + qq * 10 + tt);
   return newname.Data();

}

//________________________________________________________________
Bool_t KVFAZIADetector::Fired(Option_t*) const
{
   // Returns kTRUE if detector was hit (fired) in an event
   //
   // The test is made on charge signals of the detectors
   // if one of them return kTRUE to KVSignal::IsFired() method KVDetector::Fired() return kTRUE
   // if not return kFALSE and the detector will not be considered in following analysis
   // except if one detector after it has been fired
   //
   // If the detector is in "simulation mode", i.e. if SetSimMode(kTRUE) has been called,
   // this method returns kTRUE if the calculated energy loss in the active layer is > 0.
   //

   if (!IsDetecting()) return kFALSE; //detector not working, no answer at all
   if (IsSimMode()) return (GetActiveLayer()->GetEnergyLoss() > 0.); // simulation mode: detector fired if energy lost in active layer

   if (!fIsFiredFromSignals) {
      switch (GetIdentifier()) {
         case kSI1:
            if (fFPGAEnergyQH1 > fQH1Threshold) return kTRUE;
            else return kFALSE;
            break;
         case kSI2:
            if (fFPGAEnergyQ2 > fQ2Threshold) return kTRUE;
            else return kFALSE;
            break;
         case kCSI:
            if (fFPGAEnergyQ3 > fQ3Threshold) return kTRUE;
            else return kFALSE;
            break;
         default:
            return kFALSE;
            break;
      }
   }

//   hereafter : old way of doing...
   KVSignal* sig;
   if (fSignals.GetSize()) {
      TIter next(&fSignals);
      while ((sig = (KVSignal*)next())) {
         if (sig->IsOK()) {
            if (sig->IsCharge()) {
               //pre process to use the test method KVSignal::IsFired()
               sig->ComputeEndLine();
               sig->TreateSignal();
               if (sig->IsFired()) {
                  return kTRUE;
               }
               else {
               }
            }
         }
         else {
            Warning("Fired", "%s has empty signal %s", GetName(), sig->GetName());
         }
      }
   }
   else {
      Warning("Fired", "%s : No signal attached to this detector ...", GetName());
   }
   return kFALSE;
}

//_________________________________________________________________________________
void KVFAZIADetector::SetSignal(TGraph* signal, const Char_t* signal_name)
{
   // Copy waveform data from TGraph into the signal with the given name (QH1-345 etc.)
   // Then calculate Ymin/ymax, ADC data, shit, blabla

   KVSignal* sig = GetSignal(signal_name);
   if (sig) {
      sig->SetData(signal->GetN(), signal->GetX(), signal->GetY());
   }
   else {
      Warning("SetSignal", "%s : No signal of name #%s# is available", GetName(), signal_name);
   }
}

//_________________________________________________________________________________
Bool_t KVFAZIADetector::HasSignal() const
{
   // Returns kTRUE if detector has at least 1 associated signal
   return (fSignals.GetEntries() > 0);
}

//_________________________________________________________________________________
KVSignal* KVFAZIADetector::GetSignal(const Char_t* name) const
{
   // Access detector signal by name, i.e. as in FAZIA raw data
   // e.g. "QL1-231"
   return (KVSignal*)fSignals.FindObject(name);
}

//_________________________________________________________________________________
KVSignal* KVFAZIADetector::GetSignalByType(const Char_t* type) const
{
   // Access detector signal of given type: "I1", "I2", "Q2", "Q3", "QH1", "QL1"
   return (KVSignal*)fSignals.FindObjectByType(type);
}

//_________________________________________________________________________________
KVSignal* KVFAZIADetector::GetSignal(Int_t idx) const
{
   // Access signal with given index in list of detector's signals
   // 0 <= idx < KVFAZIADetector::GetNumberOfSignals()
   if (0 <= idx && idx < fSignals.GetEntries())
      return (KVSignal*)fSignals.At(idx);
   return nullptr;
}

//_________________________________________________________________________________
Int_t KVFAZIADetector::GetNumberOfSignals() const
{
   return fSignals.GetEntries();
}

//_________________________________________________________________________________
const KVSeqCollection* KVFAZIADetector::GetListOfSignals() const
{
   return &fSignals;
}

//_________________________________________________________________________________
void KVFAZIADetector::ComputePSA()
{
   // Perform Pulse Shape Analysis on all signals
   KVSignal* sig = 0;
   TIter nexts(GetListOfSignals());
   while ((sig = (KVSignal*)nexts())) {
      sig->TreateSignal();
   }
}

void KVFAZIADetector::SetFPGAEnergy(int sigid, Int_t idx, Double_t energy)
{
   switch (sigid) {
      case KVSignal::kQH1:
         if (idx == 0) SetQH1FPGAEnergy(energy);
         break;
      case KVSignal::kI1:
         break;
      case KVSignal::kQL1:
         break;
      case KVSignal::kQ2:
         if (idx == 0) SetQ2FPGAEnergy(energy);
         break;
      case KVSignal::kI2:
         break;
      case KVSignal::kQ3:
         if (idx == 0) SetQ3FPGAEnergy(energy);
         if (idx == 1) SetQ3FastFPGAEnergy(energy);
         break;
   }
}

KVNameValueList* KVFAZIADetector::GetFPGAEnergyList()
{
   KVNameValueList* fpga = new KVNameValueList();

   switch (GetIdentifier()) {
      case kSI1:
         fpga->SetValue(Form("%s.%s.%s", GetName(), "QH1", "FPGAEnergy"), GetQH1FPGAEnergy());
         break;
      case kSI2:
         fpga->SetValue(Form("%s.%s.%s", GetName(), "Q2", "FPGAEnergy"), GetQ2FPGAEnergy());
         break;
      case kCSI:
         fpga->SetValue(Form("%s.%s.%s", GetName(), "Q3", "FPGAEnergy"), GetQ3FPGAEnergy());
         fpga->SetValue(Form("%s.%s.%s", GetName(), "Q3", "FastFPGAEnergy"), GetQ3FastFPGAEnergy());
         break;
   }
   return fpga;
}
