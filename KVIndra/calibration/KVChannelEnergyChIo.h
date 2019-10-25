#ifndef KV_CHANNEL_ENERGY_CHIO_H
#define KV_CHANNEL_ENERGY_CHIO_H

#include "KVCalibrator.h"

class KVChannelEnergyChIo: public KVCalibrator {

public:
   KVChannelEnergyChIo();
   KVChannelEnergyChIo(KVDetector* kvd);
   virtual ~ KVChannelEnergyChIo()
   {
   }

   virtual Double_t Compute(Double_t chan, const KVNameValueList& = "") const;
   virtual Double_t Invert(Double_t volts, const KVNameValueList& = "") const;

   ClassDef(KVChannelEnergyChIo, 1)     //Pedestal-corrected linear channel-energy calibration from thoron and elastic peaks for ChIo detectors.
};

#endif
