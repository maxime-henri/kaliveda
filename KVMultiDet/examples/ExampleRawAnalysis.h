//Created by KVClassFactory on Fri Aug  2 15:34:58 2019
//Author: John Frankland,,,

#ifndef __EXAMPLERAWANALYSIS_H
#define __EXAMPLERAWANALYSIS_H

#include "KVRawDataAnalyser.h"

class ExampleRawAnalysis : public KVRawDataAnalyser {
   Int_t Mult;
   TString DetSigName;
   Double_t DetSigVal;

public:
   ExampleRawAnalysis() {}
   virtual ~ExampleRawAnalysis() {}

   void InitAnalysis();
   void InitRun();
   Bool_t Analysis();
   void EndRun() {}
   void EndAnalysis() {}

   ClassDef(ExampleRawAnalysis, 1) //Analysis of raw data
};


#endif
