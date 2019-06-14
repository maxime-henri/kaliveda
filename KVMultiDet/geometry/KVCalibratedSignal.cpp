//Created by KVClassFactory on Thu Jun 13 09:49:14 2019
//Author: John Frankland,,,

#include "KVCalibratedSignal.h"

ClassImp(KVCalibratedSignal)

////////////////////////////////////////////////////////////////////////////////
// BEGIN_HTML <!--
/* -->
<h2>KVCalibratedSignal</h2>
<h4>Detector signal produced by a calibrator</h4>
<!-- */
// --> END_HTML
////////////////////////////////////////////////////////////////////////////////

Double_t KVCalibratedSignal::GetValue() const
{
   // Returns the value of the calibrated signal using the current value of the input
   // signal and the current parameters of the calibration

   return fCalibrator->Compute(fInputSignal->GetValue());
}

Double_t KVCalibratedSignal::GetInverseValue(Double_t out_val, const TString& in_sig) const
{
   // Returns the value of the input signal "in_sig" for a given value of this signal,
   // using the inverse calibration function.
   //
   // Note that "in_sig" may not be the name/type of the direct input signal for this signal,
   // in which case the chain of signals/calibrators is followed back to the required signal.

   if (in_sig == GetName()) return out_val;
   return fInputSignal->GetInverseValue(fCalibrator->Invert(out_val), in_sig);
}

//____________________________________________________________________________//

