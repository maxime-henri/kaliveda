// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__KVIndracalibration

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
#include "KVChannelEnergyAlpha.h"
#include "KVChannelVolt.h"
#include "KVVoltEnergy.h"
#include "KVLightEnergyCsIFull.h"
#include "KVFunctionCal.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_KVChannelVolt(void *p = 0);
   static void *newArray_KVChannelVolt(Long_t size, void *p);
   static void delete_KVChannelVolt(void *p);
   static void deleteArray_KVChannelVolt(void *p);
   static void destruct_KVChannelVolt(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVChannelVolt*)
   {
      ::KVChannelVolt *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVChannelVolt >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVChannelVolt", ::KVChannelVolt::Class_Version(), "KVChannelVolt.h", 23,
                  typeid(::KVChannelVolt), DefineBehavior(ptr, ptr),
                  &::KVChannelVolt::Dictionary, isa_proxy, 4,
                  sizeof(::KVChannelVolt) );
      instance.SetNew(&new_KVChannelVolt);
      instance.SetNewArray(&newArray_KVChannelVolt);
      instance.SetDelete(&delete_KVChannelVolt);
      instance.SetDeleteArray(&deleteArray_KVChannelVolt);
      instance.SetDestructor(&destruct_KVChannelVolt);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVChannelVolt*)
   {
      return GenerateInitInstanceLocal((::KVChannelVolt*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVChannelVolt*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVChannelEnergyAlpha(void *p = 0);
   static void *newArray_KVChannelEnergyAlpha(Long_t size, void *p);
   static void delete_KVChannelEnergyAlpha(void *p);
   static void deleteArray_KVChannelEnergyAlpha(void *p);
   static void destruct_KVChannelEnergyAlpha(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVChannelEnergyAlpha*)
   {
      ::KVChannelEnergyAlpha *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVChannelEnergyAlpha >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVChannelEnergyAlpha", ::KVChannelEnergyAlpha::Class_Version(), "KVChannelEnergyAlpha.h", 23,
                  typeid(::KVChannelEnergyAlpha), DefineBehavior(ptr, ptr),
                  &::KVChannelEnergyAlpha::Dictionary, isa_proxy, 4,
                  sizeof(::KVChannelEnergyAlpha) );
      instance.SetNew(&new_KVChannelEnergyAlpha);
      instance.SetNewArray(&newArray_KVChannelEnergyAlpha);
      instance.SetDelete(&delete_KVChannelEnergyAlpha);
      instance.SetDeleteArray(&deleteArray_KVChannelEnergyAlpha);
      instance.SetDestructor(&destruct_KVChannelEnergyAlpha);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVChannelEnergyAlpha*)
   {
      return GenerateInitInstanceLocal((::KVChannelEnergyAlpha*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVChannelEnergyAlpha*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVLightEnergyCsIFull(void *p = 0);
   static void *newArray_KVLightEnergyCsIFull(Long_t size, void *p);
   static void delete_KVLightEnergyCsIFull(void *p);
   static void deleteArray_KVLightEnergyCsIFull(void *p);
   static void destruct_KVLightEnergyCsIFull(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVLightEnergyCsIFull*)
   {
      ::KVLightEnergyCsIFull *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVLightEnergyCsIFull >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVLightEnergyCsIFull", ::KVLightEnergyCsIFull::Class_Version(), "KVLightEnergyCsIFull.h", 11,
                  typeid(::KVLightEnergyCsIFull), DefineBehavior(ptr, ptr),
                  &::KVLightEnergyCsIFull::Dictionary, isa_proxy, 4,
                  sizeof(::KVLightEnergyCsIFull) );
      instance.SetNew(&new_KVLightEnergyCsIFull);
      instance.SetNewArray(&newArray_KVLightEnergyCsIFull);
      instance.SetDelete(&delete_KVLightEnergyCsIFull);
      instance.SetDeleteArray(&deleteArray_KVLightEnergyCsIFull);
      instance.SetDestructor(&destruct_KVLightEnergyCsIFull);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVLightEnergyCsIFull*)
   {
      return GenerateInitInstanceLocal((::KVLightEnergyCsIFull*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVLightEnergyCsIFull*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVFunctionCal(void *p = 0);
   static void *newArray_KVFunctionCal(Long_t size, void *p);
   static void delete_KVFunctionCal(void *p);
   static void deleteArray_KVFunctionCal(void *p);
   static void destruct_KVFunctionCal(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVFunctionCal*)
   {
      ::KVFunctionCal *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVFunctionCal >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVFunctionCal", ::KVFunctionCal::Class_Version(), "KVFunctionCal.h", 20,
                  typeid(::KVFunctionCal), DefineBehavior(ptr, ptr),
                  &::KVFunctionCal::Dictionary, isa_proxy, 4,
                  sizeof(::KVFunctionCal) );
      instance.SetNew(&new_KVFunctionCal);
      instance.SetNewArray(&newArray_KVFunctionCal);
      instance.SetDelete(&delete_KVFunctionCal);
      instance.SetDeleteArray(&deleteArray_KVFunctionCal);
      instance.SetDestructor(&destruct_KVFunctionCal);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVFunctionCal*)
   {
      return GenerateInitInstanceLocal((::KVFunctionCal*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVFunctionCal*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVVoltEnergy(void *p = 0);
   static void *newArray_KVVoltEnergy(Long_t size, void *p);
   static void delete_KVVoltEnergy(void *p);
   static void deleteArray_KVVoltEnergy(void *p);
   static void destruct_KVVoltEnergy(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVVoltEnergy*)
   {
      ::KVVoltEnergy *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVVoltEnergy >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVVoltEnergy", ::KVVoltEnergy::Class_Version(), "KVVoltEnergy.h", 25,
                  typeid(::KVVoltEnergy), DefineBehavior(ptr, ptr),
                  &::KVVoltEnergy::Dictionary, isa_proxy, 4,
                  sizeof(::KVVoltEnergy) );
      instance.SetNew(&new_KVVoltEnergy);
      instance.SetNewArray(&newArray_KVVoltEnergy);
      instance.SetDelete(&delete_KVVoltEnergy);
      instance.SetDeleteArray(&deleteArray_KVVoltEnergy);
      instance.SetDestructor(&destruct_KVVoltEnergy);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVVoltEnergy*)
   {
      return GenerateInitInstanceLocal((::KVVoltEnergy*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVVoltEnergy*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr KVChannelVolt::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVChannelVolt::Class_Name()
{
   return "KVChannelVolt";
}

//______________________________________________________________________________
const char *KVChannelVolt::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVChannelVolt*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVChannelVolt::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVChannelVolt*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVChannelVolt::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVChannelVolt*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVChannelVolt::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVChannelVolt*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVChannelEnergyAlpha::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVChannelEnergyAlpha::Class_Name()
{
   return "KVChannelEnergyAlpha";
}

//______________________________________________________________________________
const char *KVChannelEnergyAlpha::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVChannelEnergyAlpha*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVChannelEnergyAlpha::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVChannelEnergyAlpha*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVChannelEnergyAlpha::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVChannelEnergyAlpha*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVChannelEnergyAlpha::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVChannelEnergyAlpha*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVLightEnergyCsIFull::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVLightEnergyCsIFull::Class_Name()
{
   return "KVLightEnergyCsIFull";
}

//______________________________________________________________________________
const char *KVLightEnergyCsIFull::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVLightEnergyCsIFull*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVLightEnergyCsIFull::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVLightEnergyCsIFull*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVLightEnergyCsIFull::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVLightEnergyCsIFull*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVLightEnergyCsIFull::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVLightEnergyCsIFull*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVFunctionCal::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVFunctionCal::Class_Name()
{
   return "KVFunctionCal";
}

//______________________________________________________________________________
const char *KVFunctionCal::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVFunctionCal*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVFunctionCal::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVFunctionCal*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVFunctionCal::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVFunctionCal*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVFunctionCal::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVFunctionCal*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVVoltEnergy::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVVoltEnergy::Class_Name()
{
   return "KVVoltEnergy";
}

//______________________________________________________________________________
const char *KVVoltEnergy::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVVoltEnergy*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVVoltEnergy::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVVoltEnergy*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVVoltEnergy::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVVoltEnergy*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVVoltEnergy::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVVoltEnergy*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void KVChannelVolt::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVChannelVolt.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVChannelVolt::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVChannelVolt::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVChannelVolt(void *p) {
      return  p ? new(p) ::KVChannelVolt : new ::KVChannelVolt;
   }
   static void *newArray_KVChannelVolt(Long_t nElements, void *p) {
      return p ? new(p) ::KVChannelVolt[nElements] : new ::KVChannelVolt[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVChannelVolt(void *p) {
      delete ((::KVChannelVolt*)p);
   }
   static void deleteArray_KVChannelVolt(void *p) {
      delete [] ((::KVChannelVolt*)p);
   }
   static void destruct_KVChannelVolt(void *p) {
      typedef ::KVChannelVolt current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVChannelVolt

//______________________________________________________________________________
void KVChannelEnergyAlpha::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVChannelEnergyAlpha.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVChannelEnergyAlpha::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVChannelEnergyAlpha::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVChannelEnergyAlpha(void *p) {
      return  p ? new(p) ::KVChannelEnergyAlpha : new ::KVChannelEnergyAlpha;
   }
   static void *newArray_KVChannelEnergyAlpha(Long_t nElements, void *p) {
      return p ? new(p) ::KVChannelEnergyAlpha[nElements] : new ::KVChannelEnergyAlpha[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVChannelEnergyAlpha(void *p) {
      delete ((::KVChannelEnergyAlpha*)p);
   }
   static void deleteArray_KVChannelEnergyAlpha(void *p) {
      delete [] ((::KVChannelEnergyAlpha*)p);
   }
   static void destruct_KVChannelEnergyAlpha(void *p) {
      typedef ::KVChannelEnergyAlpha current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVChannelEnergyAlpha

//______________________________________________________________________________
void KVLightEnergyCsIFull::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVLightEnergyCsIFull.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVLightEnergyCsIFull::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVLightEnergyCsIFull::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVLightEnergyCsIFull(void *p) {
      return  p ? new(p) ::KVLightEnergyCsIFull : new ::KVLightEnergyCsIFull;
   }
   static void *newArray_KVLightEnergyCsIFull(Long_t nElements, void *p) {
      return p ? new(p) ::KVLightEnergyCsIFull[nElements] : new ::KVLightEnergyCsIFull[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVLightEnergyCsIFull(void *p) {
      delete ((::KVLightEnergyCsIFull*)p);
   }
   static void deleteArray_KVLightEnergyCsIFull(void *p) {
      delete [] ((::KVLightEnergyCsIFull*)p);
   }
   static void destruct_KVLightEnergyCsIFull(void *p) {
      typedef ::KVLightEnergyCsIFull current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVLightEnergyCsIFull

//______________________________________________________________________________
void KVFunctionCal::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVFunctionCal.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVFunctionCal::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVFunctionCal::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVFunctionCal(void *p) {
      return  p ? new(p) ::KVFunctionCal : new ::KVFunctionCal;
   }
   static void *newArray_KVFunctionCal(Long_t nElements, void *p) {
      return p ? new(p) ::KVFunctionCal[nElements] : new ::KVFunctionCal[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVFunctionCal(void *p) {
      delete ((::KVFunctionCal*)p);
   }
   static void deleteArray_KVFunctionCal(void *p) {
      delete [] ((::KVFunctionCal*)p);
   }
   static void destruct_KVFunctionCal(void *p) {
      typedef ::KVFunctionCal current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVFunctionCal

//______________________________________________________________________________
void KVVoltEnergy::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVVoltEnergy.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVVoltEnergy::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVVoltEnergy::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVVoltEnergy(void *p) {
      return  p ? new(p) ::KVVoltEnergy : new ::KVVoltEnergy;
   }
   static void *newArray_KVVoltEnergy(Long_t nElements, void *p) {
      return p ? new(p) ::KVVoltEnergy[nElements] : new ::KVVoltEnergy[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVVoltEnergy(void *p) {
      delete ((::KVVoltEnergy*)p);
   }
   static void deleteArray_KVVoltEnergy(void *p) {
      delete [] ((::KVVoltEnergy*)p);
   }
   static void destruct_KVVoltEnergy(void *p) {
      typedef ::KVVoltEnergy current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVVoltEnergy

namespace {
  void TriggerDictionaryInitialization_libKVIndracalibration_Impl() {
    static const char* headers[] = {
"KVChannelEnergyAlpha.h",
"KVChannelVolt.h",
"KVVoltEnergy.h",
"KVLightEnergyCsIFull.h",
"KVFunctionCal.h",
0
    };
    static const char* includePaths[] = {
"/home/john/software/sources/kaliveda.git/KVIndra/calibration/inc",
"/home/john/software/sources/kaliveda.git/KVIndra/calibration",
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
"/home/john/software/build/kaliveda-build/1.10_R6/KVIndra/calibration/",
0
    };
    static const char* fwdDeclCode = 
R"DICTFWDDCLS(
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate(R"ATTRDUMP(Electronic calibration for Si and ChIo detectors.)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVChannelVolt.h")))  KVChannelVolt;
class __attribute__((annotate(R"ATTRDUMP(Alpha channel-energy calibration for Si and ChIo detectors.)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVChannelEnergyAlpha.h")))  KVChannelEnergyAlpha;
class __attribute__((annotate(R"ATTRDUMP(Light-energy calibration for CsI detectors using the full expression of Marian Parlog)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVLightEnergyCsIFull.h")))  KVLightEnergyCsIFull;
class __attribute__((annotate(R"ATTRDUMP(analytic function calibration E = f(channel))ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVFunctionCal.h")))  KVFunctionCal;
class __attribute__((annotate(R"ATTRDUMP(Volt-Energy calibration for Si and ChIo detectors.)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVVoltEnergy.h")))  KVVoltEnergy;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "KVChannelEnergyAlpha.h"
#include "KVChannelVolt.h"
#include "KVVoltEnergy.h"
#include "KVLightEnergyCsIFull.h"
#include "KVFunctionCal.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"KVChannelEnergyAlpha", payloadCode, "@",
"KVChannelVolt", payloadCode, "@",
"KVFunctionCal", payloadCode, "@",
"KVLightEnergyCsIFull", payloadCode, "@",
"KVVoltEnergy", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libKVIndracalibration",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libKVIndracalibration_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libKVIndracalibration_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libKVIndracalibration() {
  TriggerDictionaryInitialization_libKVIndracalibration_Impl();
}
