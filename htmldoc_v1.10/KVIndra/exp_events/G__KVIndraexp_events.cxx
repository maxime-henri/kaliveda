// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__KVIndraexp_events

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
#include "KVINDRAReconEvent.h"
#include "INDRAGeometryBuilder.h"
#include "KVINDRA.h"
#include "KVINDRAe503.h"
#include "KVINDRAReconNuc.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_KVINDRA(void *p = 0);
   static void *newArray_KVINDRA(Long_t size, void *p);
   static void delete_KVINDRA(void *p);
   static void deleteArray_KVINDRA(void *p);
   static void destruct_KVINDRA(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVINDRA*)
   {
      ::KVINDRA *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVINDRA >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVINDRA", ::KVINDRA::Class_Version(), "KVINDRA.h", 65,
                  typeid(::KVINDRA), DefineBehavior(ptr, ptr),
                  &::KVINDRA::Dictionary, isa_proxy, 4,
                  sizeof(::KVINDRA) );
      instance.SetNew(&new_KVINDRA);
      instance.SetNewArray(&newArray_KVINDRA);
      instance.SetDelete(&delete_KVINDRA);
      instance.SetDeleteArray(&deleteArray_KVINDRA);
      instance.SetDestructor(&destruct_KVINDRA);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVINDRA*)
   {
      return GenerateInitInstanceLocal((::KVINDRA*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVINDRA*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVINDRAe503(void *p = 0);
   static void *newArray_KVINDRAe503(Long_t size, void *p);
   static void delete_KVINDRAe503(void *p);
   static void deleteArray_KVINDRAe503(void *p);
   static void destruct_KVINDRAe503(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVINDRAe503*)
   {
      ::KVINDRAe503 *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVINDRAe503 >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVINDRAe503", ::KVINDRAe503::Class_Version(), "KVINDRAe503.h", 9,
                  typeid(::KVINDRAe503), DefineBehavior(ptr, ptr),
                  &::KVINDRAe503::Dictionary, isa_proxy, 4,
                  sizeof(::KVINDRAe503) );
      instance.SetNew(&new_KVINDRAe503);
      instance.SetNewArray(&newArray_KVINDRAe503);
      instance.SetDelete(&delete_KVINDRAe503);
      instance.SetDeleteArray(&deleteArray_KVINDRAe503);
      instance.SetDestructor(&destruct_KVINDRAe503);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVINDRAe503*)
   {
      return GenerateInitInstanceLocal((::KVINDRAe503*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVINDRAe503*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_INDRAGeometryBuilder(void *p = 0);
   static void *newArray_INDRAGeometryBuilder(Long_t size, void *p);
   static void delete_INDRAGeometryBuilder(void *p);
   static void deleteArray_INDRAGeometryBuilder(void *p);
   static void destruct_INDRAGeometryBuilder(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::INDRAGeometryBuilder*)
   {
      ::INDRAGeometryBuilder *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::INDRAGeometryBuilder >(0);
      static ::ROOT::TGenericClassInfo 
         instance("INDRAGeometryBuilder", ::INDRAGeometryBuilder::Class_Version(), "INDRAGeometryBuilder.h", 17,
                  typeid(::INDRAGeometryBuilder), DefineBehavior(ptr, ptr),
                  &::INDRAGeometryBuilder::Dictionary, isa_proxy, 4,
                  sizeof(::INDRAGeometryBuilder) );
      instance.SetNew(&new_INDRAGeometryBuilder);
      instance.SetNewArray(&newArray_INDRAGeometryBuilder);
      instance.SetDelete(&delete_INDRAGeometryBuilder);
      instance.SetDeleteArray(&deleteArray_INDRAGeometryBuilder);
      instance.SetDestructor(&destruct_INDRAGeometryBuilder);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::INDRAGeometryBuilder*)
   {
      return GenerateInitInstanceLocal((::INDRAGeometryBuilder*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::INDRAGeometryBuilder*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVINDRAReconEvent(void *p = 0);
   static void *newArray_KVINDRAReconEvent(Long_t size, void *p);
   static void delete_KVINDRAReconEvent(void *p);
   static void deleteArray_KVINDRAReconEvent(void *p);
   static void destruct_KVINDRAReconEvent(void *p);
   static void streamer_KVINDRAReconEvent(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVINDRAReconEvent*)
   {
      ::KVINDRAReconEvent *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVINDRAReconEvent >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVINDRAReconEvent", ::KVINDRAReconEvent::Class_Version(), "KVINDRAReconEvent.h", 32,
                  typeid(::KVINDRAReconEvent), DefineBehavior(ptr, ptr),
                  &::KVINDRAReconEvent::Dictionary, isa_proxy, 17,
                  sizeof(::KVINDRAReconEvent) );
      instance.SetNew(&new_KVINDRAReconEvent);
      instance.SetNewArray(&newArray_KVINDRAReconEvent);
      instance.SetDelete(&delete_KVINDRAReconEvent);
      instance.SetDeleteArray(&deleteArray_KVINDRAReconEvent);
      instance.SetDestructor(&destruct_KVINDRAReconEvent);
      instance.SetStreamerFunc(&streamer_KVINDRAReconEvent);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVINDRAReconEvent*)
   {
      return GenerateInitInstanceLocal((::KVINDRAReconEvent*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVINDRAReconEvent*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVINDRAReconNuc(void *p = 0);
   static void *newArray_KVINDRAReconNuc(Long_t size, void *p);
   static void delete_KVINDRAReconNuc(void *p);
   static void deleteArray_KVINDRAReconNuc(void *p);
   static void destruct_KVINDRAReconNuc(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVINDRAReconNuc*)
   {
      ::KVINDRAReconNuc *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVINDRAReconNuc >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVINDRAReconNuc", ::KVINDRAReconNuc::Class_Version(), "KVINDRAReconNuc.h", 36,
                  typeid(::KVINDRAReconNuc), DefineBehavior(ptr, ptr),
                  &::KVINDRAReconNuc::Dictionary, isa_proxy, 4,
                  sizeof(::KVINDRAReconNuc) );
      instance.SetNew(&new_KVINDRAReconNuc);
      instance.SetNewArray(&newArray_KVINDRAReconNuc);
      instance.SetDelete(&delete_KVINDRAReconNuc);
      instance.SetDeleteArray(&deleteArray_KVINDRAReconNuc);
      instance.SetDestructor(&destruct_KVINDRAReconNuc);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVINDRAReconNuc*)
   {
      return GenerateInitInstanceLocal((::KVINDRAReconNuc*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVINDRAReconNuc*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr KVINDRA::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVINDRA::Class_Name()
{
   return "KVINDRA";
}

//______________________________________________________________________________
const char *KVINDRA::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVINDRA*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVINDRA::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVINDRA*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVINDRA::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVINDRA*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVINDRA::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVINDRA*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVINDRAe503::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVINDRAe503::Class_Name()
{
   return "KVINDRAe503";
}

//______________________________________________________________________________
const char *KVINDRAe503::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVINDRAe503*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVINDRAe503::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVINDRAe503*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVINDRAe503::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVINDRAe503*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVINDRAe503::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVINDRAe503*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr INDRAGeometryBuilder::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *INDRAGeometryBuilder::Class_Name()
{
   return "INDRAGeometryBuilder";
}

//______________________________________________________________________________
const char *INDRAGeometryBuilder::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::INDRAGeometryBuilder*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int INDRAGeometryBuilder::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::INDRAGeometryBuilder*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *INDRAGeometryBuilder::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::INDRAGeometryBuilder*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *INDRAGeometryBuilder::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::INDRAGeometryBuilder*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVINDRAReconEvent::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVINDRAReconEvent::Class_Name()
{
   return "KVINDRAReconEvent";
}

//______________________________________________________________________________
const char *KVINDRAReconEvent::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVINDRAReconEvent*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVINDRAReconEvent::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVINDRAReconEvent*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVINDRAReconEvent::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVINDRAReconEvent*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVINDRAReconEvent::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVINDRAReconEvent*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVINDRAReconNuc::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVINDRAReconNuc::Class_Name()
{
   return "KVINDRAReconNuc";
}

//______________________________________________________________________________
const char *KVINDRAReconNuc::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVINDRAReconNuc*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVINDRAReconNuc::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVINDRAReconNuc*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVINDRAReconNuc::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVINDRAReconNuc*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVINDRAReconNuc::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVINDRAReconNuc*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void KVINDRA::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVINDRA.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVINDRA::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVINDRA::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVINDRA(void *p) {
      return  p ? new(p) ::KVINDRA : new ::KVINDRA;
   }
   static void *newArray_KVINDRA(Long_t nElements, void *p) {
      return p ? new(p) ::KVINDRA[nElements] : new ::KVINDRA[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVINDRA(void *p) {
      delete ((::KVINDRA*)p);
   }
   static void deleteArray_KVINDRA(void *p) {
      delete [] ((::KVINDRA*)p);
   }
   static void destruct_KVINDRA(void *p) {
      typedef ::KVINDRA current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVINDRA

//______________________________________________________________________________
void KVINDRAe503::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVINDRAe503.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVINDRAe503::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVINDRAe503::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVINDRAe503(void *p) {
      return  p ? new(p) ::KVINDRAe503 : new ::KVINDRAe503;
   }
   static void *newArray_KVINDRAe503(Long_t nElements, void *p) {
      return p ? new(p) ::KVINDRAe503[nElements] : new ::KVINDRAe503[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVINDRAe503(void *p) {
      delete ((::KVINDRAe503*)p);
   }
   static void deleteArray_KVINDRAe503(void *p) {
      delete [] ((::KVINDRAe503*)p);
   }
   static void destruct_KVINDRAe503(void *p) {
      typedef ::KVINDRAe503 current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVINDRAe503

//______________________________________________________________________________
void INDRAGeometryBuilder::Streamer(TBuffer &R__b)
{
   // Stream an object of class INDRAGeometryBuilder.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(INDRAGeometryBuilder::Class(),this);
   } else {
      R__b.WriteClassBuffer(INDRAGeometryBuilder::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_INDRAGeometryBuilder(void *p) {
      return  p ? new(p) ::INDRAGeometryBuilder : new ::INDRAGeometryBuilder;
   }
   static void *newArray_INDRAGeometryBuilder(Long_t nElements, void *p) {
      return p ? new(p) ::INDRAGeometryBuilder[nElements] : new ::INDRAGeometryBuilder[nElements];
   }
   // Wrapper around operator delete
   static void delete_INDRAGeometryBuilder(void *p) {
      delete ((::INDRAGeometryBuilder*)p);
   }
   static void deleteArray_INDRAGeometryBuilder(void *p) {
      delete [] ((::INDRAGeometryBuilder*)p);
   }
   static void destruct_INDRAGeometryBuilder(void *p) {
      typedef ::INDRAGeometryBuilder current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::INDRAGeometryBuilder

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVINDRAReconEvent(void *p) {
      return  p ? new(p) ::KVINDRAReconEvent : new ::KVINDRAReconEvent;
   }
   static void *newArray_KVINDRAReconEvent(Long_t nElements, void *p) {
      return p ? new(p) ::KVINDRAReconEvent[nElements] : new ::KVINDRAReconEvent[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVINDRAReconEvent(void *p) {
      delete ((::KVINDRAReconEvent*)p);
   }
   static void deleteArray_KVINDRAReconEvent(void *p) {
      delete [] ((::KVINDRAReconEvent*)p);
   }
   static void destruct_KVINDRAReconEvent(void *p) {
      typedef ::KVINDRAReconEvent current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVINDRAReconEvent(TBuffer &buf, void *obj) {
      ((::KVINDRAReconEvent*)obj)->::KVINDRAReconEvent::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVINDRAReconEvent

//______________________________________________________________________________
void KVINDRAReconNuc::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVINDRAReconNuc.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVINDRAReconNuc::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVINDRAReconNuc::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVINDRAReconNuc(void *p) {
      return  p ? new(p) ::KVINDRAReconNuc : new ::KVINDRAReconNuc;
   }
   static void *newArray_KVINDRAReconNuc(Long_t nElements, void *p) {
      return p ? new(p) ::KVINDRAReconNuc[nElements] : new ::KVINDRAReconNuc[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVINDRAReconNuc(void *p) {
      delete ((::KVINDRAReconNuc*)p);
   }
   static void deleteArray_KVINDRAReconNuc(void *p) {
      delete [] ((::KVINDRAReconNuc*)p);
   }
   static void destruct_KVINDRAReconNuc(void *p) {
      typedef ::KVINDRAReconNuc current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVINDRAReconNuc

namespace {
  void TriggerDictionaryInitialization_libKVIndraexp_events_Impl() {
    static const char* headers[] = {
"KVINDRAReconEvent.h",
"INDRAGeometryBuilder.h",
"KVINDRA.h",
"KVINDRAe503.h",
"KVINDRAReconNuc.h",
0
    };
    static const char* includePaths[] = {
"/home/john/software/sources/kaliveda.git/KVIndra/exp_events/inc",
"/home/john/software/sources/kaliveda.git/KVIndra/calibration",
"/home/john/software/sources/kaliveda.git/KVIndra/geometry",
"/home/john/software/sources/kaliveda.git/KVIndra/daq_cec",
"/home/john/software/sources/kaliveda.git/KVIndra/identification",
"/home/john/software/sources/kaliveda.git/KVIndra/exp_events",
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
"/home/john/software/build/kaliveda-build/1.10_R6/KVIndra/exp_events/",
0
    };
    static const char* fwdDeclCode = 
R"DICTFWDDCLS(
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate(R"ATTRDUMP(class describing the materials and detectors etc. to build an INDRA multidetector array)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVINDRA.h")))  KVINDRA;
class __attribute__((annotate(R"ATTRDUMP(Experimental configuration for INDRA-VAMOS experiments)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVINDRAe503.h")))  KVINDRAe503;
class __attribute__((annotate(R"ATTRDUMP(Build INDRA geometry from Huguet CAO infos)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$INDRAGeometryBuilder.h")))  INDRAGeometryBuilder;
class __attribute__((annotate(R"ATTRDUMP(Event reconstructed from energy losses in INDRA array)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVINDRAReconEvent.h")))  KVINDRAReconEvent;
class __attribute__((annotate(R"ATTRDUMP(Nucleus identified by INDRA array)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVINDRAReconNuc.h")))  KVINDRAReconNuc;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "KVINDRAReconEvent.h"
#include "INDRAGeometryBuilder.h"
#include "KVINDRA.h"
#include "KVINDRAe503.h"
#include "KVINDRAReconNuc.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"EBaseIndra_type", payloadCode, "@",
"EBaseIndra_typePhos", payloadCode, "@",
"INDRAGeometryBuilder", payloadCode, "@",
"KVINDRA", payloadCode, "@",
"KVINDRAReconEvent", payloadCode, "@",
"KVINDRAReconNuc", payloadCode, "@",
"KVINDRAe503", payloadCode, "@",
"gIndra", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libKVIndraexp_events",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libKVIndraexp_events_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libKVIndraexp_events_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libKVIndraexp_events() {
  TriggerDictionaryInitialization_libKVIndraexp_events_Impl();
}
