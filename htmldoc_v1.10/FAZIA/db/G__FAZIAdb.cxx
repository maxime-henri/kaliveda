// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__FAZIAdb

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
#include "KVFAZIADB.h"
#include "KVFAZIADBRun.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_KVFAZIADB(void *p = 0);
   static void *newArray_KVFAZIADB(Long_t size, void *p);
   static void delete_KVFAZIADB(void *p);
   static void deleteArray_KVFAZIADB(void *p);
   static void destruct_KVFAZIADB(void *p);
   static void streamer_KVFAZIADB(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVFAZIADB*)
   {
      ::KVFAZIADB *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVFAZIADB >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVFAZIADB", ::KVFAZIADB::Class_Version(), "KVFAZIADB.h", 15,
                  typeid(::KVFAZIADB), DefineBehavior(ptr, ptr),
                  &::KVFAZIADB::Dictionary, isa_proxy, 16,
                  sizeof(::KVFAZIADB) );
      instance.SetNew(&new_KVFAZIADB);
      instance.SetNewArray(&newArray_KVFAZIADB);
      instance.SetDelete(&delete_KVFAZIADB);
      instance.SetDeleteArray(&deleteArray_KVFAZIADB);
      instance.SetDestructor(&destruct_KVFAZIADB);
      instance.SetStreamerFunc(&streamer_KVFAZIADB);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVFAZIADB*)
   {
      return GenerateInitInstanceLocal((::KVFAZIADB*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVFAZIADB*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KVFAZIADBRun(void *p = 0);
   static void *newArray_KVFAZIADBRun(Long_t size, void *p);
   static void delete_KVFAZIADBRun(void *p);
   static void deleteArray_KVFAZIADBRun(void *p);
   static void destruct_KVFAZIADBRun(void *p);
   static void streamer_KVFAZIADBRun(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVFAZIADBRun*)
   {
      ::KVFAZIADBRun *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVFAZIADBRun >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVFAZIADBRun", ::KVFAZIADBRun::Class_Version(), "KVFAZIADBRun.h", 9,
                  typeid(::KVFAZIADBRun), DefineBehavior(ptr, ptr),
                  &::KVFAZIADBRun::Dictionary, isa_proxy, 16,
                  sizeof(::KVFAZIADBRun) );
      instance.SetNew(&new_KVFAZIADBRun);
      instance.SetNewArray(&newArray_KVFAZIADBRun);
      instance.SetDelete(&delete_KVFAZIADBRun);
      instance.SetDeleteArray(&deleteArray_KVFAZIADBRun);
      instance.SetDestructor(&destruct_KVFAZIADBRun);
      instance.SetStreamerFunc(&streamer_KVFAZIADBRun);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVFAZIADBRun*)
   {
      return GenerateInitInstanceLocal((::KVFAZIADBRun*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVFAZIADBRun*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr KVFAZIADB::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVFAZIADB::Class_Name()
{
   return "KVFAZIADB";
}

//______________________________________________________________________________
const char *KVFAZIADB::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVFAZIADB*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVFAZIADB::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVFAZIADB*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVFAZIADB::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVFAZIADB*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVFAZIADB::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVFAZIADB*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KVFAZIADBRun::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVFAZIADBRun::Class_Name()
{
   return "KVFAZIADBRun";
}

//______________________________________________________________________________
const char *KVFAZIADBRun::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVFAZIADBRun*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVFAZIADBRun::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVFAZIADBRun*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVFAZIADBRun::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVFAZIADBRun*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVFAZIADBRun::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVFAZIADBRun*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void KVFAZIADB::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVFAZIADB.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      KVDataBase::Streamer(R__b);
      R__b >> kFirstRun;
      R__b >> kLastRun;
      R__b >> fRuns;
      R__b >> fSystems;
      R__b.CheckByteCount(R__s, R__c, KVFAZIADB::IsA());
   } else {
      R__c = R__b.WriteVersion(KVFAZIADB::IsA(), kTRUE);
      KVDataBase::Streamer(R__b);
      R__b << kFirstRun;
      R__b << kLastRun;
      R__b << fRuns;
      R__b << fSystems;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVFAZIADB(void *p) {
      return  p ? new(p) ::KVFAZIADB : new ::KVFAZIADB;
   }
   static void *newArray_KVFAZIADB(Long_t nElements, void *p) {
      return p ? new(p) ::KVFAZIADB[nElements] : new ::KVFAZIADB[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVFAZIADB(void *p) {
      delete ((::KVFAZIADB*)p);
   }
   static void deleteArray_KVFAZIADB(void *p) {
      delete [] ((::KVFAZIADB*)p);
   }
   static void destruct_KVFAZIADB(void *p) {
      typedef ::KVFAZIADB current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVFAZIADB(TBuffer &buf, void *obj) {
      ((::KVFAZIADB*)obj)->::KVFAZIADB::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVFAZIADB

//______________________________________________________________________________
void KVFAZIADBRun::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVFAZIADBRun.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      KVDBRun::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, KVFAZIADBRun::IsA());
   } else {
      R__c = R__b.WriteVersion(KVFAZIADBRun::IsA(), kTRUE);
      KVDBRun::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVFAZIADBRun(void *p) {
      return  p ? new(p) ::KVFAZIADBRun : new ::KVFAZIADBRun;
   }
   static void *newArray_KVFAZIADBRun(Long_t nElements, void *p) {
      return p ? new(p) ::KVFAZIADBRun[nElements] : new ::KVFAZIADBRun[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVFAZIADBRun(void *p) {
      delete ((::KVFAZIADBRun*)p);
   }
   static void deleteArray_KVFAZIADBRun(void *p) {
      delete [] ((::KVFAZIADBRun*)p);
   }
   static void destruct_KVFAZIADBRun(void *p) {
      typedef ::KVFAZIADBRun current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVFAZIADBRun(TBuffer &buf, void *obj) {
      ((::KVFAZIADBRun*)obj)->::KVFAZIADBRun::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVFAZIADBRun

namespace {
  void TriggerDictionaryInitialization_libFAZIAdb_Impl() {
    static const char* headers[] = {
"KVFAZIADB.h",
"KVFAZIADBRun.h",
0
    };
    static const char* includePaths[] = {
"/home/john/software/sources/kaliveda.git/FAZIA/db/inc",
"/home/john/software/sources/kaliveda.git/FAZIA/db",
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
"/home/john/software/build/kaliveda-build/1.10_R6/FAZIA/db/",
0
    };
    static const char* fwdDeclCode = 
R"DICTFWDDCLS(
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate(R"ATTRDUMP(database for FAZIA detector)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVFAZIADB.h")))  KVFAZIADB;
class __attribute__((annotate(R"ATTRDUMP(run description for FAZIA experiment)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVFAZIADB.h")))  KVFAZIADBRun;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "KVFAZIADB.h"
#include "KVFAZIADBRun.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"KVFAZIADB", payloadCode, "@",
"KVFAZIADBRun", payloadCode, "@",
"gFaziaDB", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libFAZIAdb",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libFAZIAdb_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libFAZIAdb_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libFAZIAdb() {
  TriggerDictionaryInitialization_libFAZIAdb_Impl();
}
