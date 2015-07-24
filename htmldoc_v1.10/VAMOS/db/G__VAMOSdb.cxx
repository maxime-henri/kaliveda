// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__VAMOSdb

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
#include "KVIVDB.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_KVIVDB(void *p = 0);
   static void *newArray_KVIVDB(Long_t size, void *p);
   static void delete_KVIVDB(void *p);
   static void deleteArray_KVIVDB(void *p);
   static void destruct_KVIVDB(void *p);
   static void streamer_KVIVDB(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KVIVDB*)
   {
      ::KVIVDB *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KVIVDB >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KVIVDB", ::KVIVDB::Class_Version(), "KVIVDB.h", 10,
                  typeid(::KVIVDB), DefineBehavior(ptr, ptr),
                  &::KVIVDB::Dictionary, isa_proxy, 16,
                  sizeof(::KVIVDB) );
      instance.SetNew(&new_KVIVDB);
      instance.SetNewArray(&newArray_KVIVDB);
      instance.SetDelete(&delete_KVIVDB);
      instance.SetDeleteArray(&deleteArray_KVIVDB);
      instance.SetDestructor(&destruct_KVIVDB);
      instance.SetStreamerFunc(&streamer_KVIVDB);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KVIVDB*)
   {
      return GenerateInitInstanceLocal((::KVIVDB*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::KVIVDB*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr KVIVDB::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KVIVDB::Class_Name()
{
   return "KVIVDB";
}

//______________________________________________________________________________
const char *KVIVDB::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIVDB*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KVIVDB::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KVIVDB*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KVIVDB::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIVDB*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KVIVDB::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KVIVDB*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void KVIVDB::Streamer(TBuffer &R__b)
{
   // Stream an object of class KVIVDB.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      KVINDRADB::Streamer(R__b);
      R__b >> fDeltaPed;
      R__b >> fVAMOSCalConf;
      R__b.CheckByteCount(R__s, R__c, KVIVDB::IsA());
   } else {
      R__c = R__b.WriteVersion(KVIVDB::IsA(), kTRUE);
      KVINDRADB::Streamer(R__b);
      R__b << fDeltaPed;
      R__b << fVAMOSCalConf;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KVIVDB(void *p) {
      return  p ? new(p) ::KVIVDB : new ::KVIVDB;
   }
   static void *newArray_KVIVDB(Long_t nElements, void *p) {
      return p ? new(p) ::KVIVDB[nElements] : new ::KVIVDB[nElements];
   }
   // Wrapper around operator delete
   static void delete_KVIVDB(void *p) {
      delete ((::KVIVDB*)p);
   }
   static void deleteArray_KVIVDB(void *p) {
      delete [] ((::KVIVDB*)p);
   }
   static void destruct_KVIVDB(void *p) {
      typedef ::KVIVDB current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_KVIVDB(TBuffer &buf, void *obj) {
      ((::KVIVDB*)obj)->::KVIVDB::Streamer(buf);
   }
} // end of namespace ROOT for class ::KVIVDB

namespace {
  void TriggerDictionaryInitialization_libVAMOSdb_Impl() {
    static const char* headers[] = {
"KVIVDB.h",
0
    };
    static const char* includePaths[] = {
"/home/john/software/sources/kaliveda.git/VAMOS/db/inc",
"/home/john/software/sources/kaliveda.git/VAMOS/db",
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
"/home/john/software/build/kaliveda-build/1.10_R6/VAMOS/db/",
0
    };
    static const char* fwdDeclCode = 
R"DICTFWDDCLS(
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate(R"ATTRDUMP(Database for e494s experiment coupling INDRA with VAMOS)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KVIVDB.h")))  KVIVDB;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "KVIVDB.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"KVIVDB", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libVAMOSdb",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libVAMOSdb_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libVAMOSdb_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libVAMOSdb() {
  TriggerDictionaryInitialization_libVAMOSdb_Impl();
}
