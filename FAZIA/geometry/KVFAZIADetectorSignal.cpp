//Created by KVClassFactory on Tue Jun 18 14:40:35 2019
//Author: John Frankland,,,

#include "KVFAZIADetectorSignal.h"
#include "KVFAZIADetector.h"

ClassImp(KVFAZIADetectorSignal)

////////////////////////////////////////////////////////////////////////////////
// BEGIN_HTML <!--
/* -->
<h2>KVFAZIADetectorSignal</h2>
<h4>Wrapper for signals of FAZIA detectors</h4>
<!-- */
// --> END_HTML
////////////////////////////////////////////////////////////////////////////////

// Macro for calling member functions
// [see https://isocpp.org/wiki/faq/pointers-to-members#macro-for-ptr-to-memfn]
#define CALL_MEMBER_FN(object,ptrToMember)  (((KVFAZIADetector*)object)->*(ptrToMember))

Double_t KVFAZIADetectorSignal::GetValue() const
{
   if (GetDetector() && fFAZIAFunct) return CALL_MEMBER_FN(GetDetector(), fFAZIAFunct)();
   return 0.;
}

