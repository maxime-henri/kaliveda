//Created by KVClassFactory on Tue Sep 17 11:54:19 2019
//Author: John Frankland,,,

#ifndef __EXAMPLERECONANALYSIS_H
#define __EXAMPLERECONANALYSIS_H

#include "KVReconEventSelector.h"

class ExampleReconAnalysis : public KVReconEventSelector {
   int Mult;
   int Z[1000], A[1000];//!
   double E[1000], Theta[1000], Phi[1000]; //!
   double Vx[1000], Vy[1000], Vz[1000]; //!

public:
   ExampleReconAnalysis() {}
   virtual ~ExampleReconAnalysis() {}

   virtual void InitRun();
   virtual void EndRun() {}
   virtual void InitAnalysis();
   virtual Bool_t Analysis();
   virtual void EndAnalysis() {}

   ClassDef(ExampleReconAnalysis, 1) //Analysis of reconstructed events
};


#endif
