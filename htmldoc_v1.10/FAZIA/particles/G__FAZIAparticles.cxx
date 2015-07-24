// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__FAZIAparticles

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
#include "KVFAZIAReconNuc.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_KVFAZIAReconNuc(void *p = 0);
   static void *newArray_KVFAZIAReconNuc(Long_t size, void *p);
   static void delete_KVFAZIAReconNuc(void *p);
   static void deleteArray_KVFAZIAReconNuc(void *p);
   static void destruct_KVFAZIAReconNuc(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVFAZIAReconNuc*)
   {
      ::KVFAZIAReconNuc *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVFAZIAReconNuc >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVFAZIAReconNuc", ::KVFAZIAReconNuc::Class_Version(), "KVFAZIAReconNuc.h", 28,
                  typeid(::KVFAZIAReconNuc), DefineBehavior(ptr, ptr),
                  &::KVFAZIAReconNuc::Dictionary, isa_proxy, 4,
                  sizeof(::KVFAZIAReconNuc) );
      instance.SetNew(&new_KVFAZIAReconNuc);
      instance.SetNewArray(&newArray_KVFAZIAReconNuc);
      instance.SetDelete(&delete_KVFAZIAReconNuc);
      instance.SetDeleteArray(&deleteArray_KVFAZIAReconNuc);
      instance.SetDestructor(&destruct_KVFAZIAReconNuc);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVFAZIAReconNuc*)
   {
      return GenerateInitInstanceLocal((::KVFAZIAReconNuc*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVFAZIAReconNuc*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr KVFAZIAReconNuc::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVFAZIAReconNuc::Class_Name()
{
   return "KVFAZIAReconNuc";
}

//______________________________________________________________________________
const char *KVFAZIAReconNuc::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVFAZIAReconNuc*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVFAZIAReconNuc::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVFAZIAReconNuc*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVFAZIAReconNuc::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVFAZIAReconNuc*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVFAZIAReconNuc::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVFAZIAReconNuc*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void KVFAZIAReconNuc::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVFAZIAReconNuc.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVFAZIAReconNuc::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVFAZIAReconNuc::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVFAZIAReconNuc(void *p) {
      return  p ? new(p) ::KVFAZIAReconNuc : new ::KVFAZIAReconNuc;
   }
   static void *newArray_KVFAZIAReconNuc(Long_t nElements, void *p) {
      return p ? new(p) ::KVFAZIAReconNuc[nElements] : new ::KVFAZIAReconNuc[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVFAZIAReconNuc(void *p) {
      delete ((::KVFAZIAReconNuc*)p);
   }
   static void deleteArray_KVFAZIAReconNuc(void *p) {
      delete [] ((::KVFAZIAReconNuc*)p);
   }
   static void destruct_KVFAZIAReconNuc(void *p) {
      typedef ::KVFAZIAReconNuc current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVFAZIAReconNuc

namespace {
  void TriggerDictionaryInitialization_libFAZIAparticles_Impl() {
    static const char* headers[] = {
"KVFAZIAReconNuc.h",
0
    };
    static const char* includePaths[] = {
"/home/john/software/sources/kaliveda.git/FAZIA/particles/inc",
"/home/john/software/sources/kaliveda.git/FAZIA/particles",
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
"/home/john/software/build/kaliveda-build/1.10_R6/FAZIA/particles/",
0
    };
    static const char* fwdDeclCode = 
R"DICTFWDDCLS(
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate(R"ATTRDUMP(Nucleus identified by FAZIA array)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVFAZIAReconNuc.h")))  KVFAZIAReconNuc;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "KVFAZIAReconNuc.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"KVFAZIAReconNuc", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libFAZIAparticles",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libFAZIAparticles_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libFAZIAparticles_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libFAZIAparticles() {
  TriggerDictionaryInitialization_libFAZIAparticles_Impl();
}
