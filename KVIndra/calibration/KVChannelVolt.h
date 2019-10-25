#ifndef KV_CHANNEL_VOLT_H
#define KV_CHANNEL_VOLT_H

#include "KVCalibrator.h"

class KVChannelVolt: public KVCalibrator {
protected:
   Char_t fSignal[3];
   Double_t gain_ref;
public:
   KVChannelVolt();
   KVChannelVolt(const Char_t* signal, KVDetector* kvd);
   virtual ~ KVChannelVolt()
   {
   }

   virtual Double_t Compute(Double_t chan, const KVNameValueList& = "") const;
   virtual Double_t Invert(Double_t volts, const KVNameValueList& = "") const;
   void SetGainRef(Double_t ref);
   Double_t GetGainRef(void);

   virtual void SetSignal(const Char_t* signal);

   ClassDef(KVChannelVolt, 1)   //Electronic calibration for Si and ChIo detectors.
};
#endif
