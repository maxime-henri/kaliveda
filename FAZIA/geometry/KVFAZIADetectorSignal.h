//Created by KVClassFactory on Tue Jun 18 14:40:35 2019
//Author: John Frankland,,,

#ifndef __KVFAZIADETECTORSIGNAL_H
#define __KVFAZIADETECTORSIGNAL_H

#include "KVDetectorSignal.h"

class KVFAZIADetector;

// typedef for pointer to KVFAZIADetector member functions Double_t KVFAZIADetector::GetXXXXX() const
// [see https://isocpp.org/wiki/faq/pointers-to-members#typedef-for-ptr-to-memfn]
typedef Double_t (KVFAZIADetector::*KVFAZIADetMemFn)() const;

class KVFAZIADetectorSignal : public KVDetectorSignal {
   KVFAZIADetMemFn fFAZIAFunct;

public:
   KVFAZIADetectorSignal(const Char_t* type, KVDetector* det, KVFAZIADetMemFn get_method)
      : KVDetectorSignal(type, det), fFAZIAFunct(get_method)
   {
      // Constructor for a wrapper signal using an existing member function
      //
      // Given a detector class with a member function:
      //
      //~~~~~~~~~~~~~~~~~~~~~
      //  class KVFAZIADetector
      //  {
      //   public:
      //    Double_t GetXXXX() const;
      //  } det;
      //~~~~~~~~~~~~~~~~~~~~~
      //
      // set up the wrapper signal like this:
      //
      //~~~~~~~~~~~~~~~~~~~~~
      //   KVFAZIADetectorSignal my_sig("XXXX", &det, &KVFAZIADetector::GetXXXX);
      //~~~~~~~~~~~~~~~~~~~~~
   }
   virtual ~KVFAZIADetectorSignal() {}

   Double_t GetValue() const;
   Double_t GetInverseValue(Double_t out_val, const TString& in_sig) const
   {
      // Returns the value of the input signal for a given value of the output,
      // using the inverse calibration function

      if (in_sig == GetName()) return out_val;
      return 0.;
   }

   ClassDef(KVFAZIADetectorSignal, 1) //Wrapper for signals of FAZIA detectors
};

#endif
