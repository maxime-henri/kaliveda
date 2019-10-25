#ifndef KV_LIGHT_ENERGY_CSI_H
#define KV_LIGHT_ENERGY_CSI_H

#include "KVCalibrator.h"

class KVLightEnergyCsI: public KVCalibrator {

public:
   KVLightEnergyCsI();
   virtual ~ KVLightEnergyCsI() {}

   virtual Double_t Compute(Double_t chan, const KVNameValueList& z_and_a = "") const;
   virtual Double_t Invert(Double_t, const KVNameValueList& z_and_a = "") const;

   ClassDef(KVLightEnergyCsI, 1)        //Light-energy calibration for CsI detectors
};

#endif
