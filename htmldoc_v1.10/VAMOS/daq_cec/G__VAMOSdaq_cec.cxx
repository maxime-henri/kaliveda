// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__VAMOSdaq_cec

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
#include "GTGanilDataVAMOS.h"
#include "Parameters.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_ParameterName(void *p = 0);
   static void *newArray_ParameterName(Long_t size, void *p);
   static void delete_ParameterName(void *p);
   static void deleteArray_ParameterName(void *p);
   static void destruct_ParameterName(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ParameterName*)
   {
      ::ParameterName *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ParameterName >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ParameterName", ::ParameterName::Class_Version(), "Parameters.h", 34,
                  typeid(::ParameterName), DefineBehavior(ptr, ptr),
                  &::ParameterName::Dictionary, isa_proxy, 4,
                  sizeof(::ParameterName) );
      instance.SetNew(&new_ParameterName);
      instance.SetNewArray(&newArray_ParameterName);
      instance.SetDelete(&delete_ParameterName);
      instance.SetDeleteArray(&deleteArray_ParameterName);
      instance.SetDestructor(&destruct_ParameterName);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ParameterName*)
   {
      return GenerateInitInstanceLocal((::ParameterName*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::ParameterName*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_Parameters(void *p = 0);
   static void *newArray_Parameters(Long_t size, void *p);
   static void delete_Parameters(void *p);
   static void deleteArray_Parameters(void *p);
   static void destruct_Parameters(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Parameters*)
   {
      ::Parameters *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::Parameters >(0);
      static ::ROOT::TGenericClassInfo 
         instance("Parameters", ::Parameters::Class_Version(), "Parameters.h", 47,
                  typeid(::Parameters), DefineBehavior(ptr, ptr),
                  &::Parameters::Dictionary, isa_proxy, 4,
                  sizeof(::Parameters) );
      instance.SetNew(&new_Parameters);
      instance.SetNewArray(&newArray_Parameters);
      instance.SetDelete(&delete_Parameters);
      instance.SetDeleteArray(&deleteArray_Parameters);
      instance.SetDestructor(&destruct_Parameters);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Parameters*)
   {
      return GenerateInitInstanceLocal((::Parameters*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::Parameters*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_GTGanilDataVAMOS(void *p = 0);
   static void *newArray_GTGanilDataVAMOS(Long_t size, void *p);
   static void delete_GTGanilDataVAMOS(void *p);
   static void deleteArray_GTGanilDataVAMOS(void *p);
   static void destruct_GTGanilDataVAMOS(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::GTGanilDataVAMOS*)
   {
      ::GTGanilDataVAMOS *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::GTGanilDataVAMOS >(0);
      static ::ROOT::TGenericClassInfo 
         instance("GTGanilDataVAMOS", ::GTGanilDataVAMOS::Class_Version(), "GTGanilDataVAMOS.h", 16,
                  typeid(::GTGanilDataVAMOS), DefineBehavior(ptr, ptr),
                  &::GTGanilDataVAMOS::Dictionary, isa_proxy, 4,
                  sizeof(::GTGanilDataVAMOS) );
      instance.SetNew(&new_GTGanilDataVAMOS);
      instance.SetNewArray(&newArray_GTGanilDataVAMOS);
      instance.SetDelete(&delete_GTGanilDataVAMOS);
      instance.SetDeleteArray(&deleteArray_GTGanilDataVAMOS);
      instance.SetDestructor(&destruct_GTGanilDataVAMOS);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::GTGanilDataVAMOS*)
   {
      return GenerateInitInstanceLocal((::GTGanilDataVAMOS*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::GTGanilDataVAMOS*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr ParameterName::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ParameterName::Class_Name()
{
   return "ParameterName";
}

//______________________________________________________________________________
const char *ParameterName::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ParameterName*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ParameterName::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ParameterName*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ParameterName::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ParameterName*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ParameterName::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ParameterName*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr Parameters::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Parameters::Class_Name()
{
   return "Parameters";
}

//______________________________________________________________________________
const char *Parameters::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Parameters*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Parameters::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Parameters*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Parameters::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Parameters*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Parameters::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Parameters*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr GTGanilDataVAMOS::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *GTGanilDataVAMOS::Class_Name()
{
   return "GTGanilDataVAMOS";
}

//______________________________________________________________________________
const char *GTGanilDataVAMOS::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::GTGanilDataVAMOS*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int GTGanilDataVAMOS::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::GTGanilDataVAMOS*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *GTGanilDataVAMOS::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::GTGanilDataVAMOS*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *GTGanilDataVAMOS::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::GTGanilDataVAMOS*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void ParameterName::Streamer(TBuffer &R__b)
{
   // Stream an object of class ParameterName.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ParameterName::Class(),this);
   } else {
      R__b.WriteClassBuffer(ParameterName::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ParameterName(void *p) {
      return  p ? new(p) ::ParameterName : new ::ParameterName;
   }
   static void *newArray_ParameterName(Long_t nElements, void *p) {
      return p ? new(p) ::ParameterName[nElements] : new ::ParameterName[nElements];
   }
   // Wrapper around operator delete
   static void delete_ParameterName(void *p) {
      delete ((::ParameterName*)p);
   }
   static void deleteArray_ParameterName(void *p) {
      delete [] ((::ParameterName*)p);
   }
   static void destruct_ParameterName(void *p) {
      typedef ::ParameterName current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ParameterName

//______________________________________________________________________________
void Parameters::Streamer(TBuffer &R__b)
{
   // Stream an object of class Parameters.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(Parameters::Class(),this);
   } else {
      R__b.WriteClassBuffer(Parameters::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_Parameters(void *p) {
      return  p ? new(p) ::Parameters : new ::Parameters;
   }
   static void *newArray_Parameters(Long_t nElements, void *p) {
      return p ? new(p) ::Parameters[nElements] : new ::Parameters[nElements];
   }
   // Wrapper around operator delete
   static void delete_Parameters(void *p) {
      delete ((::Parameters*)p);
   }
   static void deleteArray_Parameters(void *p) {
      delete [] ((::Parameters*)p);
   }
   static void destruct_Parameters(void *p) {
      typedef ::Parameters current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Parameters

//______________________________________________________________________________
void GTGanilDataVAMOS::Streamer(TBuffer &R__b)
{
   // Stream an object of class GTGanilDataVAMOS.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(GTGanilDataVAMOS::Class(),this);
   } else {
      R__b.WriteClassBuffer(GTGanilDataVAMOS::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_GTGanilDataVAMOS(void *p) {
      return  p ? new(p) ::GTGanilDataVAMOS : new ::GTGanilDataVAMOS;
   }
   static void *newArray_GTGanilDataVAMOS(Long_t nElements, void *p) {
      return p ? new(p) ::GTGanilDataVAMOS[nElements] : new ::GTGanilDataVAMOS[nElements];
   }
   // Wrapper around operator delete
   static void delete_GTGanilDataVAMOS(void *p) {
      delete ((::GTGanilDataVAMOS*)p);
   }
   static void deleteArray_GTGanilDataVAMOS(void *p) {
      delete [] ((::GTGanilDataVAMOS*)p);
   }
   static void destruct_GTGanilDataVAMOS(void *p) {
      typedef ::GTGanilDataVAMOS current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::GTGanilDataVAMOS

namespace {
  void TriggerDictionaryInitialization_libVAMOSdaq_cec_Impl() {
    static const char* headers[] = {
"GTGanilDataVAMOS.h",
"Parameters.h",
0
    };
    static const char* includePaths[] = {
"/home/john/software/sources/kaliveda.git/VAMOS/daq_cec/inc",
"/home/john/software/sources/kaliveda.git/VAMOS/daq_cec",
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
"/home/john/software/build/kaliveda-build/1.10_R6/VAMOS/daq_cec/",
0
    };
    static const char* fwdDeclCode = 
R"DICTFWDDCLS(
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate(R"ATTRDUMP(VAMOS: A parameter name)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$GTGanilDataVAMOS.h")))  ParameterName;
class __attribute__((annotate(R"ATTRDUMP(VAMOS: The list of acquisition parameters)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$GTGanilDataVAMOS.h")))  Parameters;
class __attribute__((annotate(R"ATTRDUMP(Reads and formats raw data from INDRA-VAMOS experiments)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$GTGanilDataVAMOS.h")))  GTGanilDataVAMOS;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "GTGanilDataVAMOS.h"
#include "Parameters.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"GTGanilDataVAMOS", payloadCode, "@",
"ParameterName", payloadCode, "@",
"Parameters", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libVAMOSdaq_cec",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libVAMOSdaq_cec_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libVAMOSdaq_cec_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libVAMOSdaq_cec() {
  TriggerDictionaryInitialization_libVAMOSdaq_cec_Impl();
}
