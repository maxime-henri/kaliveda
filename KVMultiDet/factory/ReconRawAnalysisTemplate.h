#include "KVReconRawDataAnalyser.h"

class ReconRawAnalysisTemplate : public KVReconRawDataAnalyser {
   Int_t Mult;
   TString ArrayName;
   Int_t Z;

public:
   ReconRawAnalysisTemplate() {}
   virtual ~ReconRawAnalysisTemplate() {}

   void InitAnalysis();
   void InitRun();
   Bool_t Analysis();
   void EndRun() {}
   void EndAnalysis() {}

   ClassDef(ExampleReconRawAnalysis, 0)
};
