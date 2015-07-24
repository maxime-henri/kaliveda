// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__ClassTraj

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
#include "/home/john/software/sources/kaliveda.git/KVMultiDet/examples/ClassTraj.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void delete_ClassTraj(void *p);
   static void deleteArray_ClassTraj(void *p);
   static void destruct_ClassTraj(void *p);
   static void streamer_ClassTraj(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ClassTraj*)
   {
      ::ClassTraj *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ClassTraj >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ClassTraj", ::ClassTraj::Class_Version(), "ClassTraj.h", 18,
                  typeid(::ClassTraj), DefineBehavior(ptr, ptr),
                  &::ClassTraj::Dictionary, isa_proxy, 16,
                  sizeof(::ClassTraj) );
      instance.SetDelete(&delete_ClassTraj);
      instance.SetDeleteArray(&deleteArray_ClassTraj);
      instance.SetDestructor(&destruct_ClassTraj);
      instance.SetStreamerFunc(&streamer_ClassTraj);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ClassTraj*)
   {
      return GenerateInitInstanceLocal((::ClassTraj*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::ClassTraj*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr ClassTraj::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ClassTraj::Class_Name()
{
   return "ClassTraj";
}

//______________________________________________________________________________
const char *ClassTraj::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ClassTraj*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ClassTraj::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ClassTraj*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ClassTraj::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ClassTraj*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ClassTraj::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ClassTraj*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void ClassTraj::Streamer(TBuffer &R__b)
{
   // Stream an object of class ClassTraj.

   KVRungeKutta::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ClassTraj(void *p) {
      delete ((::ClassTraj*)p);
   }
   static void deleteArray_ClassTraj(void *p) {
      delete [] ((::ClassTraj*)p);
   }
   static void destruct_ClassTraj(void *p) {
      typedef ::ClassTraj current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_ClassTraj(TBuffer &buf, void *obj) {
      ((::ClassTraj*)obj)->::ClassTraj::Streamer(buf);
   }
} // end of namespace ROOT for class ::ClassTraj

namespace {
  void TriggerDictionaryInitialization_G__ClassTraj_Impl() {
    static const char* headers[] = {
"/home/john/software/sources/kaliveda.git/KVMultiDet/examples/ClassTraj.h",
0
    };
    static const char* includePaths[] = {
"/home/john/software/sources/kaliveda.git/KVMultiDet/examples",
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
"/home/john/software/build/kaliveda-build/1.10_R6/KVMultiDet/",
0
    };
    static const char* fwdDeclCode = 
R"DICTFWDDCLS(
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate(R"ATTRDUMP(Classical trajectory for heavy ion collisions)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$/home/john/software/sources/kaliveda.git/KVMultiDet/examples/ClassTraj.h")))  ClassTraj;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "/home/john/software/sources/kaliveda.git/KVMultiDet/examples/ClassTraj.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"ClassTraj", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__ClassTraj",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__ClassTraj_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__ClassTraj_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__ClassTraj() {
  TriggerDictionaryInitialization_G__ClassTraj_Impl();
}
