#ifndef KV_CHANNEL_ENERGY_BRHO_H
#define KV_CHANNEL_ENERGY_BRHO_H

#include "KVCalibrator.h"

class KVChannelEnergyBrho: public KVCalibrator {

public:
   KVChannelEnergyBrho();
   KVChannelEnergyBrho(KVDetector* kvd);
   virtual ~ KVChannelEnergyBrho()
   {
   }

   virtual Double_t Compute(Double_t chan, const KVNameValueList& = "") const;
   virtual Double_t Invert(Double_t volts, const KVNameValueList& = "") const;

   Double_t GetChi2() const
   {
      return GetParameter(2);
   }

   ClassDef(KVChannelEnergyBrho, 1)     //Pedestal-corrected linear channel-energy calibration from Brho data for Si and ChIo detectors.
};

#endif
