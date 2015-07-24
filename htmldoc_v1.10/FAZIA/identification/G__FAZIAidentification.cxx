// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__FAZIAidentification

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "RConfig.h"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// Since CINT ignores the std namespace, we need to do so in this file.
namespace std {} using namespace std;

// Header files passed as explicit arguments
#include "KVFAZIAIDSiSi.h"
#include "KVFAZIAIDTelescope.h"
#include "KVFAZIAIDSiPSA.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_KVFAZIAIDTelescope(void *p = 0);
   static void *newArray_KVFAZIAIDTelescope(Long_t size, void *p);
   static void delete_KVFAZIAIDTelescope(void *p);
   static void deleteArray_KVFAZIAIDTelescope(void *p);
   static void destruct_KVFAZIAIDTelescope(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVFAZIAIDTelescope*)
   {
      ::KVFAZIAIDTelescope *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVFAZIAIDTelescope >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVFAZIAIDTelescope", ::KVFAZIAIDTelescope::Class_Version(), "KVFAZIAIDTelescope.h", 9,
                  typeid(::KVFAZIAIDTelescope), DefineBehavior(ptr, ptr),
                  &::KVFAZIAIDTelescope::Dictionary, isa_proxy, 4,
                  sizeof(::KVFAZIAIDTelescope) );
      instance.SetNew(&new_KVFAZIAIDTelescope);
      instance.SetNewArray(&newArray_KVFAZIAIDTelescope);
      instance.SetDelete(&delete_KVFAZIAIDTelescope);
      instance.SetDeleteArray(&deleteArray_KVFAZIAIDTelescope);
      instance.SetDestructor(&destruct_KVFAZIAIDTelescope);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVFAZIAIDTelescope*)
   {
      return GenerateInitInstanceLocal((::KVFAZIAIDTelescope*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVFAZIAIDTelescope*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVFAZIAIDSiPSA(void *p = 0);
   static void *newArray_KVFAZIAIDSiPSA(Long_t size, void *p);
   static void delete_KVFAZIAIDSiPSA(void *p);
   static void deleteArray_KVFAZIAIDSiPSA(void *p);
   static void destruct_KVFAZIAIDSiPSA(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVFAZIAIDSiPSA*)
   {
      ::KVFAZIAIDSiPSA *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVFAZIAIDSiPSA >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVFAZIAIDSiPSA", ::KVFAZIAIDSiPSA::Class_Version(), "KVFAZIAIDSiPSA.h", 10,
                  typeid(::KVFAZIAIDSiPSA), DefineBehavior(ptr, ptr),
                  &::KVFAZIAIDSiPSA::Dictionary, isa_proxy, 4,
                  sizeof(::KVFAZIAIDSiPSA) );
      instance.SetNew(&new_KVFAZIAIDSiPSA);
      instance.SetNewArray(&newArray_KVFAZIAIDSiPSA);
      instance.SetDelete(&delete_KVFAZIAIDSiPSA);
      instance.SetDeleteArray(&deleteArray_KVFAZIAIDSiPSA);
      instance.SetDestructor(&destruct_KVFAZIAIDSiPSA);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVFAZIAIDSiPSA*)
   {
      return GenerateInitInstanceLocal((::KVFAZIAIDSiPSA*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVFAZIAIDSiPSA*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVFAZIAIDSiSi(void *p = 0);
   static void *newArray_KVFAZIAIDSiSi(Long_t size, void *p);
   static void delete_KVFAZIAIDSiSi(void *p);
   static void deleteArray_KVFAZIAIDSiSi(void *p);
   static void destruct_KVFAZIAIDSiSi(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVFAZIAIDSiSi*)
   {
      ::KVFAZIAIDSiSi *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVFAZIAIDSiSi >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVFAZIAIDSiSi", ::KVFAZIAIDSiSi::Class_Version(), "KVFAZIAIDSiSi.h", 12,
                  typeid(::KVFAZIAIDSiSi), DefineBehavior(ptr, ptr),
                  &::KVFAZIAIDSiSi::Dictionary, isa_proxy, 4,
                  sizeof(::KVFAZIAIDSiSi) );
      instance.SetNew(&new_KVFAZIAIDSiSi);
      instance.SetNewArray(&newArray_KVFAZIAIDSiSi);
      instance.SetDelete(&delete_KVFAZIAIDSiSi);
      instance.SetDeleteArray(&deleteArray_KVFAZIAIDSiSi);
      instance.SetDestructor(&destruct_KVFAZIAIDSiSi);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVFAZIAIDSiSi*)
   {
      return GenerateInitInstanceLocal((::KVFAZIAIDSiSi*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVFAZIAIDSiSi*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr KVFAZIAIDTelescope::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVFAZIAIDTelescope::Class_Name()
{
   return "KVFAZIAIDTelescope";
}

//______________________________________________________________________________
const char *KVFAZIAIDTelescope::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVFAZIAIDTelescope*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVFAZIAIDTelescope::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVFAZIAIDTelescope*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVFAZIAIDTelescope::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVFAZIAIDTelescope*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVFAZIAIDTelescope::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVFAZIAIDTelescope*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVFAZIAIDSiPSA::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVFAZIAIDSiPSA::Class_Name()
{
   return "KVFAZIAIDSiPSA";
}

//______________________________________________________________________________
const char *KVFAZIAIDSiPSA::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVFAZIAIDSiPSA*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVFAZIAIDSiPSA::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVFAZIAIDSiPSA*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVFAZIAIDSiPSA::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVFAZIAIDSiPSA*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVFAZIAIDSiPSA::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVFAZIAIDSiPSA*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVFAZIAIDSiSi::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVFAZIAIDSiSi::Class_Name()
{
   return "KVFAZIAIDSiSi";
}

//______________________________________________________________________________
const char *KVFAZIAIDSiSi::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVFAZIAIDSiSi*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVFAZIAIDSiSi::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVFAZIAIDSiSi*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVFAZIAIDSiSi::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVFAZIAIDSiSi*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVFAZIAIDSiSi::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVFAZIAIDSiSi*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void KVFAZIAIDTelescope::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVFAZIAIDTelescope.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVFAZIAIDTelescope::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVFAZIAIDTelescope::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVFAZIAIDTelescope(void *p) {
      return  p ? new(p) ::KVFAZIAIDTelescope : new ::KVFAZIAIDTelescope;
   }
   static void *newArray_KVFAZIAIDTelescope(Long_t nElements, void *p) {
      return p ? new(p) ::KVFAZIAIDTelescope[nElements] : new ::KVFAZIAIDTelescope[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVFAZIAIDTelescope(void *p) {
      delete ((::KVFAZIAIDTelescope*)p);
   }
   static void deleteArray_KVFAZIAIDTelescope(void *p) {
      delete [] ((::KVFAZIAIDTelescope*)p);
   }
   static void destruct_KVFAZIAIDTelescope(void *p) {
      typedef ::KVFAZIAIDTelescope current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVFAZIAIDTelescope

//______________________________________________________________________________
void KVFAZIAIDSiPSA::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVFAZIAIDSiPSA.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVFAZIAIDSiPSA::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVFAZIAIDSiPSA::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVFAZIAIDSiPSA(void *p) {
      return  p ? new(p) ::KVFAZIAIDSiPSA : new ::KVFAZIAIDSiPSA;
   }
   static void *newArray_KVFAZIAIDSiPSA(Long_t nElements, void *p) {
      return p ? new(p) ::KVFAZIAIDSiPSA[nElements] : new ::KVFAZIAIDSiPSA[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVFAZIAIDSiPSA(void *p) {
      delete ((::KVFAZIAIDSiPSA*)p);
   }
   static void deleteArray_KVFAZIAIDSiPSA(void *p) {
      delete [] ((::KVFAZIAIDSiPSA*)p);
   }
   static void destruct_KVFAZIAIDSiPSA(void *p) {
      typedef ::KVFAZIAIDSiPSA current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVFAZIAIDSiPSA

//______________________________________________________________________________
void KVFAZIAIDSiSi::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVFAZIAIDSiSi.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVFAZIAIDSiSi::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVFAZIAIDSiSi::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVFAZIAIDSiSi(void *p) {
      return  p ? new(p) ::KVFAZIAIDSiSi : new ::KVFAZIAIDSiSi;
   }
   static void *newArray_KVFAZIAIDSiSi(Long_t nElements, void *p) {
      return p ? new(p) ::KVFAZIAIDSiSi[nElements] : new ::KVFAZIAIDSiSi[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVFAZIAIDSiSi(void *p) {
      delete ((::KVFAZIAIDSiSi*)p);
   }
   static void deleteArray_KVFAZIAIDSiSi(void *p) {
      delete [] ((::KVFAZIAIDSiSi*)p);
   }
   static void destruct_KVFAZIAIDSiSi(void *p) {
      typedef ::KVFAZIAIDSiSi current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVFAZIAIDSiSi

namespace {
  void TriggerDictionaryInitialization_libFAZIAidentification_Impl() {
    static const char* headers[] = {
"KVFAZIAIDSiSi.h",
"KVFAZIAIDTelescope.h",
"KVFAZIAIDSiPSA.h",
0
    };
    static const char* includePaths[] = {
"/home/john/software/sources/kaliveda.git/FAZIA/identification/inc",
"/home/john/software/sources/kaliveda.git/FAZIA/identification",
"/home/john/software/sources/kaliveda.git/KVMultiDet/identification",
"/home/john/software/sources/kaliveda.git/KVMultiDet/data_management",
"/home/john/software/sources/kaliveda.git/KVMultiDet/gui",
"/home/john/software/sources/kaliveda.git/KVMultiDet/db",
"/home/john/software/sources/kaliveda.git/KVMultiDet/base",
"/home/john/software/sources/kaliveda.git/KVMultiDet/analysis",
"/home/john/software/sources/kaliveda.git/KVMultiDet/trieur",
"/home/john/software/sources/kaliveda.git/KVMultiDet/particles",
"/home/john/software/sources/kaliveda.git/KVMultiDet/exp_events",
"/home/john/software/sources/kaliveda.git/KVMultiDet/daq_cec",
"/home/john/software/sources/kaliveda.git/KVMultiDet/globvars",
"/home/john/software/sources/kaliveda.git/KVMultiDet/stopping",
"/home/john/software/sources/kaliveda.git/KVMultiDet/calibration",
"/home/john/software/sources/kaliveda.git/KVMultiDet/geometry",
"/home/john/software/sources/kaliveda.git/KVMultiDet/events",
"/home/john/software/sources/kaliveda.git/GanTape/include",
"/home/john/software/build/kaliveda-build/1.10_R6",
"/home/john/software/build/root-v6-04-00/include",
"/home/john/software/build/root-v6-04-00/include",
"/home/john/software/build/kaliveda-build/1.10_R6/FAZIA/identification/",
0
    };
    static const char* fwdDeclCode = 
R"DICTFWDDCLS(
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate(R"ATTRDUMP(Identification for FAZIA array)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVFAZIAIDSiSi.h")))  KVFAZIAIDTelescope;
class __attribute__((annotate(R"ATTRDUMP(PSA identification in first silicon of FAZIA telescopes)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVFAZIAIDSiPSA.h")))  KVFAZIAIDSiPSA;
class __attribute__((annotate(R"ATTRDUMP(identification telescope for FAZIA Si-Si idcards)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVFAZIAIDSiSi.h")))  KVFAZIAIDSiSi;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "KVFAZIAIDSiSi.h"
#include "KVFAZIAIDTelescope.h"
#include "KVFAZIAIDSiPSA.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"KVFAZIAIDSiPSA", payloadCode, "@",
"KVFAZIAIDSiSi", payloadCode, "@",
"KVFAZIAIDTelescope", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libFAZIAidentification",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libFAZIAidentification_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libFAZIAidentification_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libFAZIAidentification() {
  TriggerDictionaryInitialization_libFAZIAidentification_Impl();
}
