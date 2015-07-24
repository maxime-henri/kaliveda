// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__VAMOSreconstruction

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
#include "ReconstructionSeDv.h"
#include "KVVAMOSReconTrajectory.h"
#include "Reconstructionv.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void delete_Reconstructionv(void *p);
   static void deleteArray_Reconstructionv(void *p);
   static void destruct_Reconstructionv(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Reconstructionv*)
   {
      ::Reconstructionv *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::Reconstructionv >(0);
      static ::ROOT::TGenericClassInfo 
         instance("Reconstructionv", ::Reconstructionv::Class_Version(), "Reconstructionv.h", 10,
                  typeid(::Reconstructionv), DefineBehavior(ptr, ptr),
                  &::Reconstructionv::Dictionary, isa_proxy, 4,
                  sizeof(::Reconstructionv) );
      instance.SetDelete(&delete_Reconstructionv);
      instance.SetDeleteArray(&deleteArray_Reconstructionv);
      instance.SetDestructor(&destruct_Reconstructionv);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Reconstructionv*)
   {
      return GenerateInitInstanceLocal((::Reconstructionv*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::Reconstructionv*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_ReconstructionSeDv(void *p);
   static void deleteArray_ReconstructionSeDv(void *p);
   static void destruct_ReconstructionSeDv(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ReconstructionSeDv*)
   {
      ::ReconstructionSeDv *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ReconstructionSeDv >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ReconstructionSeDv", ::ReconstructionSeDv::Class_Version(), "ReconstructionSeDv.h", 10,
                  typeid(::ReconstructionSeDv), DefineBehavior(ptr, ptr),
                  &::ReconstructionSeDv::Dictionary, isa_proxy, 4,
                  sizeof(::ReconstructionSeDv) );
      instance.SetDelete(&delete_ReconstructionSeDv);
      instance.SetDeleteArray(&deleteArray_ReconstructionSeDv);
      instance.SetDestructor(&destruct_ReconstructionSeDv);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ReconstructionSeDv*)
   {
      return GenerateInitInstanceLocal((::ReconstructionSeDv*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::ReconstructionSeDv*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVVAMOSReconTrajectory(void *p = 0);
   static void *newArray_KVVAMOSReconTrajectory(Long_t size, void *p);
   static void delete_KVVAMOSReconTrajectory(void *p);
   static void deleteArray_KVVAMOSReconTrajectory(void *p);
   static void destruct_KVVAMOSReconTrajectory(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVVAMOSReconTrajectory*)
   {
      ::KVVAMOSReconTrajectory *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVVAMOSReconTrajectory >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVVAMOSReconTrajectory", ::KVVAMOSReconTrajectory::Class_Version(), "KVVAMOSReconTrajectory.h", 11,
                  typeid(::KVVAMOSReconTrajectory), DefineBehavior(ptr, ptr),
                  &::KVVAMOSReconTrajectory::Dictionary, isa_proxy, 4,
                  sizeof(::KVVAMOSReconTrajectory) );
      instance.SetNew(&new_KVVAMOSReconTrajectory);
      instance.SetNewArray(&newArray_KVVAMOSReconTrajectory);
      instance.SetDelete(&delete_KVVAMOSReconTrajectory);
      instance.SetDeleteArray(&deleteArray_KVVAMOSReconTrajectory);
      instance.SetDestructor(&destruct_KVVAMOSReconTrajectory);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVVAMOSReconTrajectory*)
   {
      return GenerateInitInstanceLocal((::KVVAMOSReconTrajectory*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVVAMOSReconTrajectory*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr Reconstructionv::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Reconstructionv::Class_Name()
{
   return "Reconstructionv";
}

//______________________________________________________________________________
const char *Reconstructionv::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Reconstructionv*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Reconstructionv::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Reconstructionv*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Reconstructionv::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Reconstructionv*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Reconstructionv::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Reconstructionv*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr ReconstructionSeDv::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ReconstructionSeDv::Class_Name()
{
   return "ReconstructionSeDv";
}

//______________________________________________________________________________
const char *ReconstructionSeDv::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ReconstructionSeDv*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ReconstructionSeDv::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ReconstructionSeDv*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ReconstructionSeDv::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ReconstructionSeDv*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ReconstructionSeDv::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ReconstructionSeDv*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVVAMOSReconTrajectory::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVVAMOSReconTrajectory::Class_Name()
{
   return "KVVAMOSReconTrajectory";
}

//______________________________________________________________________________
const char *KVVAMOSReconTrajectory::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVVAMOSReconTrajectory*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVVAMOSReconTrajectory::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVVAMOSReconTrajectory*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVVAMOSReconTrajectory::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVVAMOSReconTrajectory*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVVAMOSReconTrajectory::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVVAMOSReconTrajectory*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void Reconstructionv::Streamer(TBuffer &R__b)
{
   // Stream an object of class Reconstructionv.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(Reconstructionv::Class(),this);
   } else {
      R__b.WriteClassBuffer(Reconstructionv::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_Reconstructionv(void *p) {
      delete ((::Reconstructionv*)p);
   }
   static void deleteArray_Reconstructionv(void *p) {
      delete [] ((::Reconstructionv*)p);
   }
   static void destruct_Reconstructionv(void *p) {
      typedef ::Reconstructionv current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Reconstructionv

//______________________________________________________________________________
void ReconstructionSeDv::Streamer(TBuffer &R__b)
{
   // Stream an object of class ReconstructionSeDv.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ReconstructionSeDv::Class(),this);
   } else {
      R__b.WriteClassBuffer(ReconstructionSeDv::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ReconstructionSeDv(void *p) {
      delete ((::ReconstructionSeDv*)p);
   }
   static void deleteArray_ReconstructionSeDv(void *p) {
      delete [] ((::ReconstructionSeDv*)p);
   }
   static void destruct_ReconstructionSeDv(void *p) {
      typedef ::ReconstructionSeDv current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ReconstructionSeDv

//______________________________________________________________________________
void KVVAMOSReconTrajectory::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVVAMOSReconTrajectory.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVVAMOSReconTrajectory::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVVAMOSReconTrajectory::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVVAMOSReconTrajectory(void *p) {
      return  p ? new(p) ::KVVAMOSReconTrajectory : new ::KVVAMOSReconTrajectory;
   }
   static void *newArray_KVVAMOSReconTrajectory(Long_t nElements, void *p) {
      return p ? new(p) ::KVVAMOSReconTrajectory[nElements] : new ::KVVAMOSReconTrajectory[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVVAMOSReconTrajectory(void *p) {
      delete ((::KVVAMOSReconTrajectory*)p);
   }
   static void deleteArray_KVVAMOSReconTrajectory(void *p) {
      delete [] ((::KVVAMOSReconTrajectory*)p);
   }
   static void destruct_KVVAMOSReconTrajectory(void *p) {
      typedef ::KVVAMOSReconTrajectory current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVVAMOSReconTrajectory

namespace {
  void TriggerDictionaryInitialization_libVAMOSreconstruction_Impl() {
    static const char* headers[] = {
"ReconstructionSeDv.h",
"KVVAMOSReconTrajectory.h",
"Reconstructionv.h",
0
    };
    static const char* includePaths[] = {
"/home/john/software/sources/kaliveda.git/VAMOS/reconstruction/inc",
"/home/john/software/sources/kaliveda.git/VAMOS/geometry",
"/home/john/software/sources/kaliveda.git/VAMOS/base",
"/home/john/software/sources/kaliveda.git/VAMOS/reconstruction",
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
"/home/john/software/build/kaliveda-build/1.10_R6/VAMOS/reconstruction/",
0
    };
    static const char* fwdDeclCode = 
R"DICTFWDDCLS(
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$Reconstructionv.h")))  Reconstructionv;
class __attribute__((annotate("$clingAutoload$ReconstructionSeDv.h")))  ReconstructionSeDv;
class __attribute__((annotate(R"ATTRDUMP(Handle data used to reconstruct the trajectory of a nucleus in VAMOS)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVVAMOSReconTrajectory.h")))  KVVAMOSReconTrajectory;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "ReconstructionSeDv.h"
#include "KVVAMOSReconTrajectory.h"
#include "Reconstructionv.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"KVVAMOSReconTrajectory", payloadCode, "@",
"ReconstructionSeDv", payloadCode, "@",
"Reconstructionv", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libVAMOSreconstruction",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libVAMOSreconstruction_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libVAMOSreconstruction_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libVAMOSreconstruction() {
  TriggerDictionaryInitialization_libVAMOSreconstruction_Impl();
}
