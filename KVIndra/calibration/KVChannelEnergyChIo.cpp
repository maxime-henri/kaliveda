#include "KVChannelEnergyChIo.h"
#include "TMath.h"
#include "KVChIo.h"

ClassImp(KVChannelEnergyChIo);

////////////////////////////////////////////////////////////////////////////
//Linear channel-energy calibration for silicon and ChIo detectors calculated
//from ChIo points for different light nuclei up to Z=6~8.
//The channel value is the grand gain (GG) value. If this is saturated, the
//pedestal-corrected PG channel is used to estimate the GG channel.


KVChannelEnergyChIo::KVChannelEnergyChIo(): KVCalibrator(2)
{
   SetType("Channel-Energy ChIo");
}

//___________________________________________________________________________
KVChannelEnergyChIo::KVChannelEnergyChIo(KVDetector* kvd): KVCalibrator(2)
{
   //Create a calibration object for a specific detector (*kvd)
   SetType("Channel-Energy ChIo");
   SetDetector(kvd);
}

//___________________________________________________________________________
Double_t KVChannelEnergyChIo::Compute(Double_t chan, const KVNameValueList&) const
{
   //Calculate the calibrated energy (in MeV) for a given GG channel number.
   //
   //If GG is saturated (>4000: we avoid the top end of the GG),
   //an "extrapolated" GG is calculated from PG using experimental fits.

   if (fReady) {
      Double_t chan_corr;
      if (chan > 4000.) {
         chan = ((KVChIo*) GetDetector())->GetGGfromPG();
      }
      chan_corr = chan - GetDetector()->GetPedestal("GG");
      return (GetParameter(0) + GetParameter(1) * chan_corr);
   }
   return 0.;
}

//___________________________________________________________________________
Double_t KVChannelEnergyChIo::Invert(Double_t energy, const KVNameValueList&) const
{
   //Given the calibrated (or simulated) energy in MeV,
   //calculate the corresponding channel number according to the
   //calibration parameters (useful for filtering simulations).

   KVDetector* det = GetDetector();
   Int_t channel = 0;

   if (fReady) {
      // linear transfer function
      channel = (Int_t)(0.5 + (energy - GetParameter(0)) / GetParameter(1)
                        + det->GetPedestal("GG"));
   }
   else {
      Warning("Compute", "Parameters not correctly initialized");
   }
   return (Double_t) channel;
}
