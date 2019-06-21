//Created by KVClassFactory on Thu Jun 20 15:36:03 2019
//Author: John Frankland,,,

#ifndef __KVDETECTORSIGNALEXPRESSION_H
#define __KVDETECTORSIGNALEXPRESSION_H

#include "KVDetectorSignal.h"
#include "TFormula.h"

class KVDetectorSignalExpression : public KVDetectorSignal {
#if ROOT_VERSION_CODE < ROOT_VERSION(6,0,0)
   TFormula* fFormula;//!
#else
   std::unique_ptr<TFormula> fFormula;
#endif
   std::vector<KVDetectorSignal*> fSignals;
   Bool_t fValid;

public:
   KVDetectorSignalExpression(const Char_t* type, const KVString& _expr, KVDetector* det);
   virtual ~KVDetectorSignalExpression()
   {
#if ROOT_VERSION_CODE < ROOT_VERSION(6,0,0)
      SafeDelete(fFormula);
#endif
   }

   Double_t GetValue() const;
   Bool_t IsValid() const
   {
      return fValid;
   }

   ClassDef(KVDetectorSignalExpression, 1) //Mathematical expression involving one or more detector signals
};

#endif
