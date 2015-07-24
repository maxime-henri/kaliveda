// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__VAMOSbase

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
#include "Random.h"
#include "LogFile.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_LogFile(void *p = 0);
   static void *newArray_LogFile(Long_t size, void *p);
   static void delete_LogFile(void *p);
   static void deleteArray_LogFile(void *p);
   static void destruct_LogFile(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LogFile*)
   {
      ::LogFile *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::LogFile >(0);
      static ::ROOT::TGenericClassInfo 
         instance("LogFile", ::LogFile::Class_Version(), "LogFile.h", 14,
                  typeid(::LogFile), DefineBehavior(ptr, ptr),
                  &::LogFile::Dictionary, isa_proxy, 4,
                  sizeof(::LogFile) );
      instance.SetNew(&new_LogFile);
      instance.SetNewArray(&newArray_LogFile);
      instance.SetDelete(&delete_LogFile);
      instance.SetDeleteArray(&deleteArray_LogFile);
      instance.SetDestructor(&destruct_LogFile);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LogFile*)
   {
      return GenerateInitInstanceLocal((::LogFile*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::LogFile*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_Random(void *p = 0);
   static void *newArray_Random(Long_t size, void *p);
   static void delete_Random(void *p);
   static void deleteArray_Random(void *p);
   static void destruct_Random(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Random*)
   {
      ::Random *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::Random >(0);
      static ::ROOT::TGenericClassInfo 
         instance("Random", ::Random::Class_Version(), "Random.h", 7,
                  typeid(::Random), DefineBehavior(ptr, ptr),
                  &::Random::Dictionary, isa_proxy, 4,
                  sizeof(::Random) );
      instance.SetNew(&new_Random);
      instance.SetNewArray(&newArray_Random);
      instance.SetDelete(&delete_Random);
      instance.SetDeleteArray(&deleteArray_Random);
      instance.SetDestructor(&destruct_Random);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Random*)
   {
      return GenerateInitInstanceLocal((::Random*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::Random*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr LogFile::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *LogFile::Class_Name()
{
   return "LogFile";
}

//______________________________________________________________________________
const char *LogFile::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LogFile*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int LogFile::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LogFile*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *LogFile::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LogFile*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *LogFile::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LogFile*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr Random::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Random::Class_Name()
{
   return "Random";
}

//______________________________________________________________________________
const char *Random::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Random*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Random::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Random*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Random::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Random*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Random::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Random*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void LogFile::Streamer(TBuffer &R__b)
{
   // Stream an object of class LogFile.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(LogFile::Class(),this);
   } else {
      R__b.WriteClassBuffer(LogFile::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_LogFile(void *p) {
      return  p ? new(p) ::LogFile : new ::LogFile;
   }
   static void *newArray_LogFile(Long_t nElements, void *p) {
      return p ? new(p) ::LogFile[nElements] : new ::LogFile[nElements];
   }
   // Wrapper around operator delete
   static void delete_LogFile(void *p) {
      delete ((::LogFile*)p);
   }
   static void deleteArray_LogFile(void *p) {
      delete [] ((::LogFile*)p);
   }
   static void destruct_LogFile(void *p) {
      typedef ::LogFile current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::LogFile

//______________________________________________________________________________
void Random::Streamer(TBuffer &R__b)
{
   // Stream an object of class Random.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(Random::Class(),this);
   } else {
      R__b.WriteClassBuffer(Random::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_Random(void *p) {
      return  p ? new(p) ::Random : new ::Random;
   }
   static void *newArray_Random(Long_t nElements, void *p) {
      return p ? new(p) ::Random[nElements] : new ::Random[nElements];
   }
   // Wrapper around operator delete
   static void delete_Random(void *p) {
      delete ((::Random*)p);
   }
   static void deleteArray_Random(void *p) {
      delete [] ((::Random*)p);
   }
   static void destruct_Random(void *p) {
      typedef ::Random current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Random

namespace {
  void TriggerDictionaryInitialization_libVAMOSbase_Impl() {
    static const char* headers[] = {
"Random.h",
"LogFile.h",
0
    };
    static const char* includePaths[] = {
"/home/john/software/sources/kaliveda.git/VAMOS/base/inc",
"/home/john/software/sources/kaliveda.git/VAMOS/base",
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
"/home/john/software/build/kaliveda-build/1.10_R6/VAMOS/base/",
0
    };
    static const char* fwdDeclCode = 
R"DICTFWDDCLS(
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$LogFile.h")))  LogFile;
class __attribute__((annotate("$clingAutoload$Random.h")))  Random;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "Random.h"
#include "LogFile.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"LogFile", payloadCode, "@",
"Random", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libVAMOSbase",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libVAMOSbase_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libVAMOSbase_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libVAMOSbase() {
  TriggerDictionaryInitialization_libVAMOSbase_Impl();
}
