//Created by KVClassFactory on Tue Jul 23 15:24:27 2019
//Author: John Frankland,,,

#ifndef __KVSMOOTHIPDIST_H
#define __KVSMOOTHIPDIST_H

#include "TF1.h"

class KVSmoothIPDist : public TF1 {
   TH1*  fHisto;//! last fitted histogram

public:
   KVSmoothIPDist()
      : TF1(), fHisto(nullptr)
   {
      // Default constructor
   }
   KVSmoothIPDist(TH1*);
   virtual ~KVSmoothIPDist() {}

   void FitIPDist(TH1*);

   Double_t GetCrossSection() const;
   Double_t GetB0() const
   {
      return GetParameter(1);
   }
   Double_t GetDeltaB() const
   {
      return GetParameter(2);
   }
   Double_t GetCrossSectionPerEvent() const;

   ClassDef(KVSmoothIPDist, 1) //Triangular IP distribution with smooth fall-off
};

#endif
