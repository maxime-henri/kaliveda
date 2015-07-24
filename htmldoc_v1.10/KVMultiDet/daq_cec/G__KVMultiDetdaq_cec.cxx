// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__KVMultiDetdaq_cec

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
#include "KVRawDataReader.h"
#include "GTOneScaler.h"
#include "GTGanilData.h"
#include "GTScalers.h"
#include "GTDataParameters.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void delete_KVRawDataReader(void *p);
   static void deleteArray_KVRawDataReader(void *p);
   static void destruct_KVRawDataReader(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVRawDataReader*)
   {
      ::KVRawDataReader *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVRawDataReader >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVRawDataReader", ::KVRawDataReader::Class_Version(), "KVRawDataReader.h", 16,
                  typeid(::KVRawDataReader), DefineBehavior(ptr, ptr),
                  &::KVRawDataReader::Dictionary, isa_proxy, 4,
                  sizeof(::KVRawDataReader) );
      instance.SetDelete(&delete_KVRawDataReader);
      instance.SetDeleteArray(&deleteArray_KVRawDataReader);
      instance.SetDestructor(&destruct_KVRawDataReader);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVRawDataReader*)
   {
      return GenerateInitInstanceLocal((::KVRawDataReader*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVRawDataReader*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_GTOneScaler(void *p = 0);
   static void *newArray_GTOneScaler(Long_t size, void *p);
   static void delete_GTOneScaler(void *p);
   static void deleteArray_GTOneScaler(void *p);
   static void destruct_GTOneScaler(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::GTOneScaler*)
   {
      ::GTOneScaler *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::GTOneScaler >(0);
      static ::ROOT::TGenericClassInfo 
         instance("GTOneScaler", ::GTOneScaler::Class_Version(), "GTOneScaler.h", 37,
                  typeid(::GTOneScaler), DefineBehavior(ptr, ptr),
                  &::GTOneScaler::Dictionary, isa_proxy, 4,
                  sizeof(::GTOneScaler) );
      instance.SetNew(&new_GTOneScaler);
      instance.SetNewArray(&newArray_GTOneScaler);
      instance.SetDelete(&delete_GTOneScaler);
      instance.SetDeleteArray(&deleteArray_GTOneScaler);
      instance.SetDestructor(&destruct_GTOneScaler);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::GTOneScaler*)
   {
      return GenerateInitInstanceLocal((::GTOneScaler*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::GTOneScaler*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_GTScalers(void *p = 0);
   static void *newArray_GTScalers(Long_t size, void *p);
   static void delete_GTScalers(void *p);
   static void deleteArray_GTScalers(void *p);
   static void destruct_GTScalers(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::GTScalers*)
   {
      ::GTScalers *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::GTScalers >(0);
      static ::ROOT::TGenericClassInfo 
         instance("GTScalers", ::GTScalers::Class_Version(), "GTScalers.h", 37,
                  typeid(::GTScalers), DefineBehavior(ptr, ptr),
                  &::GTScalers::Dictionary, isa_proxy, 4,
                  sizeof(::GTScalers) );
      instance.SetNew(&new_GTScalers);
      instance.SetNewArray(&newArray_GTScalers);
      instance.SetDelete(&delete_GTScalers);
      instance.SetDeleteArray(&deleteArray_GTScalers);
      instance.SetDestructor(&destruct_GTScalers);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::GTScalers*)
   {
      return GenerateInitInstanceLocal((::GTScalers*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::GTScalers*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_GTDataParameters(void *p = 0);
   static void *newArray_GTDataParameters(Long_t size, void *p);
   static void delete_GTDataParameters(void *p);
   static void deleteArray_GTDataParameters(void *p);
   static void destruct_GTDataParameters(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::GTDataParameters*)
   {
      ::GTDataParameters *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::GTDataParameters >(0);
      static ::ROOT::TGenericClassInfo 
         instance("GTDataParameters", ::GTDataParameters::Class_Version(), "GTDataParameters.h", 48,
                  typeid(::GTDataParameters), DefineBehavior(ptr, ptr),
                  &::GTDataParameters::Dictionary, isa_proxy, 4,
                  sizeof(::GTDataParameters) );
      instance.SetNew(&new_GTDataParameters);
      instance.SetNewArray(&newArray_GTDataParameters);
      instance.SetDelete(&delete_GTDataParameters);
      instance.SetDeleteArray(&deleteArray_GTDataParameters);
      instance.SetDestructor(&destruct_GTDataParameters);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::GTDataParameters*)
   {
      return GenerateInitInstanceLocal((::GTDataParameters*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::GTDataParameters*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_GTGanilData(void *p = 0);
   static void *newArray_GTGanilData(Long_t size, void *p);
   static void delete_GTGanilData(void *p);
   static void deleteArray_GTGanilData(void *p);
   static void destruct_GTGanilData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::GTGanilData*)
   {
      ::GTGanilData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::GTGanilData >(0);
      static ::ROOT::TGenericClassInfo 
         instance("GTGanilData", ::GTGanilData::Class_Version(), "GTGanilData.h", 59,
                  typeid(::GTGanilData), DefineBehavior(ptr, ptr),
                  &::GTGanilData::Dictionary, isa_proxy, 4,
                  sizeof(::GTGanilData) );
      instance.SetNew(&new_GTGanilData);
      instance.SetNewArray(&newArray_GTGanilData);
      instance.SetDelete(&delete_GTGanilData);
      instance.SetDeleteArray(&deleteArray_GTGanilData);
      instance.SetDestructor(&destruct_GTGanilData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::GTGanilData*)
   {
      return GenerateInitInstanceLocal((::GTGanilData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::GTGanilData*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr KVRawDataReader::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVRawDataReader::Class_Name()
{
   return "KVRawDataReader";
}

//______________________________________________________________________________
const char *KVRawDataReader::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVRawDataReader*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVRawDataReader::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVRawDataReader*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVRawDataReader::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVRawDataReader*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVRawDataReader::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVRawDataReader*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr GTOneScaler::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *GTOneScaler::Class_Name()
{
   return "GTOneScaler";
}

//______________________________________________________________________________
const char *GTOneScaler::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::GTOneScaler*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int GTOneScaler::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::GTOneScaler*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *GTOneScaler::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::GTOneScaler*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *GTOneScaler::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::GTOneScaler*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr GTScalers::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *GTScalers::Class_Name()
{
   return "GTScalers";
}

//______________________________________________________________________________
const char *GTScalers::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::GTScalers*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int GTScalers::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::GTScalers*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *GTScalers::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::GTScalers*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *GTScalers::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::GTScalers*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr GTDataParameters::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *GTDataParameters::Class_Name()
{
   return "GTDataParameters";
}

//______________________________________________________________________________
const char *GTDataParameters::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::GTDataParameters*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int GTDataParameters::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::GTDataParameters*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *GTDataParameters::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::GTDataParameters*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *GTDataParameters::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::GTDataParameters*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr GTGanilData::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *GTGanilData::Class_Name()
{
   return "GTGanilData";
}

//______________________________________________________________________________
const char *GTGanilData::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::GTGanilData*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int GTGanilData::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::GTGanilData*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *GTGanilData::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::GTGanilData*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *GTGanilData::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::GTGanilData*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void KVRawDataReader::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVRawDataReader.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KVRawDataReader::Class(),this);
   } else {
      R__b.WriteClassBuffer(KVRawDataReader::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_KVRawDataReader(void *p) {
      delete ((::KVRawDataReader*)p);
   }
   static void deleteArray_KVRawDataReader(void *p) {
      delete [] ((::KVRawDataReader*)p);
   }
   static void destruct_KVRawDataReader(void *p) {
      typedef ::KVRawDataReader current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KVRawDataReader

//______________________________________________________________________________
void GTOneScaler::Streamer(TBuffer &R__b)
{
   // Stream an object of class GTOneScaler.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(GTOneScaler::Class(),this);
   } else {
      R__b.WriteClassBuffer(GTOneScaler::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_GTOneScaler(void *p) {
      return  p ? new(p) ::GTOneScaler : new ::GTOneScaler;
   }
   static void *newArray_GTOneScaler(Long_t nElements, void *p) {
      return p ? new(p) ::GTOneScaler[nElements] : new ::GTOneScaler[nElements];
   }
   // Wrapper around operator delete
   static void delete_GTOneScaler(void *p) {
      delete ((::GTOneScaler*)p);
   }
   static void deleteArray_GTOneScaler(void *p) {
      delete [] ((::GTOneScaler*)p);
   }
   static void destruct_GTOneScaler(void *p) {
      typedef ::GTOneScaler current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::GTOneScaler

//______________________________________________________________________________
void GTScalers::Streamer(TBuffer &R__b)
{
   // Stream an object of class GTScalers.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(GTScalers::Class(),this);
   } else {
      R__b.WriteClassBuffer(GTScalers::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_GTScalers(void *p) {
      return  p ? new(p) ::GTScalers : new ::GTScalers;
   }
   static void *newArray_GTScalers(Long_t nElements, void *p) {
      return p ? new(p) ::GTScalers[nElements] : new ::GTScalers[nElements];
   }
   // Wrapper around operator delete
   static void delete_GTScalers(void *p) {
      delete ((::GTScalers*)p);
   }
   static void deleteArray_GTScalers(void *p) {
      delete [] ((::GTScalers*)p);
   }
   static void destruct_GTScalers(void *p) {
      typedef ::GTScalers current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::GTScalers

//______________________________________________________________________________
void GTDataParameters::Streamer(TBuffer &R__b)
{
   // Stream an object of class GTDataParameters.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(GTDataParameters::Class(),this);
   } else {
      R__b.WriteClassBuffer(GTDataParameters::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_GTDataParameters(void *p) {
      return  p ? new(p) ::GTDataParameters : new ::GTDataParameters;
   }
   static void *newArray_GTDataParameters(Long_t nElements, void *p) {
      return p ? new(p) ::GTDataParameters[nElements] : new ::GTDataParameters[nElements];
   }
   // Wrapper around operator delete
   static void delete_GTDataParameters(void *p) {
      delete ((::GTDataParameters*)p);
   }
   static void deleteArray_GTDataParameters(void *p) {
      delete [] ((::GTDataParameters*)p);
   }
   static void destruct_GTDataParameters(void *p) {
      typedef ::GTDataParameters current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::GTDataParameters

//______________________________________________________________________________
void GTGanilData::Streamer(TBuffer &R__b)
{
   // Stream an object of class GTGanilData.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(GTGanilData::Class(),this);
   } else {
      R__b.WriteClassBuffer(GTGanilData::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_GTGanilData(void *p) {
      return  p ? new(p) ::GTGanilData : new ::GTGanilData;
   }
   static void *newArray_GTGanilData(Long_t nElements, void *p) {
      return p ? new(p) ::GTGanilData[nElements] : new ::GTGanilData[nElements];
   }
   // Wrapper around operator delete
   static void delete_GTGanilData(void *p) {
      delete ((::GTGanilData*)p);
   }
   static void deleteArray_GTGanilData(void *p) {
      delete [] ((::GTGanilData*)p);
   }
   static void destruct_GTGanilData(void *p) {
      typedef ::GTGanilData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::GTGanilData

namespace {
  void TriggerDictionaryInitialization_libKVMultiDetdaq_cec_Impl() {
    static const char* headers[] = {
"KVRawDataReader.h",
"GTOneScaler.h",
"GTGanilData.h",
"GTScalers.h",
"GTDataParameters.h",
0
    };
    static const char* includePaths[] = {
"/home/john/software/sources/kaliveda.git/KVMultiDet/daq_cec/inc",
"/home/john/software/sources/kaliveda.git/KVMultiDet/base",
"/home/john/software/sources/kaliveda.git/KVMultiDet/daq_cec",
"/home/john/software/sources/kaliveda.git/GanTape/include",
"/home/john/software/build/kaliveda-build/1.10_R6",
"/home/john/software/build/root-v6-04-00/include",
"/home/john/software/build/root-v6-04-00/include",
"/home/john/software/build/kaliveda-build/1.10_R6/KVMultiDet/daq_cec/",
0
    };
    static const char* fwdDeclCode = 
R"DICTFWDDCLS(
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate(R"ATTRDUMP(Base class for reading raw data)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVRawDataReader.h")))  KVRawDataReader;
class __attribute__((annotate(R"ATTRDUMP(Scaler structure)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$GTOneScaler.h")))  GTOneScaler;
class __attribute__((annotate(R"ATTRDUMP(Scaler events class)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$GTGanilData.h")))  GTScalers;
class __attribute__((annotate(R"ATTRDUMP(Data Parameter names and index class)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$GTGanilData.h")))  GTDataParameters;
class __attribute__((annotate(R"ATTRDUMP(Interface to a GANIL formated Tape or File)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$GTGanilData.h")))  GTGanilData;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "KVRawDataReader.h"
#include "GTOneScaler.h"
#include "GTGanilData.h"
#include "GTScalers.h"
#include "GTDataParameters.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"GTDataParameters", payloadCode, "@",
"GTGanilData", payloadCode, "@",
"GTOneScaler", payloadCode, "@",
"GTScalers", payloadCode, "@",
"KVRawDataReader", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libKVMultiDetdaq_cec",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libKVMultiDetdaq_cec_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libKVMultiDetdaq_cec_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libKVMultiDetdaq_cec() {
  TriggerDictionaryInitialization_libKVMultiDetdaq_cec_Impl();
}
