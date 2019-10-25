#include "Riostream.h"
#include "KVVoltEnergy.h"
#include "TMath.h"

ClassImp(KVVoltEnergy);

//___________________________________________________________________________
//Calibration object dedicated to handling the volt-energy calibration
//of Si and ChIo detectors. The transfer function is a linear
//function
//
//        Energy[MeV] = a0 + a1*V [Volts]
//
//The type of the calibrator is "Volt-Energy"
//__________________________________________________________________________

KVVoltEnergy::KVVoltEnergy(): KVCalibrator(2)
{
   SetType("Volt-Energy");
}

//___________________________________________________________________________
KVVoltEnergy::KVVoltEnergy(KVDetector* kvd): KVCalibrator(2)
{
   //Create a calibration object for a specific detector (*kvd)

   SetType("Volt-Energy");
   SetDetector(kvd);
}

//___________________________________________________________________________
Double_t KVVoltEnergy::Compute(Double_t volts, const KVNameValueList&) const
{
   //Calculate the calibrated energy in Mev for the given voltage
   if (GetStatus()) {
      return GetParameter(0) + GetParameter(1) * volts;
   }
   else {
      /*      cout <<
                "Double_t KVVoltEnergy::Compute(Double_t chan) : Parameters not correctly initialized"
                << endl;
      */ return 0.;
   }
}
//___________________________________________________________________________
Double_t KVVoltEnergy::Invert(Double_t energy, const KVNameValueList&) const
{
   //Given the calibrated (or simulated) energy in MeV,
   //calculate the corresponding voltage according to the
   //calibration parameters (useful for filtering simulations).

   if (fReady) {
      return (energy - GetParameter(0)) / GetParameter(1);
   }
   else {
      Warning("Compute",
              "Parameters not correctly initialized for calibrator %s of %s",
              GetType(),
              (GetDetector() ? GetDetector()->
               GetName() : "(unknown detector)"));
      return 0;
   }
}
