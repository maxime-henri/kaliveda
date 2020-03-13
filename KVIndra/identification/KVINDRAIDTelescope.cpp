#include "KVINDRAIDTelescope.h"
#include "KVINDRACodeMask.h"
#include "KVTelescope.h"
#include <KVINDRATelescope.h>
#include <KVINDRADetector.h>
#include <KVINDRACodes.h>
#include "KVReconstructedNucleus.h"

ClassImp(KVINDRAIDTelescope)
/////////////////////////////////////////////////////////////////////////////////////////
//KVINDRAIDTelescope
//
/////////////////////////////////////////////////////////////////////////////////////////
KVINDRAIDTelescope::KVINDRAIDTelescope()
{
   init();
}

void KVINDRAIDTelescope::init()
{
   //default init
   fECode = 1;                 //default
   fZminCode = kIDCode_Zmin;                 //default
}

UShort_t KVINDRAIDTelescope::GetBadIDCode()
{
   // return a general identification code (can be a bitmask) for particles badly identified
   // this corresponds to VEDA ID code 14
   return kIDCode14;
}

UShort_t KVINDRAIDTelescope::GetCoherencyIDCode()
{
   // return a general identification code (can be a bitmask) for particles identified
   // with this type of ID telescope after coherency analysis
   // this corresponds to VEDA ID code 6
   return kIDCode6;
}

UShort_t KVINDRAIDTelescope::GetMultiHitFirstStageIDCode()
{
   // return a general identification code (can be a bitmask) for particles which cannot
   // be identified correctly due to pile-up in a delta-E detector
   // this corresponds to VEDA ID code 8
   return kIDCode8;
}

void KVINDRAIDTelescope::SetIDCode(KVReconstructedNucleus* n, UShort_t c)
{
   // Overrides KVIDTelescope method
   // If 'n' is not a KVINDRAReconNuc, we use the 'simple' VEDA id codes
   // i.e. '2' for kIDCode2, '5' for kIDCode5, etc. instead of the bitmasks
   // used with KVINDRACodes

   if (n->InheritsFrom("KVINDRAReconNuc")) n->SetIDCode(c);
   else {
      KVINDRACodes indracode;
      indracode.SetIDCode(c);
      n->SetIDCode(indracode.GetVedaIDCode());
   }
}

KVINDRAIDTelescope::~KVINDRAIDTelescope()
{
}


