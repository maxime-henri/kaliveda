// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__VAMOSidentification

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
#include "Identificationv.h"
#include "CsICalib.h"
#include "KVIDSiCsIVamos.h"
#include "KVVAMOSCodes.h"
#include "KVVAMOSIDTelescope.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void delete_Identificationv(void *p);
   static void deleteArray_Identificationv(void *p);
   static void destruct_Identificationv(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Identificationv*)
   {
      ::Identificationv *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::Identificationv >(0);
      static ::ROOT::TGenericClassInfo 
         instance("Identificationv", ::Identificationv::Class_Version(), "Identificationv.h", 29,
                  typeid(::Identificationv), DefineBehavior(ptr, ptr),
                  &::Identificationv::Dictionary, isa_proxy, 4,
                  sizeof(::Identificationv) );
      instance.SetDelete(&delete_Identificationv);
      instance.SetDeleteArray(&deleteArray_Identificationv);
      instance.SetDestructor(&destruct_Identificationv);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Identificationv*)
   {
      return GenerateInitInstanceLocal((::Identificationv*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::Identificationv*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVIDSiCsIVamos(void *p = 0);
   static void *newArray_KVIDSiCsIVamos(Long_t size, void *p);
   static void delete_KVIDSiCsIVamos(void *p);
   static void deleteArray_KVIDSiCsIVamos(void *p);
   static void destruct_KVIDSiCsIVamos(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVIDSiCsIVamos*)
   {
      ::KVIDSiCsIVamos *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVIDSiCsIVamos >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVIDSiCsIVamos", ::KVIDSiCsIVamos::Class_Version(), "KVIDSiCsIVamos.h", 18,
                  typeid(::KVIDSiCsIVamos), DefineBehavior(ptr, ptr),
                  &::KVIDSiCsIVamos::Dictionary, isa_proxy, 4,
                  sizeof(::KVIDSiCsIVamos) );
      instance.SetNew(&new_KVIDSiCsIVamos);
      instance.SetNewArray(&newArray_KVIDSiCsIVamos);
      instance.SetDelete(&delete_KVIDSiCsIVamos);
      instance.SetDeleteArray(&deleteArray_KVIDSiCsIVamos);
      instance.SetDestructor(&destruct_KVIDSiCsIVamos);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVIDSiCsIVamos*)
   {
      return GenerateInitInstanceLocal((::KVIDSiCsIVamos*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVIDSiCsIVamos*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_CsICalib(void *p);
   static void deleteArray_CsICalib(void *p);
   static void destruct_CsICalib(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CsICalib*)
   {
      ::CsICalib *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CsICalib >(0);
      static ::ROOT::TGenericClassInfo 
         instance("CsICalib", ::CsICalib::Class_Version(), "CsICalib.h", 31,
                  typeid(::CsICalib), DefineBehavior(ptr, ptr),
                  &::CsICalib::Dictionary, isa_proxy, 4,
                  sizeof(::CsICalib) );
      instance.SetDelete(&delete_CsICalib);
      instance.SetDeleteArray(&deleteArray_CsICalib);
      instance.SetDestructor(&destruct_CsICalib);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CsICalib*)
   {
      return GenerateInitInstanceLocal((::CsICalib*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::CsICalib*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVVAMOSCodes(void *p = 0);
   static void *newArray_KVVAMOSCodes(Long_t size, void *p);
   static void delete_KVVAMOSCodes(void *p);
   static void deleteArray_KVVAMOSCodes(void *p);
   static void destruct_KVVAMOSCodes(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVVAMOSCodes*)
   {
      ::KVVAMOSCodes *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVVAMOSCodes >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVVAMOSCodes", ::KVVAMOSCodes::Class_Version(), "KVVAMOSCodes.h", 67,
                  typeid(::KVVAMOSCodes), DefineBehavior(ptr, ptr),
                  &::KVVAMOSCodes::Dictionary, isa_proxy, 4,
                  sizeof(::KVVAMOSCodes) );
      instance.SetNew(&new_KVVAMOSCodes);
      instance.SetNewArray(&newArray_KVVAMOSCodes);
      instance.SetDelete(&delete_KVVAMOSCodes);
      instance.SetDeleteArray(&deleteArray_KVVAMOSCodes);
      instance.SetDestructor(&destruct_KVVAMOSCodes);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVVAMOSCodes*)
   {
      return GenerateInitInstanceLocal((::KVVAMOSCodes*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVVAMOSCodes*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVVAMOSIDTelescope(void *p = 0);
   static void *newArray_KVVAMOSIDTelescope(Long_t size, void *p);
   static void delete_KVVAMOSIDTelescope(void *p);
   static void deleteArray_KVVAMOSIDTelescope(void *p);
   static void destruct_KVVAMOSIDTelescope(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVVAMOSIDTelescope*)
   {
      ::KVVAMOSIDTelescope *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVVAMOSIDTelescope >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVVAMOSIDTelescope", ::KVVAMOSIDTelescope::Class_Version(), "KVVAMOSIDTelescope.h", 10,
                  typeid(::KVVAMOSIDTelescope), DefineBehavior(ptr, ptr),
                  &::KVVAMOSIDTelescope::Dictionary, isa_proxy, 4,
                  sizeof(::KVVAMOSIDTelescope) );
      instance.SetNew(&new_KVVAMOSIDTelescope);
      instance.SetNewArray(&newArray_KVVAMOSIDTelescope);
      instance.SetDelete(&delete_KVVAMOSIDTelescope);
      instance.SetDeleteArray(&deleteArray_KVVAMOSIDTelescope);
      instance.SetDestructor(&destruct_KVVAMOSIDTelescope);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVVAMOSIDTelescope*)
   {
      return GenerateInitInstanceLocal((::KVVAMOSIDTelescope*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVVAMOSIDTelescope*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr Identificationv::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Identificationv::Class_Name()
{
   return "Identificationv";
}

//______________________________________________________________________________
const char *Identificationv::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Identificationv*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Identificationv::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Identificationv*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Identificationv::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Identificationv*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Identificationv::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Identificationv*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVIDSiCsIVamos::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVIDSiCsIVamos::Class_Name()
{
   return "KVIDSiCsIVamos";
}

//______________________________________________________________________________
const char *KVIDSiCsIVamos::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIDSiCsIVamos*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVIDSiCsIVamos::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIDSiCsIVamos*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVIDSiCsIVamos::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIDSiCsIVamos*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVIDSiCsIVamos::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIDSiCsIVamos*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CsICalib::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *CsICalib::Class_Name()
{
   return "CsICalib";
}

//______________________________________________________________________________
const char *CsICalib::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CsICalib*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int CsICalib::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CsICalib*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CsICalib::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CsICalib*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CsICalib::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CsICalib*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVVAMOSCodes::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVVAMOSCodes::Class_Name()
{
   return "KVVAMOSCodes";
}

//______________________________________________________________________________
const char *KVVAMOSCodes::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVVAMOSCodes*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVVAMOSCodes::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVVAMOSCodes*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVVAMOSCodes::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVVAMOSCodes*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVVAMOSCodes::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVVAMOSCodes*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVVAMOSIDTelescope::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVVAMOSIDTelescope::Class_Name()
{
   return "KVVAMOSIDTelescope";
}

//______________________________________________________________________________
const char *KVVAMOSIDTelescope::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVVAMOSIDTelescope*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVVAMOSIDTelescope::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVVAMOSIDTelescope*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVVAMOSIDTelescope::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVVAMOSIDTelescope*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVVAMOSIDTelescope::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVVAMOSIDTelescope*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void Identificationv::Streamer(TBuffer &R__b)
{
   // Stream an object of class Identificationv.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(Identificationv::Class(),this);
   } else {
      R__b.WriteClassBuffer(Identificationv::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_Identificationv(void *p) {
      delete ((::Identificationv*)p);
   }
   static void deleteArray_Identificationv(void *p) {
      delete [] ((::Identificationv*)p);
   }
   static void destruct_Identificationv(void *p) {
      typedef ::Identificationv current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Identificationv

//______________________________________________________________________________
void KVIDSiCsIVamos::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVIDSiCsIVamos.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVIDSiCsIVamos::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVIDSiCsIVamos::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVIDSiCsIVamos(void *p) {
      return  p ? new(p) ::KVIDSiCsIVamos : new ::KVIDSiCsIVamos;
   }
   static void *newArray_KVIDSiCsIVamos(Long_t nElements, void *p) {
      return p ? new(p) ::KVIDSiCsIVamos[nElements] : new ::KVIDSiCsIVamos[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVIDSiCsIVamos(void *p) {
      delete ((::KVIDSiCsIVamos*)p);
   }
   static void deleteArray_KVIDSiCsIVamos(void *p) {
      delete [] ((::KVIDSiCsIVamos*)p);
   }
   static void destruct_KVIDSiCsIVamos(void *p) {
      typedef ::KVIDSiCsIVamos current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVIDSiCsIVamos

//______________________________________________________________________________
void CsICalib::Streamer(TBuffer &R__b)
{
   // Stream an object of class CsICalib.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CsICalib::Class(),this);
   } else {
      R__b.WriteClassBuffer(CsICalib::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_CsICalib(void *p) {
      delete ((::CsICalib*)p);
   }
   static void deleteArray_CsICalib(void *p) {
      delete [] ((::CsICalib*)p);
   }
   static void destruct_CsICalib(void *p) {
      typedef ::CsICalib current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CsICalib

//______________________________________________________________________________
void KVVAMOSCodes::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVVAMOSCodes.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVVAMOSCodes::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVVAMOSCodes::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVVAMOSCodes(void *p) {
      return  p ? new(p) ::KVVAMOSCodes : new ::KVVAMOSCodes;
   }
   static void *newArray_KVVAMOSCodes(Long_t nElements, void *p) {
      return p ? new(p) ::KVVAMOSCodes[nElements] : new ::KVVAMOSCodes[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVVAMOSCodes(void *p) {
      delete ((::KVVAMOSCodes*)p);
   }
   static void deleteArray_KVVAMOSCodes(void *p) {
      delete [] ((::KVVAMOSCodes*)p);
   }
   static void destruct_KVVAMOSCodes(void *p) {
      typedef ::KVVAMOSCodes current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVVAMOSCodes

//______________________________________________________________________________
void KVVAMOSIDTelescope::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVVAMOSIDTelescope.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVVAMOSIDTelescope::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVVAMOSIDTelescope::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVVAMOSIDTelescope(void *p) {
      return  p ? new(p) ::KVVAMOSIDTelescope : new ::KVVAMOSIDTelescope;
   }
   static void *newArray_KVVAMOSIDTelescope(Long_t nElements, void *p) {
      return p ? new(p) ::KVVAMOSIDTelescope[nElements] : new ::KVVAMOSIDTelescope[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVVAMOSIDTelescope(void *p) {
      delete ((::KVVAMOSIDTelescope*)p);
   }
   static void deleteArray_KVVAMOSIDTelescope(void *p) {
      delete [] ((::KVVAMOSIDTelescope*)p);
   }
   static void destruct_KVVAMOSIDTelescope(void *p) {
      typedef ::KVVAMOSIDTelescope current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVVAMOSIDTelescope

namespace {
  void TriggerDictionaryInitialization_libVAMOSidentification_Impl() {
    static const char* headers[] = {
"Identificationv.h",
"CsICalib.h",
"KVIDSiCsIVamos.h",
"KVVAMOSCodes.h",
"KVVAMOSIDTelescope.h",
0
    };
    static const char* includePaths[] = {
"/home/john/software/sources/kaliveda.git/VAMOS/identification/inc",
"/home/john/software/sources/kaliveda.git/VAMOS/calibration",
"/home/john/software/sources/kaliveda.git/VAMOS/geometry",
"/home/john/software/sources/kaliveda.git/VAMOS/reconstruction",
"/home/john/software/sources/kaliveda.git/VAMOS/base",
"/home/john/software/sources/kaliveda.git/VAMOS/identification",
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
"/home/john/software/build/kaliveda-build/1.10_R6/VAMOS/identification/",
0
    };
    static const char* fwdDeclCode = 
R"DICTFWDDCLS(
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$Identificationv.h")))  Identificationv;
class __attribute__((annotate(R"ATTRDUMP(Identification map SIE_xx-CSIyy of Vamos)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVIDSiCsIVamos.h")))  KVIDSiCsIVamos;
class __attribute__((annotate(R"ATTRDUMP(CsICalib)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$Identificationv.h")))  CsICalib;
class __attribute__((annotate(R"ATTRDUMP(Status for calibration, trajectory reconstruction, identification and time of flight in VAMOS)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVVAMOSCodes.h")))  KVVAMOSCodes;
class __attribute__((annotate(R"ATTRDUMP(A deltaE-E identification telescope in VAMOS)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVVAMOSIDTelescope.h")))  KVVAMOSIDTelescope;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "Identificationv.h"
#include "CsICalib.h"
#include "KVIDSiCsIVamos.h"
#include "KVVAMOSCodes.h"
#include "KVVAMOSIDTelescope.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"CsICalib", payloadCode, "@",
"FocalPosCodes", payloadCode, "@",
"Identificationv", payloadCode, "@",
"KVIDSiCsIVamos", payloadCode, "@",
"KVVAMOSCodes", payloadCode, "@",
"KVVAMOSIDTelescope", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libVAMOSidentification",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libVAMOSidentification_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libVAMOSidentification_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libVAMOSidentification() {
  TriggerDictionaryInitialization_libVAMOSidentification_Impl();
}
