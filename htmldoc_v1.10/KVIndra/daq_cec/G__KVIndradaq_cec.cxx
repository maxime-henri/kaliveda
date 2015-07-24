// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__KVIndradaq_cec

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
#include "KVINDRATriggerInfo.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_KVINDRATriggerInfo(void *p = 0);
   static void *newArray_KVINDRATriggerInfo(Long_t size, void *p);
   static void delete_KVINDRATriggerInfo(void *p);
   static void deleteArray_KVINDRATriggerInfo(void *p);
   static void destruct_KVINDRATriggerInfo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVINDRATriggerInfo*)
   {
      ::KVINDRATriggerInfo *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVINDRATriggerInfo >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVINDRATriggerInfo", ::KVINDRATriggerInfo::Class_Version(), "KVINDRATriggerInfo.h", 31,
                  typeid(::KVINDRATriggerInfo), DefineBehavior(ptr, ptr),
                  &::KVINDRATriggerInfo::Dictionary, isa_proxy, 4,
                  sizeof(::KVINDRATriggerInfo) );
      instance.SetNew(&new_KVINDRATriggerInfo);
      instance.SetNewArray(&newArray_KVINDRATriggerInfo);
      instance.SetDelete(&delete_KVINDRATriggerInfo);
      instance.SetDeleteArray(&deleteArray_KVINDRATriggerInfo);
      instance.SetDestructor(&destruct_KVINDRATriggerInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVINDRATriggerInfo*)
   {
      return GenerateInitInstanceLocal((::KVINDRATriggerInfo*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVINDRATriggerInfo*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr KVINDRATriggerInfo::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVINDRATriggerInfo::Class_Name()
{
   return "KVINDRATriggerInfo";
}

//______________________________________________________________________________
const char *KVINDRATriggerInfo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVINDRATriggerInfo*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVINDRATriggerInfo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVINDRATriggerInfo*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVINDRATriggerInfo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVINDRATriggerInfo*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVINDRATriggerInfo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVINDRATriggerInfo*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void KVINDRATriggerInfo::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVINDRATriggerInfo.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVINDRATriggerInfo::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVINDRATriggerInfo::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVINDRATriggerInfo(void *p) {
      return  p ? new(p) ::KVINDRATriggerInfo : new ::KVINDRATriggerInfo;
   }
   static void *newArray_KVINDRATriggerInfo(Long_t nElements, void *p) {
      return p ? new(p) ::KVINDRATriggerInfo[nElements] : new ::KVINDRATriggerInfo[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVINDRATriggerInfo(void *p) {
      delete ((::KVINDRATriggerInfo*)p);
   }
   static void deleteArray_KVINDRATriggerInfo(void *p) {
      delete [] ((::KVINDRATriggerInfo*)p);
   }
   static void destruct_KVINDRATriggerInfo(void *p) {
      typedef ::KVINDRATriggerInfo current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVINDRATriggerInfo

namespace {
  void TriggerDictionaryInitialization_libKVIndradaq_cec_Impl() {
    static const char* headers[] = {
"KVINDRATriggerInfo.h",
0
    };
    static const char* includePaths[] = {
"/home/john/software/sources/kaliveda.git/KVIndra/daq_cec/inc",
"/home/john/software/sources/kaliveda.git/KVIndra/daq_cec",
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
"/home/john/software/build/kaliveda-build/1.10_R6/KVIndra/daq_cec/",
0
    };
    static const char* fwdDeclCode = 
R"DICTFWDDCLS(
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate(R"ATTRDUMP(Information on INDRA event from DAQ trigger)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVINDRATriggerInfo.h")))  KVINDRATriggerInfo;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "KVINDRATriggerInfo.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"KVINDRATriggerInfo", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libKVIndradaq_cec",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libKVIndradaq_cec_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libKVIndradaq_cec_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libKVIndradaq_cec() {
  TriggerDictionaryInitialization_libKVIndradaq_cec_Impl();
}
