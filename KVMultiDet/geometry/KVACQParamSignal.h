//Created by KVClassFactory on Thu Jun 13 12:20:05 2019
//Author: John Frankland,,,

#ifndef __KVACQPARAMSIGNAL_H
#define __KVACQPARAMSIGNAL_H

#include "KVDetectorSignal.h"
#include "KVACQParam.h"

class KVACQParamSignal : public KVDetectorSignal {
   KVACQParam* fParam;

public:
   KVACQParamSignal()
      : KVDetectorSignal(), fParam(nullptr)
   {}
   KVACQParamSignal(KVACQParam* p)
      : KVDetectorSignal(p->GetType()), fParam(p)
   {}

   virtual ~KVACQParamSignal()
   {}

   Double_t GetValue() const
   {
      return fParam->GetData();
   }
   Double_t GetInverseValue(Double_t out_val, const TString& in_sig) const
   {
      // Returns the value of the input signal for a given value of the output,
      // using the inverse calibration function

      if (in_sig == GetName()) return out_val;
      return 0.;
   }
   ClassDef(KVACQParamSignal, 1) //Wrapper signal for KVACQParam objects
};

#endif
