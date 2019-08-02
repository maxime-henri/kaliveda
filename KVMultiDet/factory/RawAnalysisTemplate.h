#include "KVRawDataAnalyser.h"

class RawAnalysisTemplate : public KVRawDataAnalyser {
   Int_t Mult;
   TString DetSigName;
   Double_t DetSigVal;

public:
   RawAnalysisTemplate() {}
   virtual ~RawAnalysisTemplate() {}

   void InitAnalysis();
   void InitRun();
   Bool_t Analysis();
   void EndRun() {}
   void EndAnalysis() {}

   ClassDef(RawAnalysisTemplate, 1)
};
