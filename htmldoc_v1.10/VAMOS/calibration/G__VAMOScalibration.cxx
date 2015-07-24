// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__VAMOScalibration

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
#include "KVSeDPositionCal.h"
#include "KVLightEnergyCsIVamos.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_KVLightEnergyCsIVamos(void *p = 0);
   static void *newArray_KVLightEnergyCsIVamos(Long_t size, void *p);
   static void delete_KVLightEnergyCsIVamos(void *p);
   static void deleteArray_KVLightEnergyCsIVamos(void *p);
   static void destruct_KVLightEnergyCsIVamos(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVLightEnergyCsIVamos*)
   {
      ::KVLightEnergyCsIVamos *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVLightEnergyCsIVamos >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVLightEnergyCsIVamos", ::KVLightEnergyCsIVamos::Class_Version(), "KVLightEnergyCsIVamos.h", 9,
                  typeid(::KVLightEnergyCsIVamos), DefineBehavior(ptr, ptr),
                  &::KVLightEnergyCsIVamos::Dictionary, isa_proxy, 4,
                  sizeof(::KVLightEnergyCsIVamos) );
      instance.SetNew(&new_KVLightEnergyCsIVamos);
      instance.SetNewArray(&newArray_KVLightEnergyCsIVamos);
      instance.SetDelete(&delete_KVLightEnergyCsIVamos);
      instance.SetDeleteArray(&deleteArray_KVLightEnergyCsIVamos);
      instance.SetDestructor(&destruct_KVLightEnergyCsIVamos);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVLightEnergyCsIVamos*)
   {
      return GenerateInitInstanceLocal((::KVLightEnergyCsIVamos*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVLightEnergyCsIVamos*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVSeDPositionCal(void *p = 0);
   static void *newArray_KVSeDPositionCal(Long_t size, void *p);
   static void delete_KVSeDPositionCal(void *p);
   static void deleteArray_KVSeDPositionCal(void *p);
   static void destruct_KVSeDPositionCal(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVSeDPositionCal*)
   {
      ::KVSeDPositionCal *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVSeDPositionCal >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVSeDPositionCal", ::KVSeDPositionCal::Class_Version(), "KVSeDPositionCal.h", 12,
                  typeid(::KVSeDPositionCal), DefineBehavior(ptr, ptr),
                  &::KVSeDPositionCal::Dictionary, isa_proxy, 4,
                  sizeof(::KVSeDPositionCal) );
      instance.SetNew(&new_KVSeDPositionCal);
      instance.SetNewArray(&newArray_KVSeDPositionCal);
      instance.SetDelete(&delete_KVSeDPositionCal);
      instance.SetDeleteArray(&deleteArray_KVSeDPositionCal);
      instance.SetDestructor(&destruct_KVSeDPositionCal);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVSeDPositionCal*)
   {
      return GenerateInitInstanceLocal((::KVSeDPositionCal*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVSeDPositionCal*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr KVLightEnergyCsIVamos::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVLightEnergyCsIVamos::Class_Name()
{
   return "KVLightEnergyCsIVamos";
}

//______________________________________________________________________________
const char *KVLightEnergyCsIVamos::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVLightEnergyCsIVamos*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVLightEnergyCsIVamos::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVLightEnergyCsIVamos*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVLightEnergyCsIVamos::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVLightEnergyCsIVamos*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVLightEnergyCsIVamos::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVLightEnergyCsIVamos*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVSeDPositionCal::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVSeDPositionCal::Class_Name()
{
   return "KVSeDPositionCal";
}

//______________________________________________________________________________
const char *KVSeDPositionCal::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVSeDPositionCal*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVSeDPositionCal::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVSeDPositionCal*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVSeDPositionCal::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVSeDPositionCal*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVSeDPositionCal::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVSeDPositionCal*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void KVLightEnergyCsIVamos::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVLightEnergyCsIVamos.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVLightEnergyCsIVamos::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVLightEnergyCsIVamos::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVLightEnergyCsIVamos(void *p) {
      return  p ? new(p) ::KVLightEnergyCsIVamos : new ::KVLightEnergyCsIVamos;
   }
   static void *newArray_KVLightEnergyCsIVamos(Long_t nElements, void *p) {
      return p ? new(p) ::KVLightEnergyCsIVamos[nElements] : new ::KVLightEnergyCsIVamos[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVLightEnergyCsIVamos(void *p) {
      delete ((::KVLightEnergyCsIVamos*)p);
   }
   static void deleteArray_KVLightEnergyCsIVamos(void *p) {
      delete [] ((::KVLightEnergyCsIVamos*)p);
   }
   static void destruct_KVLightEnergyCsIVamos(void *p) {
      typedef ::KVLightEnergyCsIVamos current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVLightEnergyCsIVamos

//______________________________________________________________________________
void KVSeDPositionCal::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVSeDPositionCal.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVSeDPositionCal::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVSeDPositionCal::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVSeDPositionCal(void *p) {
      return  p ? new(p) ::KVSeDPositionCal : new ::KVSeDPositionCal;
   }
   static void *newArray_KVSeDPositionCal(Long_t nElements, void *p) {
      return p ? new(p) ::KVSeDPositionCal[nElements] : new ::KVSeDPositionCal[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVSeDPositionCal(void *p) {
      delete ((::KVSeDPositionCal*)p);
   }
   static void deleteArray_KVSeDPositionCal(void *p) {
      delete [] ((::KVSeDPositionCal*)p);
   }
   static void destruct_KVSeDPositionCal(void *p) {
      typedef ::KVSeDPositionCal current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVSeDPositionCal

namespace {
  void TriggerDictionaryInitialization_libVAMOScalibration_Impl() {
    static const char* headers[] = {
"KVSeDPositionCal.h",
"KVLightEnergyCsIVamos.h",
0
    };
    static const char* includePaths[] = {
"/home/john/software/sources/kaliveda.git/VAMOS/calibration/inc",
"/home/john/software/sources/kaliveda.git/VAMOS/calibration",
"/home/john/software/sources/kaliveda.git/KVIndra/identification",
"/home/john/software/sources/kaliveda.git/KVIndra/gui",
"/home/john/software/sources/kaliveda.git/KVIndra/db",
"/home/john/software/sources/kaliveda.git/KVIndra/analysis",
"/home/john/software/sources/kaliveda.git/KVIndra/exp_events",
"/home/john/software/sources/kaliveda.git/KVIndra/daq_cec",
"/home/john/software/sources/kaliveda.git/KVIndra/calibration",
"/home/john/software/sources/kaliveda.git/KVIndra/geometry",
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
"/home/john/software/build/kaliveda-build/1.10_R6/VAMOS/calibration/",
0
    };
    static const char* fwdDeclCode = 
R"DICTFWDDCLS(
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate(R"ATTRDUMP(Specific light-Energy Function for Vamos CsI)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVLightEnergyCsIVamos.h")))  KVLightEnergyCsIVamos;
class __attribute__((annotate(R"ATTRDUMP(Position calibration for SeD detectors of VAMOS)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVSeDPositionCal.h")))  KVSeDPositionCal;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "KVSeDPositionCal.h"
#include "KVLightEnergyCsIVamos.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"KVLightEnergyCsIVamos", payloadCode, "@",
"KVSeDPositionCal", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libVAMOScalibration",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libVAMOScalibration_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libVAMOScalibration_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libVAMOScalibration() {
  TriggerDictionaryInitialization_libVAMOScalibration_Impl();
}
