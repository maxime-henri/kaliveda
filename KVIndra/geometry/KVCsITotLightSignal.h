//Created by KVClassFactory on Mon Jun 17 09:54:21 2019
//Author: John Frankland,,,

#ifndef __KVCSITOTLIGHTSIGNAL_H
#define __KVCSITOTLIGHTSIGNAL_H

#include "KVDetectorSignal.h"
#include "KVCsI.h"

class KVCsITotLightSignal : public KVDetectorSignal {

public:
   KVCsITotLightSignal(KVCsI* csi)
      : KVDetectorSignal("TOT_LIGHT", csi)
   {}
   virtual ~KVCsITotLightSignal()
   {}

   Double_t GetValue() const
   {
      return ((KVCsI*)GetDetector())->GetLumiereTotale();
   }

   ClassDef(KVCsITotLightSignal, 1) //Return total light output for INDRA CsI detector
};

#endif
