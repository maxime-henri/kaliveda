#ifndef KV_CHANNEL_ENERGY_ALPHA_H
#define KV_CHANNEL_ENERGY_ALPHA_H

#include "KVCalibrator.h"

class KVChannelEnergyAlpha: public KVCalibrator {
protected:
   TString fSignal;
public:
   KVChannelEnergyAlpha();
   KVChannelEnergyAlpha(const Char_t* signal, KVDetector* kvd);
   virtual ~ KVChannelEnergyAlpha()
   {
   }

   Double_t Compute(Double_t chan, const KVNameValueList& = "") const;
   Double_t Invert(Double_t volts, const KVNameValueList& = "") const;

   void SetSignal(const Char_t* signal);

   ClassDef(KVChannelEnergyAlpha, 1)    //Alpha channel-energy calibration for Si and ChIo detectors.
};
#endif
