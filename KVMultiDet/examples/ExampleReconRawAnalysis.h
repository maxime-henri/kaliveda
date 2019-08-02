//Created by KVClassFactory on Fri Aug  2 16:52:45 2019
//Author: John Frankland,,,

#ifndef __EXAMPLERECONRAWANALYSIS_H
#define __EXAMPLERECONRAWANALYSIS_H

#include "KVReconRawDataAnalyser.h"

class ExampleReconRawAnalysis : public KVReconRawDataAnalyser {
   Int_t Mult;
   TString ArrayName;
   Int_t Z;

public:
   ExampleReconRawAnalysis() {}
   virtual ~ExampleReconRawAnalysis() {}

   void InitAnalysis();
   void InitRun();
   Bool_t Analysis();
   void EndRun() {}
   void EndAnalysis() {}

   ClassDef(ExampleReconRawAnalysis, 1) //Analysis of reconstructed raw data
};


#endif
