//Created by KVClassFactory on Tue Jul 23 15:24:27 2019
//Author: John Frankland,,,

#include "KVSmoothIPDist.h"
#include "TMath.h"

#include <TH1.h>

ClassImp(KVSmoothIPDist)

////////////////////////////////////////////////////////////////////////////////
// BEGIN_HTML <!--
/* -->
<h2>KVSmoothIPDist</h2>
<h4>Triangular IP distribution with smooth fall-off</h4>
<!-- */
// --> END_HTML
////////////////////////////////////////////////////////////////////////////////

Double_t smooth_pb(Double_t* x, Double_t* par)
{
   // f(b) = [0] * x * [ 1 + exp((x - [1])/[2]) ]**-1

   if (par[0]*par[2] == 0) return 0;

   return par[0] * x[0] / (1. + TMath::Exp((x[0] - par[1]) / par[2]));
}

KVSmoothIPDist::KVSmoothIPDist(TH1* h)
   : TF1(h->GetName(), smooth_pb, 0., 50., 3), fHisto(h)
{
   // Fit the given impact parameter distribution

   SetParNames("Norm", "b_{0}", "#Delta b");
   FitIPDist(h);
}

void KVSmoothIPDist::FitIPDist(TH1* h)
{
   // Fit impact parameter distribution in histogram

   Double_t minb = h->GetXaxis()->GetBinLowEdge(1);
   Double_t maxb = h->GetXaxis()->GetBinUpEdge(h->GetXaxis()->GetNbins());
   Double_t maxy = h->GetMaximum();
   Double_t bmax = h->GetBinCenter(h->GetMaximumBin());
   SetParLimits(0, 1., maxy);
   SetParLimits(1, minb, maxb);
   SetParLimits(2, 1.e-6, maxb - minb);
   SetParameters(maxy / 10., bmax, 0.4);
   h->Fit(this, "I");
}

Double_t KVSmoothIPDist::GetCrossSection() const
{
   // Returns calculated total reaction cross-section in [mb] using parameters of
   // function fit to distribution by FitIPDist

   return -10.*TMath::TwoPi() * TMath::Power(GetDeltaB(), 2) *
          TMath::DiLog(-TMath::Exp(GetB0() / GetDeltaB()));
}

Double_t KVSmoothIPDist::GetCrossSectionPerEvent() const
{
   // Get cross-section per event in [mb] for last fit

   return fHisto->GetEntries() ? GetCrossSection() / fHisto->GetEntries() : 0.;
}

