//Created by KVClassFactory on Wed Jun  5 17:00:08 2019
//Author: John Frankland,,,

#ifndef __KVDETECTORSIGNAL_H
#define __KVDETECTORSIGNAL_H

#include "KVBase.h"

class KVDetectorSignal : public KVBase {
public:
   KVDetectorSignal()
      : KVBase()
   {}
   KVDetectorSignal(const Char_t* type)
      : KVBase(type)
   {}
   virtual ~KVDetectorSignal()
   {}

   virtual Double_t GetValue() const
   {
      return 0;
   }
   virtual Double_t GetInverseValue(Double_t, const TString&) const
   {
      return 0;
   }

   ClassDef(KVDetectorSignal, 1) //Signal associated with detector
};

#endif
