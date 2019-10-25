#ifndef KVCSI_H
#define KVCSI_H

//status values for calculation of total light output
#define NOT_CALCULATED 0
#define CALCULATED_WITH_GAIN_CORRECTION 1
#define NO_GAIN_CORRECTION 4
#define NEGATIVE_PEDESTAL_CORRECTED_VALUE 15
#define CALCULATION_NOT_CONVERGED 12

#include "KVINDRADetector.h"
#include "KVACQParam.h"

class KVTelescope;

class KVCsI: public KVINDRADetector {

   mutable Double_t fLumiereTotale;     //total light output calculated from R and L components
   mutable UInt_t fLumTotStatus;        //status of light calculation
   Double_t fA1, fA2, fA3;

   Char_t  fPinLaser;//number of pin laser used to control stability of crystal
   Double_t fGainCorrection;//gain correction for total light output. by default equal to 1.0.

   KVACQParam* fACQ_R;//'Rapide' acquisition parameter
   KVACQParam* fACQ_L;//'Lente' acquisition parameter

   Double_t Calculate(UShort_t mode, Double_t rapide =
                         -1.0, Double_t lente = -1.0) const;

   enum { kLumiere, kTau };

protected:
   void init();

public:
   KVCsI();
   KVCsI(Float_t thick, Float_t thickAl = 0 /* um */);
   virtual ~ KVCsI();

   void SetAlThickness(Float_t thickAl /* um */);

   Float_t GetR() const
   {
      return fACQ_R->GetData();
   }
   Float_t GetL() const
   {
      return fACQ_L->GetData();
   }

   virtual Double_t GetLumiereTotale(Double_t rapide = -1.0, Double_t lente =
                                        -1.0) const;
   virtual Double_t GetCorrectedLumiereTotale(Double_t rapide = -1.0, Double_t lente =
            -1.0) const;
   Double_t GetTauZero(Double_t rapide = -1.0, Double_t lente = -1.0);
   void SetLumiereTotale(Double_t lum)
   {
      fLumiereTotale = lum;
   };
   UInt_t GetStatusLumiere();
   Bool_t LightIsGood();
   virtual void Clear(Option_t* opt = "");
   virtual void Print(Option_t* option = "") const;

   void SetACQParams();

   Double_t GetCorrectedEnergy(KVNucleus*, Double_t lum = -1., Bool_t transmission = kTRUE);
   Double_t GetLightFromEnergy(Int_t Z, Int_t A, Double_t E = -1.) const;
   Double_t GetEnergyFromLight(Int_t Z, Int_t A, Double_t lum) const;

   void SetPinLaser(Int_t n)
   {
      if (n > 0 && n < 255) fPinLaser = (Char_t)n;
   }
   Int_t GetPinLaser()
   {
      // Returns number of Pin Laser used to control stability of CsI detector.
      return (Int_t)fPinLaser;
   }
   void SetTotalLightGainCorrection(Double_t c)
   {
      fGainCorrection = c;
   }
   Double_t GetTotalLightGainCorrection() const
   {
      return fGainCorrection;
   }

   void DeduceACQParameters(KVEvent*, KVNumberList&);

   ClassDef(KVCsI, 5)           // The CsI(Tl) detectors of the INDRA array
};

#endif
