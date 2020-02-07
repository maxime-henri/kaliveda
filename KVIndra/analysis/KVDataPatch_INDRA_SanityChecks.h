//Created by KVClassFactory on Fri Feb  7 16:31:27 2020
//Author: John Frankland,,,

#ifndef __KVDATAPATCH_INDRA_SANITYCHECKS_H
#define __KVDATAPATCH_INDRA_SANITYCHECKS_H

#include "KVDataPatch.h"

class KVDataPatch_INDRA_SanityChecks : public KVDataPatch {
public:
   KVDataPatch_INDRA_SanityChecks();
   virtual ~KVDataPatch_INDRA_SanityChecks() {}

   virtual Bool_t IsRequired(TString dataset, TString datatype, Int_t,
                             TString, Int_t, const TList*)
   {
      return ((dataset == "INDRA_camp1" || dataset == "INDRA_camp2" || dataset == "INDRA_camp4") && datatype == "root");
   }
   virtual Bool_t IsEventPatch()
   {
      return kFALSE;
   }
   virtual Bool_t IsParticlePatch()
   {
      return kTRUE;
   }
   virtual void ApplyToEvent(KVEvent*) {}
   virtual void ApplyToParticle(KVNucleus*);

   virtual void PrintPatchInfo() const;

   ClassDef(KVDataPatch_INDRA_SanityChecks, 1) //General sanity checks for old INDRA data
};

#endif
