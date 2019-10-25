#ifndef KV_VOLT_ENERGY_H
#define KV_VOLT_ENERGY_H

#include "KVCalibrator.h"

class KVVoltEnergy: public KVCalibrator {
public:
   KVVoltEnergy();
   KVVoltEnergy(KVDetector* kvd);
   virtual ~ KVVoltEnergy()
   {
   }

   Double_t Compute(Double_t volts, const KVNameValueList& = "") const;
   Double_t Invert(Double_t energy, const KVNameValueList& = "") const;

   ClassDef(KVVoltEnergy, 1)    //Volt-Energy calibration for Si and ChIo detectors.
};
#endif
