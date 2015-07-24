// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__BackTrackmodels

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
#include "Simple1DModel.h"
#include "Simple2DModel.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_BackTrackcLcLSimple1DModel(void *p = 0);
   static void *newArray_BackTrackcLcLSimple1DModel(Long_t size, void *p);
   static void delete_BackTrackcLcLSimple1DModel(void *p);
   static void deleteArray_BackTrackcLcLSimple1DModel(void *p);
   static void destruct_BackTrackcLcLSimple1DModel(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BackTrack::Simple1DModel*)
   {
      ::BackTrack::Simple1DModel *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BackTrack::Simple1DModel >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BackTrack::Simple1DModel", ::BackTrack::Simple1DModel::Class_Version(), "Simple1DModel.h", 12,
                  typeid(::BackTrack::Simple1DModel), DefineBehavior(ptr, ptr),
                  &::BackTrack::Simple1DModel::Dictionary, isa_proxy, 4,
                  sizeof(::BackTrack::Simple1DModel) );
      instance.SetNew(&new_BackTrackcLcLSimple1DModel);
      instance.SetNewArray(&newArray_BackTrackcLcLSimple1DModel);
      instance.SetDelete(&delete_BackTrackcLcLSimple1DModel);
      instance.SetDeleteArray(&deleteArray_BackTrackcLcLSimple1DModel);
      instance.SetDestructor(&destruct_BackTrackcLcLSimple1DModel);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BackTrack::Simple1DModel*)
   {
      return GenerateInitInstanceLocal((::BackTrack::Simple1DModel*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::BackTrack::Simple1DModel*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BackTrackcLcLSimple2DModel(void *p = 0);
   static void *newArray_BackTrackcLcLSimple2DModel(Long_t size, void *p);
   static void delete_BackTrackcLcLSimple2DModel(void *p);
   static void deleteArray_BackTrackcLcLSimple2DModel(void *p);
   static void destruct_BackTrackcLcLSimple2DModel(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BackTrack::Simple2DModel*)
   {
      ::BackTrack::Simple2DModel *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BackTrack::Simple2DModel >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BackTrack::Simple2DModel", ::BackTrack::Simple2DModel::Class_Version(), "Simple2DModel.h", 12,
                  typeid(::BackTrack::Simple2DModel), DefineBehavior(ptr, ptr),
                  &::BackTrack::Simple2DModel::Dictionary, isa_proxy, 4,
                  sizeof(::BackTrack::Simple2DModel) );
      instance.SetNew(&new_BackTrackcLcLSimple2DModel);
      instance.SetNewArray(&newArray_BackTrackcLcLSimple2DModel);
      instance.SetDelete(&delete_BackTrackcLcLSimple2DModel);
      instance.SetDeleteArray(&deleteArray_BackTrackcLcLSimple2DModel);
      instance.SetDestructor(&destruct_BackTrackcLcLSimple2DModel);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BackTrack::Simple2DModel*)
   {
      return GenerateInitInstanceLocal((::BackTrack::Simple2DModel*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::BackTrack::Simple2DModel*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace BackTrack {
//______________________________________________________________________________
atomic_TClass_ptr Simple1DModel::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Simple1DModel::Class_Name()
{
   return "BackTrack::Simple1DModel";
}

//______________________________________________________________________________
const char *Simple1DModel::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BackTrack::Simple1DModel*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Simple1DModel::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BackTrack::Simple1DModel*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Simple1DModel::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BackTrack::Simple1DModel*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Simple1DModel::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BackTrack::Simple1DModel*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace BackTrack
namespace BackTrack {
//______________________________________________________________________________
atomic_TClass_ptr Simple2DModel::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Simple2DModel::Class_Name()
{
   return "BackTrack::Simple2DModel";
}

//______________________________________________________________________________
const char *Simple2DModel::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BackTrack::Simple2DModel*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Simple2DModel::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BackTrack::Simple2DModel*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Simple2DModel::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BackTrack::Simple2DModel*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Simple2DModel::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BackTrack::Simple2DModel*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace BackTrack
namespace BackTrack {
//______________________________________________________________________________
void Simple1DModel::Streamer(TBuffer &R__b)
{
   // Stream an object of class BackTrack::Simple1DModel.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BackTrack::Simple1DModel::Class(),this);
   } else {
      R__b.WriteClassBuffer(BackTrack::Simple1DModel::Class(),this);
   }
}

} // namespace BackTrack
namespace ROOT {
   // Wrappers around operator new
   static void *new_BackTrackcLcLSimple1DModel(void *p) {
      return  p ? new(p) ::BackTrack::Simple1DModel : new ::BackTrack::Simple1DModel;
   }
   static void *newArray_BackTrackcLcLSimple1DModel(Long_t nElements, void *p) {
      return p ? new(p) ::BackTrack::Simple1DModel[nElements] : new ::BackTrack::Simple1DModel[nElements];
   }
   // Wrapper around operator delete
   static void delete_BackTrackcLcLSimple1DModel(void *p) {
      delete ((::BackTrack::Simple1DModel*)p);
   }
   static void deleteArray_BackTrackcLcLSimple1DModel(void *p) {
      delete [] ((::BackTrack::Simple1DModel*)p);
   }
   static void destruct_BackTrackcLcLSimple1DModel(void *p) {
      typedef ::BackTrack::Simple1DModel current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BackTrack::Simple1DModel

namespace BackTrack {
//______________________________________________________________________________
void Simple2DModel::Streamer(TBuffer &R__b)
{
   // Stream an object of class BackTrack::Simple2DModel.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BackTrack::Simple2DModel::Class(),this);
   } else {
      R__b.WriteClassBuffer(BackTrack::Simple2DModel::Class(),this);
   }
}

} // namespace BackTrack
namespace ROOT {
   // Wrappers around operator new
   static void *new_BackTrackcLcLSimple2DModel(void *p) {
      return  p ? new(p) ::BackTrack::Simple2DModel : new ::BackTrack::Simple2DModel;
   }
   static void *newArray_BackTrackcLcLSimple2DModel(Long_t nElements, void *p) {
      return p ? new(p) ::BackTrack::Simple2DModel[nElements] : new ::BackTrack::Simple2DModel[nElements];
   }
   // Wrapper around operator delete
   static void delete_BackTrackcLcLSimple2DModel(void *p) {
      delete ((::BackTrack::Simple2DModel*)p);
   }
   static void deleteArray_BackTrackcLcLSimple2DModel(void *p) {
      delete [] ((::BackTrack::Simple2DModel*)p);
   }
   static void destruct_BackTrackcLcLSimple2DModel(void *p) {
      typedef ::BackTrack::Simple2DModel current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BackTrack::Simple2DModel

namespace {
  void TriggerDictionaryInitialization_libBackTrackmodels_Impl() {
    static const char* headers[] = {
"Simple1DModel.h",
"Simple2DModel.h",
0
    };
    static const char* includePaths[] = {
"/home/john/software/sources/kaliveda.git/BackTrack/models/inc",
"/home/john/software/sources/kaliveda.git/BackTrack/base",
"/home/john/software/sources/kaliveda.git/BackTrack/models",
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
"/home/john/software/build/kaliveda-build/1.10_R6/BackTrack/models/",
0
    };
    static const char* fwdDeclCode = 
R"DICTFWDDCLS(
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
namespace BackTrack{class __attribute__((annotate(R"ATTRDUMP(Simple model to test backtrack procedures)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$Simple1DModel.h")))  Simple1DModel;}
namespace BackTrack{class __attribute__((annotate(R"ATTRDUMP(Simple model to test backtrack procedures)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$Simple2DModel.h")))  Simple2DModel;}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "Simple1DModel.h"
#include "Simple2DModel.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"BackTrack::Simple1DModel", payloadCode, "@",
"BackTrack::Simple2DModel", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libBackTrackmodels",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libBackTrackmodels_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libBackTrackmodels_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libBackTrackmodels() {
  TriggerDictionaryInitialization_libBackTrackmodels_Impl();
}
