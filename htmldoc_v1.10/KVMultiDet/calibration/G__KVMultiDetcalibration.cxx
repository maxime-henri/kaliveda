// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__KVMultiDetcalibration

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
#include "KVPulseHeightDefect.h"
#include "KVLinCal.h"
#include "KVRecombination.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_KVLinCal(void *p = 0);
   static void *newArray_KVLinCal(Long_t size, void *p);
   static void delete_KVLinCal(void *p);
   static void deleteArray_KVLinCal(void *p);
   static void destruct_KVLinCal(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVLinCal*)
   {
      ::KVLinCal *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVLinCal >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVLinCal", ::KVLinCal::Class_Version(), "KVLinCal.h", 25,
                  typeid(::KVLinCal), DefineBehavior(ptr, ptr),
                  &::KVLinCal::Dictionary, isa_proxy, 4,
                  sizeof(::KVLinCal) );
      instance.SetNew(&new_KVLinCal);
      instance.SetNewArray(&newArray_KVLinCal);
      instance.SetDelete(&delete_KVLinCal);
      instance.SetDeleteArray(&deleteArray_KVLinCal);
      instance.SetDestructor(&destruct_KVLinCal);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVLinCal*)
   {
      return GenerateInitInstanceLocal((::KVLinCal*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVLinCal*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVPulseHeightDefect(void *p = 0);
   static void *newArray_KVPulseHeightDefect(Long_t size, void *p);
   static void delete_KVPulseHeightDefect(void *p);
   static void deleteArray_KVPulseHeightDefect(void *p);
   static void destruct_KVPulseHeightDefect(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVPulseHeightDefect*)
   {
      ::KVPulseHeightDefect *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVPulseHeightDefect >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVPulseHeightDefect", ::KVPulseHeightDefect::Class_Version(), "KVPulseHeightDefect.h", 16,
                  typeid(::KVPulseHeightDefect), DefineBehavior(ptr, ptr),
                  &::KVPulseHeightDefect::Dictionary, isa_proxy, 4,
                  sizeof(::KVPulseHeightDefect) );
      instance.SetNew(&new_KVPulseHeightDefect);
      instance.SetNewArray(&newArray_KVPulseHeightDefect);
      instance.SetDelete(&delete_KVPulseHeightDefect);
      instance.SetDeleteArray(&deleteArray_KVPulseHeightDefect);
      instance.SetDestructor(&destruct_KVPulseHeightDefect);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVPulseHeightDefect*)
   {
      return GenerateInitInstanceLocal((::KVPulseHeightDefect*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVPulseHeightDefect*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVRecombination(void *p = 0);
   static void *newArray_KVRecombination(Long_t size, void *p);
   static void delete_KVRecombination(void *p);
   static void deleteArray_KVRecombination(void *p);
   static void destruct_KVRecombination(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVRecombination*)
   {
      ::KVRecombination *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVRecombination >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVRecombination", ::KVRecombination::Class_Version(), "KVRecombination.h", 9,
                  typeid(::KVRecombination), DefineBehavior(ptr, ptr),
                  &::KVRecombination::Dictionary, isa_proxy, 4,
                  sizeof(::KVRecombination) );
      instance.SetNew(&new_KVRecombination);
      instance.SetNewArray(&newArray_KVRecombination);
      instance.SetDelete(&delete_KVRecombination);
      instance.SetDeleteArray(&deleteArray_KVRecombination);
      instance.SetDestructor(&destruct_KVRecombination);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVRecombination*)
   {
      return GenerateInitInstanceLocal((::KVRecombination*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVRecombination*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr KVLinCal::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVLinCal::Class_Name()
{
   return "KVLinCal";
}

//______________________________________________________________________________
const char *KVLinCal::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVLinCal*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVLinCal::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVLinCal*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVLinCal::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVLinCal*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVLinCal::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVLinCal*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVPulseHeightDefect::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVPulseHeightDefect::Class_Name()
{
   return "KVPulseHeightDefect";
}

//______________________________________________________________________________
const char *KVPulseHeightDefect::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVPulseHeightDefect*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVPulseHeightDefect::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVPulseHeightDefect*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVPulseHeightDefect::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVPulseHeightDefect*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVPulseHeightDefect::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVPulseHeightDefect*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVRecombination::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVRecombination::Class_Name()
{
   return "KVRecombination";
}

//______________________________________________________________________________
const char *KVRecombination::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVRecombination*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVRecombination::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVRecombination*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVRecombination::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVRecombination*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVRecombination::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVRecombination*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void KVLinCal::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVLinCal.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVLinCal::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVLinCal::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVLinCal(void *p) {
      return  p ? new(p) ::KVLinCal : new ::KVLinCal;
   }
   static void *newArray_KVLinCal(Long_t nElements, void *p) {
      return p ? new(p) ::KVLinCal[nElements] : new ::KVLinCal[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVLinCal(void *p) {
      delete ((::KVLinCal*)p);
   }
   static void deleteArray_KVLinCal(void *p) {
      delete [] ((::KVLinCal*)p);
   }
   static void destruct_KVLinCal(void *p) {
      typedef ::KVLinCal current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVLinCal

//______________________________________________________________________________
void KVPulseHeightDefect::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVPulseHeightDefect.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVPulseHeightDefect::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVPulseHeightDefect::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVPulseHeightDefect(void *p) {
      return  p ? new(p) ::KVPulseHeightDefect : new ::KVPulseHeightDefect;
   }
   static void *newArray_KVPulseHeightDefect(Long_t nElements, void *p) {
      return p ? new(p) ::KVPulseHeightDefect[nElements] : new ::KVPulseHeightDefect[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVPulseHeightDefect(void *p) {
      delete ((::KVPulseHeightDefect*)p);
   }
   static void deleteArray_KVPulseHeightDefect(void *p) {
      delete [] ((::KVPulseHeightDefect*)p);
   }
   static void destruct_KVPulseHeightDefect(void *p) {
      typedef ::KVPulseHeightDefect current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVPulseHeightDefect

//______________________________________________________________________________
void KVRecombination::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVRecombination.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVRecombination::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVRecombination::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVRecombination(void *p) {
      return  p ? new(p) ::KVRecombination : new ::KVRecombination;
   }
   static void *newArray_KVRecombination(Long_t nElements, void *p) {
      return p ? new(p) ::KVRecombination[nElements] : new ::KVRecombination[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVRecombination(void *p) {
      delete ((::KVRecombination*)p);
   }
   static void deleteArray_KVRecombination(void *p) {
      delete [] ((::KVRecombination*)p);
   }
   static void destruct_KVRecombination(void *p) {
      typedef ::KVRecombination current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVRecombination

namespace {
  void TriggerDictionaryInitialization_libKVMultiDetcalibration_Impl() {
    static const char* headers[] = {
"KVPulseHeightDefect.h",
"KVLinCal.h",
"KVRecombination.h",
0
    };
    static const char* includePaths[] = {
"/home/john/software/sources/kaliveda.git/KVMultiDet/calibration/inc",
"/home/john/software/sources/kaliveda.git/KVMultiDet/stopping",
"/home/john/software/sources/kaliveda.git/KVMultiDet/particles",
"/home/john/software/sources/kaliveda.git/KVMultiDet/geometry",
"/home/john/software/sources/kaliveda.git/KVMultiDet/base",
"/home/john/software/sources/kaliveda.git/KVMultiDet/calibration",
"/home/john/software/sources/kaliveda.git/GanTape/include",
"/home/john/software/build/kaliveda-build/1.10_R6",
"/home/john/software/build/root-v6-04-00/include",
"/home/john/software/build/root-v6-04-00/include",
"/home/john/software/build/kaliveda-build/1.10_R6/KVMultiDet/calibration/",
0
    };
    static const char* fwdDeclCode = 
R"DICTFWDDCLS(
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate(R"ATTRDUMP(Simple linear calibration E = a + b*channel)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVLinCal.h")))  KVLinCal;
class __attribute__((annotate(R"ATTRDUMP(Silicon PHD described by Moulton formula)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVPulseHeightDefect.h")))  KVPulseHeightDefect;
class __attribute__((annotate(R"ATTRDUMP(Silicon PHD described by electron-hole recombination model)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVRecombination.h")))  KVRecombination;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "KVPulseHeightDefect.h"
#include "KVLinCal.h"
#include "KVRecombination.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"KVLinCal", payloadCode, "@",
"KVPulseHeightDefect", payloadCode, "@",
"KVRecombination", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libKVMultiDetcalibration",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libKVMultiDetcalibration_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libKVMultiDetcalibration_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libKVMultiDetcalibration() {
  TriggerDictionaryInitialization_libKVMultiDetcalibration_Impl();
}
